class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__(self):
        return f"({self.x}, {self.y})"

    def __eq__(self, other):
        if isinstance(other, Point):
            return self.x == other.x and self.y == other.y
        return False


class Line:
    def __init__(self, start: Point, end: Point):
        self.start = start
        self.end = end

    def __str__(self):
        return f"Line: {self.start} to {self.end}"

    def __add__(self, other):
        if isinstance(other, Line):
            return Line(self.start, other.end)
        raise ValueError("Can only concatenate with another Line.")

point_start = Point(1, 2)
point_end = Point(3, 4)

line1 = Line(point_start, point_end)
line2 = Line(Point(5, 6), Point(7, 8))

print(line1)  
print(line2) 

concatenated_line = line1 + line2
print(concatenated_line) 