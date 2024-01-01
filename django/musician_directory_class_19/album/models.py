from django.db import models
from musician.models import Musician

# Create your models here.
class Album(models.Model):
    albumName=models.CharField(max_length=30)
    musician=models.ForeignKey(Musician,on_delete=models.CASCADE)
    album_release_date=models.DateField()
    rating=models.IntegerField()
    def __str__(self) -> str:
        return self.albumName
    

    