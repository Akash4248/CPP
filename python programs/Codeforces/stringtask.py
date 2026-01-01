s=input()
V={'a','e','i','o','u','y'}
s=s.lower()
k=""
for i in s:
    if i in V:
        continue
    else:
        k+='.'+i
print(k)