from django.contrib import admin
from django.urls import path
from posts.views import add_post
from posts.views import edit_post,delete_post

urlpatterns = [
    path('add/', add_post,name='add_post'),
    path('edit/<int:id>',edit_post,name='edit_post'),
    path('delete/<int:id>',delete_post,name="delete_post")
]
