from django.db import models
# Create your models here.
from category.models import CategoryModel
class TaskModel(models.Model):
    task_tittle=models.CharField(max_length=100)
    task_description=models.TextField(max_length=1024)
    is_completed=models.BooleanField(default=False)
    task_assign_date=models.DateField()
    category=models.ManyToManyField(CategoryModel)
   

    def __str__(self) -> str:
        return self.task_tittle
    