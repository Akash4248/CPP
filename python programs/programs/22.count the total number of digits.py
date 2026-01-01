#programme to find total number of digits in a number using while loop
n=int(input("enter a number:"))
counter=0
while n!=0:
    n=n//10
    counter+=1
    
    
print("number of digits are:",counter)
#print list in reverse order using loop
l=list(input("enter the values to list:").split())
n=len(l)
s=[]
i=n-1
while n>0:
    s.append(l[i])
    i-=1
    n-=1
print(s)
