def bilinear_interpolate(x, y, points):
    # Extracting the coordinates and values
    x1, y1, Q11 = points['Q11']
    x1, y2, Q12 = points['Q12']
    x2, y1, Q21 = points['Q21']
    x2, y2, Q22 = points['Q22']
    
    # Calculate the weights
    R1 = ((x2 - x) / (x2 - x1)) * Q11 + ((x - x1) / (x2 - x1)) * Q21  # Interpolation in x direction
    R2 = ((x2 - x) / (x2 - x1)) * Q12 + ((x - x1) / (x2 - x1)) * Q22  # Interpolation in x direction
    
    # Final interpolation in the y direction
    P = ((y2 - y) / (y2 - y1)) * R1 + ((y - y1) / (y2 - y1)) * R2
    
    return P

# Example usage
if __name__ == "__main__":
    # Define the four surrounding known points
    points = {
        'Q11': (0, 0, 10),  # Point at (0,0) with value 10
        'Q12': (0, 1, 20),  # Point at (0,1) with value 20
        'Q21': (1, 0, 30),  # Point at (1,0) with value 30
        'Q22': (1, 1, 40)   # Point at (1,1) with value 40
    }
    
    # Point to interpolate
    x = 0.5
    y = 0.5
    
    # Perform bilinear interpolation
    interpolated_value = bilinear_interpolate(x, y, points)
    
    print(f"The interpolated value at ({x}, {y}) is: {interpolated_value}")
