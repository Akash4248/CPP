#fibonacci series
n=int(input("enter the range:"))
l=[0,1]
for i in range(n):
    l.append(l[i]+l[i+1])
s=[l[i]/l[i-1] for i in range(2,len(l))]
print("series is:",s)
#to find factorial of a given number
n=int(input("enter the number:"))
s=n
for i in range(n):
    fact=s*i
print("factorial of ",n,"is",fact)
#to reverse a given integer
n=input("enter a number:")
print("integer in reversed order is:",n[::-1])
#reverse a number another method
n=int(input("enter a number:"))
reverse_number=0
print("Given number is:",n)
while n>0:
    reminder=n%10
    reverse_number=(reverse_number*10)+reminder
    n=n//10

print("reverse number is :",reverse_number)
