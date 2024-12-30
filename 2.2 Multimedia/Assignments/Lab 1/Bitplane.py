import random
import numpy as np
print("Enter number of rows:")
rows=int(input())
print("Enter number of columns:")
cols=int(input())
matrix=[]
for i in range(rows):
    row=[]
    for j in range(cols):
        row.append(random.randint(0,256))
    matrix.append(row)
matrix=np.matrix(matrix)
print(matrix)
print("Enter bitplane number:")
n=int(input())
for i in range(rows):
    for j in range(cols):
            maxsize=0
            Array=[]
            k=[]
            while(maxsize<33):
                Array.append(matrix[i,j]%2)
                matrix[i,j]=matrix[i,j]//2
                maxsize=maxsize+1
            matrix[i,j]=Array[n]
print(matrix)


        
        
        
