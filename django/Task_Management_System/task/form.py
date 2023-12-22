from django import forms
from . import models

class TaskForm(forms.ModelForm):
    class Meta:
        model=models.TaskModel
        fields='__all__'
        
        labels={
            'task_tittle':'Task Title',
            'task_description':'Task Description',
            'is_completed':'Is Completed',
            'task_assign_date':'Task Assign Date'
        }
