from django import forms
from categories.models import Category

class CategoryForm(forms.ModelForm):
    class Meta:
        model=Category
        fields='__all__'
