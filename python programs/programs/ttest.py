from turtle import *
for steps in range(10):
    for c in ('blue', 'red', 'green','light green','black','light blue'):
        speed(5)
        bgcolor(c)
        color(c)
        forward(steps)
        right(30)
color("black")
while True:
    begin_fill()
    forward(200)
    left(170)
    end_fill()
    
    if abs(pos()) < 1:
        exitonclick()
        break
