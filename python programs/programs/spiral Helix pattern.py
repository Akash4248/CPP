import turtle as t
s=t.Screen()
s.bgcolor("light blue")
t.speed(0.5)
for i in range(100):
    t.circle(5*i)
    t.circle(-5*i)
    t.left(i)
t.exitonclick()
