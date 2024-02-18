from typing import Any
from django.contrib.auth.forms import UserCreationForm
from django import forms
from django.contrib.auth.models import User

class UserRegistrationForm(UserCreationForm):
    class Meta:
        model = User
        fields =['username','first_name','last_name','email','password1','password2',]
    def save(self, commit: bool = ...) -> Any:
        return super().save(commit)
        