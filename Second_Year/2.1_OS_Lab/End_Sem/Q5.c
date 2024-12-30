#include <stdio.h>
#include <stdbool.h>

#define JOBS 5
#define RESOURCES 3

bool canComplete(int available[], int max[][RESOURCES], int allocation[][RESOURCES], int job) {
    for (int i = 0; i < RESOURCES; i++) {
        if (max[job][i] - allocation[job][i] > available[i]) {
            return false;
        }
    }
    return true;
}

bool isSafe(int available[], int max[][RESOURCES], int allocation[][RESOURCES]) {
    int work[RESOURCES];
    bool finish[JOBS] = {false};
    
    for (int i = 0; i < RESOURCES; i++) {
        work[i] = available[i];
    }

    for (int count = 0; count < JOBS; count++) {
        bool found = false;
        for (int j = 0; j < JOBS; j++) {
            if (!finish[j] && canComplete(work, max, allocation, j)) {
                for (int k = 0; k < RESOURCES; k++) {
                    work[k] += allocation[j][k]; 
                }
                finish[j] = true;
                found = true;
            }
        }
        // If no job could be finished, we are in a deadlock state
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    int available[RESOURCES] = {4, 2, 3};

    int max[JOBS][RESOURCES] = {
        {2, 1, 1}, 
        {1, 1, 1}, 
        {3, 2, 2}, 
        {2, 1, 1}, 
        {1, 0, 1}  
    };

    int allocation[JOBS][RESOURCES] = {
        {0, 0, 0}, 
        {0, 0, 0}, 
        {0, 0, 0}, 
        {0, 0, 0}, 
        {0, 0, 0}  
    };

    if (isSafe(available, max, allocation)) {
        printf("All jobs can be completed safely.\n");
    } else {
        printf("Deadlock detected! Not all jobs can be completed.\n");
    }

    return 0;
}