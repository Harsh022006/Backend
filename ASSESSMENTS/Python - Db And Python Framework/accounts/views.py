
from django.shortcuts import render, redirect
from django.contrib.auth import authenticate, login, logout
from django.contrib.auth.models import User
from .models import Profile

def signup(request):
    if request.method=='POST':
        user=User.objects.create_user(
            username=request.POST['username'],
            password=request.POST['password']
        )
        Profile.objects.create(user=user, role=request.POST['role'])
        return redirect('login')
    return render(request,'signup.html')

def login_view(request):
    if request.method=='POST':
        user=authenticate(username=request.POST['username'],password=request.POST['password'])
        if user:
            login(request,user)
            return redirect('dashboard')
    return render(request,'login.html')

def dashboard(request):
    return render(request,'dashboard.html')
