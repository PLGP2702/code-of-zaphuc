class Shape:
    def __init__(self, color='red'):
        self.color = color
    def __str__(self):
        return 'Shape color = {}'.format(self.color)    
    def __repr__(self):
        return 'Shape (' + self.color + ')'     
class Circle(Shape):
    def __init__(self, radius = 1.0):
        super.__init__()
        self.radius = radius
    def __str__(self):
        return 'Circle color = {}, radius = {}'.format(self.color, self.radius)
    def __repr__(self):                        
        return 'Circle (' + self.color + str(self.radius) + ')'
    def get_area(self):
        import math
        return math.m.pi * self.radius ** 2
class Rectangle(Shape):
    def __init__(self, length, width):
        super.__init__()
        self.length = length
        self.width = width
    def __str__(self):
        return 'Rectangle color = {}, '
    def __repr__(self):
        return 'Rectangle (' + self.color + str(self.length) + str(self.width) + ')'
    def get_area(self):
        return round(self.length * self.width,2)
class Square(Rectangle): 
    def __init__(self, length):
        super().__init__(length, length)
    def __str__(self):
        return 
    def __repr__(self):
        return 'Square (' + self.color + ',' + str(self.length) + ')'        

s = Rectangle(5, 8)
repr(s)
s.get_area()