"""
CSC 134
M2LAB2
jacec
9/10/25
Purpose to design a graphic using python
"""

from turtle import *
import math

def draw_petal(x, y, size):
    """Draws a single filled petal."""
    penup()
    goto(x, y)
    pendown()
    color("yellow", "gold")
    begin_fill()
    right(45)
    circle(size, 90)
    left(90)
    circle(size, 90)
    end_fill()
    left(45)

def draw_stem(x, y, length):
    """Draws a green stem."""
    penup()
    goto(x, y)
    pendown()
    color("darkgreen")
    pensize(5)
    setheading(270) # Pointing down
    forward(length)

def draw_center(x, y, radius):
    """Draws the yellow center of the flower."""
    penup()
    goto(-19, 75 - radius)
    pendown()
    color("black", "brown")
    begin_fill()
    circle(20)
    end_fill()

# Set up the screen
setup(width=600, height=600)
speed(0)
bgcolor("lightblue")
title("Flower Drawing")

# Draw the Grass


# Draw the flower
stem_x, stem_y = 0, 50
draw_stem(stem_x, stem_y, 250)

# Draw the petals by rotating the turtle
num_petals = 8
petal_size = 50
for i in range(num_petals):
    draw_petal(stem_x, stem_y, petal_size)
    right(360 / num_petals)

# Draw the center of the flower
draw_center(stem_x, stem_y, 30)

hideturtle()
done()
