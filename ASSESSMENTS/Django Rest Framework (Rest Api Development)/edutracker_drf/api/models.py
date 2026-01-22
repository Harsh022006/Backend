from django.db import models

class Course(models.Model):
    title = models.CharField(max_length=200)
    description = models.TextField(blank=True, null=True)
    duration_weeks = models.PositiveIntegerField(default=4)

    def __str__(self):
        return self.title


class Student(models.Model):
    name = models.CharField(max_length=200)
    email = models.EmailField(unique=True)
    age = models.PositiveIntegerField()

    courses = models.ManyToManyField(Course, blank=True, related_name="students")

    def __str__(self):
        return self.name
