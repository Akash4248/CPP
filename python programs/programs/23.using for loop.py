#displaying numbers from -10 to -1 using for loop
for i in range(-10,0):
    print(i)
#program to display all prime numbers in given range
start=2
end=20

for i in range(start,end):
    count=0
    for j in range(2,11):
        if i%j==0:
            if i!=j:
                count+=1
    if(count==0):
        print(i)
    else:
        continue
print("done!")
