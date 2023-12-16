from django import forms
from django.core import validators
class contactForm(forms.Form):
    name=forms.CharField(label="user name")
    email=forms.EmailField(label="user email")

class PasswordValidator(forms.Form):
    name=forms.CharField(widget=forms.TextInput)
    # email=forms.EmailField(label='Enter your email')
    password=forms.CharField(widget=forms.PasswordInput)
    confirm_password=forms.CharField(widget=forms.PasswordInput)

    def clean(self):
        cleaned_data=super().clean()
        val_pass=self.cleaned_data['password']
        val_confirm_pass=self.cleaned_data['confirm_password']
        val_name=self.cleaned_data['name']
        if val_pass != val_confirm_pass:
            raise forms.ValidationError("password doesn't match")
        if len(val_name) <10:
            raise forms.ValidationError("Name must be at least 10 characters")
        