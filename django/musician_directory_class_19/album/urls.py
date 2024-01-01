from django.contrib import admin
from django.urls import path,include
from . import views
urlpatterns = [
 path('create_album/',views.CreateAlbum.as_view(),name='createAlbum'),
 path('edit_album/<int:pk>/',views.EditAlbum.as_view(),name='EditAlbum')
    
]
