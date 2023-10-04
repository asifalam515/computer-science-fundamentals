class Student:
    def __init__(self,name,curren_class,id):
        self.name=name
        self.id=id
        self.current_class=curren_class
    def __repr__(self)->str:
        return f'Student with name: {self.name}, class:{self.current_class}, id:{self.id}'
        
class Teacher:
    def __init__(self,name,subject,id):
        self.name=name
        self.subject=subject
        self.id=id
        
    def __repr__(self)->str:
        return f'Teacher :{self.name} ,subject:{self.subject }'
        
class School:
    def __init__(self,name)->None:
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
            student=Student(name,'C',id)
            self.students.append(student)
            return f'{name} is enrolled with id: {id},extra money {fee-6500}'
            
    def __repr__(self)->str:
        print('welcome to ',self.name)
        print('-----OUR Teacher')   
        for teacher in self.teachers:
            print(teacher)        
        print('-----OUR Students------')
        for student in self.students:
             print(student)
        
# alia=Student('alia',9,1)
# ranbir=Teacher('ranbir','chemistry',101)
# print(alia)
# print(ranbir)
        
phitron=School('phitron')
phitron.enroll('alia',5200)
phitron.enroll('rani',8000)
phitron.enroll('katrina',7000)
phitron.enroll('vaijan',9000)
phitron.add_teacher('tom cruise','Ds')
phitron.add_teacher('SRk','communication')
phitron.add_teacher('Aj','database')
print(phitron)