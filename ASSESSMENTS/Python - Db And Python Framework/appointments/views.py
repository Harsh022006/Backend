
from django.shortcuts import render, redirect
from .models import Appointment

def book(request):
    if request.method=='POST':
        Appointment.objects.create(
            patient=request.user,
            doctor_id=request.POST['doctor'],
            date=request.POST['date'],
            time=request.POST['time'],
            status='Pending'
        )
        return redirect('list')
    return render(request,'book.html')

def list(request):
    return render(request,'list.html',{'data':Appointment.objects.all()})
