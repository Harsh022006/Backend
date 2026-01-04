
from django.urls import path
from .views import signup, login_view, dashboard
urlpatterns=[
 path('', login_view, name='login'),
 path('signup/', signup),
 path('dashboard/', dashboard, name='dashboard'),
]
