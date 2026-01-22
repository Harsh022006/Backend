# EduTracker DRF Assessment (Student + Course API)

## Setup
```bash
python -m venv venv
# Windows:
venv\Scripts\activate
# Linux/Mac:
source venv/bin/activate

pip install django djangorestframework
python manage.py makemigrations
python manage.py migrate
python manage.py runserver
```

## Endpoints
- GET/POST   /api/courses/
- GET/PUT/DELETE /api/courses/<id>/
- GET/POST   /api/students/
- GET/PUT/DELETE /api/students/<id>/

### Create Student with courses
POST /api/students/
```json
{
  "name": "Harsh",
  "email": "harsh@gmail.com",
  "age": 21,
  "course_ids": [1, 2]
}
```
