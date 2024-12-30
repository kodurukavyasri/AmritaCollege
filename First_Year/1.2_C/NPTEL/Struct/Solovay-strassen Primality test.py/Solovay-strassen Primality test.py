import random

def is_prime_solovay_strassen(n, iterations=5):
  """
  Implements the Solovay-Strassen primality test.

  Args:
    n: The number to test for primality.
    iterations: The number of iterations to run the test.

  Returns:
    True if n is likely prime, False otherwise.
  """

  if n <= 1:
    return False

  if n <= 3:
    return True

  if n % 2 == 0 or n % 3 == 0:
    return False

  for _ in range(iterations):
    a = random.randrange(2, n - 1)
    if not is_jacobi_symbol(a, n) == pow(a, (n - 1) // 2, n):
      return False

  return True

def is_jacobi_symbol(a, n):
  """
  Calculates the Jacobi symbol (a/n).

  Args:
    a: The numerator.
    n: The denominator.

  Returns:
    The Jacobi symbol (a/n).
  """

  if a == 0:
    return 0
  if a == 1:
    return 1

  a %= n

  if a == 2:
    if n % 8 == 1 or n % 8 == 7:
      return 1
    else:
      return -1
  if a % 2 == 0:
    return is_jacobi_symbol(2, n) * is_jacobi_symbol(a // 2, n)

  if a % 4 == 3 and n % 4 == 3:
    return -1

  return is_jacobi_symbol(n, a)

# Example usage:
number = 6
if is_prime_solovay_strassen(number):
  print(f"{number} is likely prime.")
else:
  print(f"{number} is likely composite.")