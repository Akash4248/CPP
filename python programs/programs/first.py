# a = {2}
# x = int(input())
# num=2
# for j in range(3,int(num**0.5)+1):
#     b = []
#     if len(a)==x:
#         break 
#     else:
#         for i in range(2,j):
#             if j%i == 0:
#                 b.append(i)
#         if len(b) == 0:
#             a.add(j)
#         else:
#             continue  
# print(sorted(a))
# print(len(a))


def is_prime(num):
    if num <= 1:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True
x=int(input())
count = 0
num = 2

while count < x:
    if is_prime(num):
        print(num, end=" ")
        count +=1
    num+=1
