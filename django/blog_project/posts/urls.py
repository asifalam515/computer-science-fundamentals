from django.contrib import admin
from django.urls import path
from posts.views import add_post

urlpatterns = [
    path('add/', add_post,name='add_post'),
]
