import turtle as s
sides=int(input("Enter the number of sides of polygon:"))
length=float(input("Enter the lenght of the each side of polygon:"))
color=input("Enter the colourname or hexagon value of colour(# RRGGBB):")

angle=360.0/sides
s.fillcolor(color)
s.begin_fill()
for i in range(sides):
    s.forward(length)
    s.right(angle)
s.end_fill()
