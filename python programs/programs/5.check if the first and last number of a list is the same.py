l1=list(map(int,input("enter the 1 list element:").split()))
l2=list(map(int,input("enter the 2 list element:").split()))
for i in (l1,l2):
    if(i[0]==i[len(i)-1]):
        print("True: first and last element of list are same")
    else:
        print("False:")
