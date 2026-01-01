def li(l):
    
    i=int(input("enter the index to interchange:"))
    temp=l[i]
    l[i]=l[i+1]
    l[i+1]=temp
    print("swapped list =",l)
l=list(input("enter the list:").split())
print("list=",l)
li(l)
#to find length of list
print("length of list :",len(l))
