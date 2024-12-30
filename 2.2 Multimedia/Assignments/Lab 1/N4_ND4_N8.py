import numpy as np

def get_neighbors(image, x, y):
    # Get the dimensions of the image
    rows, cols = image.shape
    
    # Initialize lists to hold neighbor values
    n4_neighbors = []
    nd4_neighbors = []
    n8_neighbors = []
    
    # N4 neighbors (4-connectivity)
    if x > 0:  # Up
        n4_neighbors.append(image[x-1, y])
    if x < rows - 1:  # Down
        n4_neighbors.append(image[x+1, y])
    if y > 0:  # Left
        n4_neighbors.append(image[x, y-1])
    if y < cols - 1:  # Right
        n4_neighbors.append(image[x, y+1])
    
    # ND4 neighbors (diagonal neighbors)
    if x > 0 and y > 0:  # Top-left
        nd4_neighbors.append(image[x-1, y-1])
    if x > 0 and y < cols - 1:  # Top-right
        nd4_neighbors.append(image[x-1, y+1])
    if x < rows - 1 and y > 0:  # Bottom-left
        nd4_neighbors.append(image[x+1, y-1])
    if x < rows - 1 and y < cols - 1:  # Bottom-right
        nd4_neighbors.append(image[x+1, y+1])
    
    # Combine N4 and ND4 for N8 neighbors
    n8_neighbors = n4_neighbors + nd4_neighbors
    
    return n4_neighbors, nd4_neighbors, n8_neighbors

# Example usage
if __name__ == "__main__":
    # Create a sample image (5x5 matrix)
    image = np.array([[10, 20, 30, 40, 50],
                      [60, 70, 80, 90, 100],
                      [110, 120, 130, 140, 150],
                      [160, 170, 180, 190, 200],
                      [210, 220, 230, 240, 250]])
    
    # Specify the pixel coordinates (x=2, y=2 corresponds to value '130')
    x = 2
    y = 2
    
    n4_neighbors, nd4_neighbors, n8_neighbors = get_neighbors(image, x, y)
    
    print(f"N4 neighbors of pixel ({x}, {y}): {n4_neighbors}")
    print(f"ND4 neighbors of pixel ({x}, {y}): {nd4_neighbors}")
    print(f"N8 neighbors of pixel ({x}, {y}): {n8_neighbors}")
