def linear_interpolate(x0, y0, x1, y1, x):
    """
    Perform linear interpolation to find the value of y at a given x.
    
    Parameters:
    - x0: The x-coordinate of the first known point.
    - y0: The y-coordinate of the first known point.
    - x1: The x-coordinate of the second known point.
    - y1: The y-coordinate of the second known point.
    - x: The x-coordinate at which to interpolate.

    Returns:
    - The interpolated y value at x.
    """
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
