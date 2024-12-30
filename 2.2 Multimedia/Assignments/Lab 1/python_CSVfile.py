import numpy as np
import pandas as pd

# Createing a 1000x1000 matrix with random values uniformly form [0.0,1.0)
matrix = np.random.rand(1000, 1000)

# The axis=1 argument specifies that the sum should be calculated across
# columns for each row. As a result, row_sums will be a one-dimensional array containing the sum of each of the 1000 rows.
row_sums = np.sum(matrix, axis=1)

# The axis=0 argument indicates that the sum should be calculated across rows for each column.
# Thus, column_sums will also be a one-dimensional array containing the sum of each of the 1000 columns.
column_sums = np.sum(matrix, axis=0)

# Creating a DataFrame to store the results
results = pd.DataFrame({
    'Row Index': np.arange(1000),
    'Row Sum': row_sums
})

# Adding column sums at the end of the DataFrame
column_sum_row = pd.DataFrame({'Row Index': ['Column Sum'], 'Row Sum': [np.sum(column_sums)]})
results = pd.concat([results, column_sum_row], ignore_index=True)

#Save the results to a CSV file
results.to_csv('matrix_sums.csv', index=False)

print("Row and column sums have been saved to 'matrix_sums.csv'.")