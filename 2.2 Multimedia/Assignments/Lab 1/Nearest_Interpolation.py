import numpy as np
import matplotlib.pyplot as plt

def nearest_neighbor_interpolation(image, new_size):
    original_height, original_width = image.shape
    new_height, new_width = new_size
    
    # Create an empty array for the new image
    new_image = np.zeros((new_height, new_width), dtype=image.dtype)
    
    # Calculate the scaling factors
    row_scale = original_height / new_height
    col_scale = original_width / new_width
    
    # Fill in the new image using nearest neighbor interpolation
    for i in range(new_height):
        for j in range(new_width):
            # Find the nearest pixel in the original image
            original_i = int(i * row_scale)
            original_j = int(j * col_scale)
            new_image[i, j] = image[original_i, original_j]
    
    return new_image

# Example usage
if __name__ == "__main__":
    # Create a sample 2D image (5x5 matrix)
    original_image = np.array([[10, 20, 30, 40, 50],
                                [60, 70, 80, 90, 100],
                                [110, 120, 130, 140, 150],
                                [160, 170, 180, 190, 200],
                                [210, 220, 230, 240, 250]], dtype=np.uint8)

    # Specify the new size for interpolation (e.g., enlarge to a 10x10 image)
    new_size = (10, 10)

    # Perform nearest neighbor interpolation
    interpolated_image = nearest_neighbor_interpolation(original_image, new_size)

    # Display the original and interpolated images
    plt.figure(figsize=(8, 4))
    
    plt.subplot(1, 2, 1)
    plt.title("Original Image")
    plt.imshow(original_image, cmap='gray', vmin=0, vmax=255)
    
    plt.subplot(1, 2, 2)
    plt.title("Interpolated Image (Nearest Neighbor)")
    plt.imshow(interpolated_image, cmap='gray', vmin=0, vmax=255)
    
    plt.show()