#to use a loop to display elements from a given list present at odd index positions
l=list(input("enter ther list:").split())
for i in range(len(l)):
    if i%2!=0:
        print(l[i])
#calulate the cube of all numbers from 1 to a given number
n=int(input("enter the number:"))
for i in range(n):
    print("Current Number is :",i," and the cube is:",i*i*i)
#finding the sum of series upto n terms
