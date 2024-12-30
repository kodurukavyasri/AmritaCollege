import numpy as np
import matplotlib.pyplot as plt

# Creating a sample 100x100 grayscale image (matrix)
image = np.random.randint(0, 256, (100, 100), dtype=np.uint8)

# Calculating the histogram
histogram, bin_edges = np.histogram(image, bins=256, range=(0, 256))

# Ploting in the histogram
plt.figure(figsize=(10, 5))
plt.title("Histogram of Image")
plt.xlabel("Pixel Intensity")
plt.ylabel("Frequency")
plt.xlim([0, 255])
plt.plot(bin_edges[0:-1], histogram)  # Plotting the histogram
plt.fill_between(bin_edges[0:-1], histogram, alpha=0.5)  # Fill under the curve
plt.show()
