from django.contrib import admin
from django.urls import path
from . import views
urlpatterns = [
    path('add_category',views.addCategory,name='add_category')
]
