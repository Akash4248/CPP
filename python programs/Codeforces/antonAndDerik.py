n=int(input())
a=input()
an=0
d=0
for i in a:
    if i=='A':
        an+=1
    else:
        d+=1
if an>d:
    print("Anton")
elif d>an:
    print("Danik")
else:
    print("Friendship")