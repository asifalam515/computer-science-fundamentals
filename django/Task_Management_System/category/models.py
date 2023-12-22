from django.db import models
from task.models import TaskModel

# Create your models here.
class CategoryModel(models.Model):
    category_name=models.CharField(max_length=100)
    task=models.ManyToManyField(TaskModel)
    
    def __str__(self) -> str:
        return self.category_name
    
    
