
from django.db import models
from django.contrib.auth.models import User

class Appointment(models.Model):
    patient=models.ForeignKey(User,on_delete=models.CASCADE,related_name='p')
    doctor=models.ForeignKey(User,on_delete=models.CASCADE,related_name='d')
    date=models.DateField()
    time=models.TimeField()
    status=models.CharField(max_length=20)
