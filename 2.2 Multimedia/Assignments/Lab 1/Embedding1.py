import random
import csv


def embed_message(message, matrix):
    # Convert message to binary
    binary_message = ''.join(format(ord(char), '08b') for char in message)
    message_length = len(binary_message)
    
    # Create a copy of the matrix
    embedded_matrix = matrix
    
    # Counter for tracking position in binary message
    message_pos = 0
    
    # Embed message bits into matrix
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if message_pos < message_length:
                # Clear the least significant bit
                embedded_matrix[i][j] &= 0b11111110
                # Set the least significant bit to the message bit
                embedded_matrix[i][j] |= int(binary_message[message_pos])
                message_pos += 1
    
    return embedded_matrix


height = int(input())
width = int(input())
message = input()

matrix = [[random.randrange(0, 255) for _ in range(width)] for _ in range(height)]

with open('original_matrix.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerows(matrix)

embedded_matrix = embed_message(message, matrix)

with open('embedded_matrix.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerows(embedded_matrix)

