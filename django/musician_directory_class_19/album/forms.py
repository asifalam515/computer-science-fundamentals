from django import forms
from . import models


class AlbumForm(forms.ModelForm):
    class Meta:
        model=models.Album
        fields='__all__'

        #register form
        
