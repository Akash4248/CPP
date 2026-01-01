s=input()
n={}
for i in s:
    if i not in n:
        n[i]=0
    else:
        n[i]+=0
   
count=0
for i in n:
    if n[i]<=1:
        count+=1
        
if count%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
