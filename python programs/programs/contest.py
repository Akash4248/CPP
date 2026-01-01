list1=[10,20,25,30,35]
list2=[40,45,60,75,90]
list3=list()
for i in list1:
    if (i%3==0):
        list3.append(i)
for i in list2:
    if (i%2==0):
        list3.append(i)
print("result list=",list3)
