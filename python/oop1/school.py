class Student:
    def __init__(self,name,id,cls) -> None:
        self.name=name
        self.id=id
        self.cls=cls
    def __repr__(self) -> str:
        return f'Student with name {self.name}, class:{self.cls}, id: {self.id}'
    
class Teacher:
    def __init__(self,name,subject,id) -> None:
        self.name=name
        self.subject=subject
        self.id=id
        
    def __repr__(self) -> str:
        return f'Teacher :{self.name} subject: {self.subject}'
    
class School:
    def __init__(self,name) -> None:
        self.name=name
        self.teachers=[]
        self.students=[]
        
    def add_teacher(self,name,subject):
        id=len(self.teachers)+101
        teacher=Teacher(name,subject,id)
        self.teachers.append(teacher)
    def enroll(self,name,fee):
        if fee <6500:
            return 'not enought fee'
        else:
            id=len(self.students)+1 
            student=Student(name,id,'c')
            self.students.append(student)
            return f'{name} is enrolled with id:{id}, extra money {fee-6500}'
    def __repr__(self) -> str:
        print(f"welcome to {self.name}")
        print('------ our teachers-----')
        for teacher in self.teachers:
            print(teacher)
        print('-------OUr STudents------')
        for student in self.students:
            print(student) 
        return 'all done for now'
        
    

phitron=School('Phitron')
phitron.enroll('alia',5200)
phitron.enroll('rani',23422)
phitron.enroll('katrina',23562)
phitron.enroll('vai jaan',800000)

phitron.add_teacher('ranbeer ','physics')
phitron.add_teacher('katrina ','dsa')
print(phitron)
