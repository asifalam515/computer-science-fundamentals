from django.shortcuts import render,redirect
from . import form
from . import models
# Create your views here.
def addTask(request):
    if request.method == 'POST':
        taskForm=form.TaskForm(request.POST)
        if taskForm.is_valid():
            taskForm.save()
            print(taskForm)
            return redirect('home')
           
            
    else:
        taskForm=form.TaskForm()
    
    return render(request,'add_task.html',{'form':taskForm})

def edit_task(request,id):
    task=models.TaskModel.objects.get(pk=id)
    task_form=form.TaskForm(instance=task)
    if request.method == 'POST':
        task_form=form.TaskForm(request.POST,instance=task)
        if task_form.is_valid():
            task_form.save()
            return redirect('home')
    else:
        task_form=form.TaskForm(instance=task)
    return render(request,'add_task.html',{'form':task_form})
        
def delete_task(request,id):
    task=models.TaskModel.objects.get(pk=id)
    task.delete()
    return redirect('home')