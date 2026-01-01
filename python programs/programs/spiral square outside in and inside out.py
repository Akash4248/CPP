import turtle as t
s=t.Screen()
s.bgcolor("light green")
t.color("blue")
k=11
def sqrfun(size):
    for i in range(4):
        t.fd(size)
        t.left(90)
        size+=10
for i in range(9):
    sqrfun(k)
    k+=40
