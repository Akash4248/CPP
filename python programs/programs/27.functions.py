#create a function
def fun(name,age):
    print("name is ",name)
    print("age is ",age)
name,age=input("enter the name and age:").split()
fun(name,age)
#use of arbitary arguments
def test(*values):
    for i in values:
        print(i)
t=list(input("enter the values:").split())
test(t)
#return multiple values from a function
def calculation(x,y):
    return (x+y),(x-y)
a,b=map(int,input("enter two numbers:").split())
print("sum and diffrence of two numbers :",calculation(a,b))
# creating a function with a default argument
def show_employee(name,salary=9000):#default argument
    print("name of employee:",name)
    print("salary of employee:",salary)
show_employee("Jeevan",20000000000)
show_employee("Rakesh")
