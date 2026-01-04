
from django.shortcuts import render
from .models import MedicalRecord

def history(request):
    return render(request,'history.html',{'records':MedicalRecord.objects.all()})
