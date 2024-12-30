#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}


int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}


void display_primes(int num) {
    printf("Prime numbers from 0 to %d are: ", num);
    for (int i = 0; i <= num; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
    
    
    printf("Enter a number: ");
    scanf("%d", &num);

    pid_t pid = fork(); 

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    } else if (pid == 0) {
        if (num % 2 != 0) { 
            unsigned long long fact = factorial(num);
            FILE *file = fopen("q2_a.txt", "w");
            if (file == NULL) {
                perror("Failed to open file");
                exit(1);
            }
            fprintf(file, "Factorial of %d is %llu\n", num, fact);
            fclose(file);
            printf("Factorial of %d written to q2_a.txt\n", num);
        } else {
            display_primes(num);
        }
        exit(0);
    } else {
        
        wait(NULL); 
        printf("Adios\n");
    }

    return 0;
}
 