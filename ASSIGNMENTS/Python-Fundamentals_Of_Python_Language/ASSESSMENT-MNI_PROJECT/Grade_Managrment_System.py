# Grade Management System
# Mini-project using functions, loops, and conditional statements

# Function to calculate grade based on average marks
def calculate_grade(average):
    if average >= 90:
        return "A+"
    elif average >= 80:
        return "A"
    elif average >= 70:
        return "B"
    elif average >= 60:
        return "C"
    elif average >= 50:
        return "D"
    else:
        return "F"

# Function to display a single student's details
def display_student(student):
    print(f"\nName: {student['name']}")
    print(f"Roll No: {student['roll']}")
    print("Marks:")
    for subject, mark in student['marks'].items():  # Display subject-wise marks
        print(f"  {subject}: {mark}")
    print(f"Total: {student['total']} | Average: {student['average']:.2f}")
    print(f"Grade: {student['grade']}")

# Function to display all student records
def display_all(students):
    print("\n======= STUDENT RECORDS =======")
    for s in students:
        display_student(s)
    print("================================")

# Main function to run the program
def grade_management_system():
    students = []

    while True:
        print("\nGRADE MANAGEMENT MENU")
        print("1. Add Student")
        print("2. View All Students")
        print("3. Exit")

        choice = input("Enter your choice (1-3): ")

        # Option 1: Add new student
        if choice == '1':
            name = input("\nEnter student name: ")
            roll = input("Enter roll number: ")

            marks = {}
            num_subjects = int(input("Enter number of subjects: "))

            # Get marks for each subject
            for i in range(num_subjects):
                subject_name = input(f"Enter name of subject {i+1}: ")
                mark = float(input(f"Enter marks for {subject_name}: "))
                marks[subject_name] = mark

            # Calculate total, average, and grade
            total = sum(marks.values())
            average = total / num_subjects
            grade = calculate_grade(average)

            # Store student details
            student = {
                "name": name,
                "roll": roll,
                "marks": marks,
                "total": total,
                "average": average,
                "grade": grade
            }

            students.append(student)
            print(f"\nStudent '{name}' added successfully!")

        # Option 2: View all student records
        elif choice == '2':
            if len(students) == 0:
                print("\nNo student records found!")
            else:
                display_all(students)

        # Option 3: Exit program
        elif choice == '3':
            print("\nExiting the Grade Management System. Goodbye!")
            break

        # Invalid choice handling
        else:
            print("\nInvalid choice! Please enter 1, 2, or 3.")

# Run the main program
grade_management_system()
