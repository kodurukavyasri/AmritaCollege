import numpy as np
import cv2
import matplotlib.pyplot as plt

def bit_plane_slicing(image):
    """Extracts the bit planes from a grayscale image."""
    num_bits = 8  # Assuming an 8-bit image
    bit_planes = []

    for i in range(num_bits):
        # Create a binary mask for the current bit
        bit_value = 1 << (num_bits - 1 - i)
        # Extract the current bit plane
        bit_plane = (image & bit_value) >> (num_bits - 1 - i)
        bit_planes.append(bit_plane)

    return bit_planes

def display_bit_planes(bit_planes):
    """Displays the extracted bit planes."""
    num_planes = len(bit_planes)
    plt.figure(figsize=(15, 8))

    for i in range(num_planes):
        plt.subplot(2, 4, i + 1)
        plt.imshow(bit_planes[i], cmap='gray', vmin=0, vmax=1)
        plt.title(f'Bit Plane {i + 1}')
        plt.axis('off')

    plt.tight_layout()
    plt.show()

# Load a grayscale image
image_path = 'path/to/your/image.jpg'  # Replace with your image path
image = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)

# Perform bit-plane slicing
bit_planes = bit_plane_slicing(image)

# Display the extracted bit planes
display_bit_planes(bit_planes)
