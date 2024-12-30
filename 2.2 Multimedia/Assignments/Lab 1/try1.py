import random 
import csv
# creating a random matrix 
matrix = [[random.randrange(256) for i in range(10)] for j in range(10)]
colsum = [] # stores sum of each the column
for i in range(10):
    col = 0
    for j in range(10):
        col += matrix[j][i]
    colsum.append(col)
for i  in range(10):
    rowsum = 0 #stores the value of a particular row and appended into the matrix
    for j in range(10):
        rowsum+= matrix[i][j]
    matrix[i].append(rowsum)
with open("Matrix_10_by_10.csv","w",newline='') as f:
    writer = csv.writer(f)
    for i in range(10):
        writer.writerow(matrix[i])
    writer.writerow(colsum) #after inputting the matrix and the sum of rows into the matrix, create a new row for the sum of all the columns