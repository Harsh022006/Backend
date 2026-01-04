
from django.db import models
from django.contrib.auth.models import User

class MedicalRecord(models.Model):
    patient=models.ForeignKey(User,on_delete=models.CASCADE)
    doctor=models.ForeignKey(User,on_delete=models.CASCADE,related_name='r')
    file=models.FileField(upload_to='records/')
    notes=models.TextField()
