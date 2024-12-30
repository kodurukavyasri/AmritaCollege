import numpy as np
import cv2

def embed_text_in_image(image_path, message, output_path):
    # Load the image
    image = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)

    # Convert the message to binary
    binary_message = ''.join(format(ord(char), '08b') for char in message)
    binary_message += '1111111111111110'  # Add a delimiter to indicate the end of the message

    if len(binary_message) > image.size:
        raise ValueError("Message is too long to be embedded in the image.")

    # Embed the binary message into the image
    data_index = 0
    for i in range(image.shape[0]):
        for j in range(image.shape[1]):
            # Get the current pixel value
            pixel_value = image[i, j]
            if data_index < len(binary_message):
                # Modify the least significant bit
                pixel_value = (pixel_value & ~1) | int(binary_message[data_index])
                data_index += 1
            # Update the pixel value in the image
            image[i, j] = pixel_value

            if data_index >= len(binary_message):
                break
        if data_index >= len(binary_message):
            break

    # Save the modified image
    cv2.imwrite(output_path, image)
    print(f"Message embedded successfully in {output_path}.")

def extract_text_from_image(image_path):
    """Extract a text message from the least significant bits of an image."""
    # Load the image
    image = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)

    binary_message = ""
    
    for i in range(image.shape[0]):
        for j in range(image.shape[1]):
            # Get the current pixel value
            pixel_value = image[i, j]
            # Extract the least significant bit
            binary_message += str(pixel_value & 1)

            # Check for delimiter (end of message)
            if binary_message[-16:] == '1111111111111110':
                # Remove the delimiter and convert to characters
                binary_message = binary_message[:-16]
                message = ''.join(chr(int(binary_message[i:i+8], 2)) for i in range(0, len(binary_message), 8))
                return message

    return "No message found."

# Example usage
image_path = 'path/to/your/image.jpg'  # Replace with your input image path
output_path = 'path/to/your/output_image.jpg'  # Replace with your output image path
message_to_embed = "Hello, this is a secret message!"

# Embed the message into the image
embed_text_in_image(image_path, message_to_embed, output_path)

# Extract the message from the modified image
extracted_message = extract_text_from_image(output_path)
print("Extracted Message:", extracted_message)
