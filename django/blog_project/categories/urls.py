from django.contrib import admin
from django.urls import path
from categories.views import add_category

urlpatterns = [
    path('add/',add_category,name='add_category' )
]
