
from django.urls import path
from .views import book, list
urlpatterns=[
 path('book/', book),
 path('list/', list, name='list'),
]
