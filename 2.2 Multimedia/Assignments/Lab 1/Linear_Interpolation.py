def linear_interpolate(x0, y0, x1, y1, x):
    if x0 == x1:
        raise ValueError("x0 and x1 cannot be the same value.")
    
    # Calculate the slope (m)
    m = (y1 - y0) / (x1 - x0)
    
    # Calculate the interpolated value
    y = y0 + m * (x - x0)
    
    return y

# Example usage
if __name__ == "__main__":
    # Known points
    x0 = 1
    y0 = 2
    x1 = 3
    y1 = 4

    # Point to interpolate
    x = 2  # This is between x0 and x1

    # Perform interpolation
    interpolated_value = linear_interpolate(x0, y0, x1, y1, x)
    
    print(f"The interpolated value at x = {x} is: {interpolated_value}")
