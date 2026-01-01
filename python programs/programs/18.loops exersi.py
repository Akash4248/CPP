#printing first n natural numbers using while looop
n=int(input("enter the n value:"))
i=1
while(n>0):
    print(i,end=" ")
    i+=1
    n-=1
#calcualte the sum of all numbers from 1 to a given number
n=int(input("\nenter a number:"))
sum=0
s=n
while n>0:
    sum+=n
    n-=1
print("sum to ",s," is :",sum)
print("average is:",sum/s)
