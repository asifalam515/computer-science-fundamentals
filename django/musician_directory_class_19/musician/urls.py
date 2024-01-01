from django.contrib import admin
from django.urls import path,include
from . import views
from django.views.generic import TemplateView

urlpatterns = [
 path('create_musician/',views.AddMusician.as_view(),name='add_musician'),
 path('delete_musician/<int:pk>/',views.Delete_musician.as_view(),name='delete_musician'),
 
    
]
