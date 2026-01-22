from rest_framework import serializers
from .models import Student, Course


class CourseSerializer(serializers.ModelSerializer):
    class Meta:
        model = Course
        fields = "__all__"


class StudentSerializer(serializers.ModelSerializer):
    courses = CourseSerializer(many=True, read_only=True)

    course_ids = serializers.PrimaryKeyRelatedField(
        queryset=Course.objects.all(),
        many=True,
        write_only=True,
        required=False
    )

    class Meta:
        model = Student
        fields = ["id", "name", "email", "age", "courses", "course_ids"]

    def create(self, validated_data):
        course_ids = validated_data.pop("course_ids", [])
        student = Student.objects.create(**validated_data)
        student.courses.set(course_ids)
        return student

    def update(self, instance, validated_data):
        course_ids = validated_data.pop("course_ids", None)

        instance.name = validated_data.get("name", instance.name)
        instance.email = validated_data.get("email", instance.email)
        instance.age = validated_data.get("age", instance.age)
        instance.save()

        if course_ids is not None:
            instance.courses.set(course_ids)

        return instance
