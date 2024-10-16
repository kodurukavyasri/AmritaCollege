function factorial(n) {
    if (n === 0 || n === 1) {
      return 1;
    } else {
      return n * factorial(n - 1);
    }
  }
  
  // Get the number from the user
  const num = parseInt(prompt("Enter a non-negative integer:"));
  
  // Calculate and display the factorial
  if (num < 0) {
    console.log("Factorial is not defined for negative numbers.");
  } else {
    const result = factorial(num);
    console.log(`The factorial of ${num} is ${result}`);
  }