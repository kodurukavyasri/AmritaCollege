// process2.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

void generateFibonacci(int n) {
    FILE *file = fopen("odd.txt", "w");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    
    int a = 0, b = 1, next;
    
    fprintf(file, "Fibonacci sequence up to %d:\n", n);
    
    while (a <= n) {
        fprintf(file, "%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    
    fclose(file);
}

int sumOfEvens(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int shmid;
    key_t key = 1234; // Same key as in process1
    int *shared_memory;

    // Access the shared memory segment
    shmid = shmget(key, sizeof(int), 0666);
    if (shmid == -1) {
        perror("shmget failed");
        exit(1);
    }

    // Attach to the shared memory segment
    shared_memory = (int *)shmat(shmid, NULL, 0);
    if (shared_memory == (int *)(-1)) {
        perror("shmat failed");
        exit(1);
    }

    // Read the integer value from shared memory
    int number = *shared_memory;

    // Check if the number is odd or even
    if (number % 2 != 0) {
        generateFibonacci(number);
        printf("Generated Fibonacci sequence up to %d in odd.txt\n", number);
    } else {
        int sum = sumOfEvens(number);
        printf("Sum of all even numbers from 1 to %d is %d\n", number, sum);
    }

    // Detach from the shared memory segment
    shmdt(shared_memory);

    return 0;
}