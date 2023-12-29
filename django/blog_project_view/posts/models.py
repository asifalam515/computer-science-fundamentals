from django.db import models
from categories.models import Category
from django.contrib.auth.models import User
# Create your models here.
class Post(models.Model):
    title = models.CharField(max_length=50)
    content = models.TextField()
    category = models.ManyToManyField(Category) # ekta post multiple categorir moddhe thakte pare abar ekta categorir moddhe multiple post thakte pare
    author = models.ForeignKey(User, on_delete=models.CASCADE)
    image=models.ImageField(upload_to='posts/media/uploads/',blank=True,null=True)
    
    def __str__(self):
        return self.title 
    
class Comment(models.Model):
    # one post can have multiple comment
    post = models.ForeignKey(Post,on_delete=models.CASCADE,related_name ='comments')
    name=models.CharField(max_length=30)
    email=models.EmailField()
    body=models.TextField()
    created_on=models.DateField(auto_now_add=True) #jkn ei ei class er object create hobe sei time ta create kore dibe
    def __str__(self) -> str:
        return f"Comments by {self.name}"
    
    
    

    
    