from django.db import models

# Create your models here.
class Employee(models.Model):
    # id=models.IntegerField(primary_key=True)
    id=models.AutoField(primary_key=True)
    name=models.CharField(max_length=20)
    address=models.TextField()
    # message=models.CharField(max_length=20)
   
    email_address=models.EmailField(blank=True,null=True)
    files=models.BinaryField(blank=True,null=True)
    isProgrammer=models.BooleanField(blank=True,null=True)
    birthday=models.DateField(blank=True,null=True) 
    showTime=models.DateTimeField(blank=True,null=True)
    showDuration=models.DurationField(blank=True,null=True)
    image=models.ImageField(blank=True,null=True)
    settingJson=models.JSONField(blank=True,null=True)
    ipType=models.GenericIPAddressField(blank=True,null=True)
    # nullField=models.NullBooleanField()
    smallInteger=models.SmallIntegerField(blank=True,null=True)
   
    
    
    
    
    def __str__(self) -> str:
        return f'Id:{self.id},Name:{self.name}'