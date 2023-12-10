
from django.urls import path,include
from . import views
urlpatterns = [
path('',views.index,name='index'),
path('notes/',views.notes,name='notes'),
# note id diye receive korlam
path('note/<int:note_id>',views.notes,name='notes'),

]
