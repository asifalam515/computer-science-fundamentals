from django.db import models

# Create your models here.
class Employee(models.Model):
    id=models.IntegerField(primary_key=True)
    name=models.CharField(max_length=20)
    address=models.TextField()
    def __str__(self) -> str:
        return f'Id:{self.id},Name:{self.name}'