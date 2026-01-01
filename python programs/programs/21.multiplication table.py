#programme to print a multiplication table of a given number
n=int(input("enter a number:"))
for i in range(1,11):
    print(i*n)
#display numbers from a list using loop
l=list(map(int,input("enter the list:").split()))
for i in l:
    if(i%5==0):
        if(i>150):
            continue
        elif(i>500):
            break
        else:
            print(i)
