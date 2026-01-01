#creating a inner function to calulate addition of numbers
def out(a,b):
    def inner(a,b):
        s=a+b
        return s
    
    return inner(a,b)+5
x,y=map(int,input('enter two numbers:').split())
print('sum+5 is ',out(x,y))
#assign a difffrent name to function and call it through the name
def display_student(name,age):
    print(name,age)
show_student=display_student
show_student("Jeevan",33)
#generate a list of all even numbers
l=list(range(2,49,2))
print(l)
print(max(l))
