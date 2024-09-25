#include <stdio.h>
#include <stdlib.h> // For qsort

// Function to compare burst times for SJF
int compare_bt(const void *a, const void *b) {
    int *p1 = (int *)a;
    int *p2 = (int *)b;
    return *p1 - *p2;
}

// Function to compare priorities for Priority Scheduling
int compare_priority(const void *a, const void *b) {
    int *p1 = (int *)a;
    int *p2 = (int *)b;
    return *p1 - *p2; 
}

// Function for First Come First Serve (FCFS)
void fcfs(int process[], int at[], int bt[], int n) {
    int i, wt[n], tat[n], ct[n], total_wt = 0, total_tat = 0;
    ct[0] = at[0] + bt[0];
    wt[0] = 0;
    tat[0] = ct[0] - at[0];
    for (i = 1; i < n; i++) {
        ct[i] = ct[i - 1] + bt[i];
        wt[i] = ct[i] - at[i];
        tat[i] = ct[i] - at[i];
        total_wt += wt[i];
        total_tat += tat[i];
    }
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", process[i], at[i], bt[i], ct[i], wt[i], tat[i]);
    }
    printf("Average Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);
}

// Function for Shortest Job First (SJF)
void sjf(int process[], int at[], int bt[], int n) {
    int i, j, k, wt[n], tat[n], ct[n], total_wt = 0, total_tat = 0;
    int *temp_process = (int *)malloc(n * sizeof(int));
    int *temp_at = (int *)malloc(n * sizeof(int));
    int *temp_bt = (int *)malloc(n * sizeof(int));

    // Copy process information to temporary arrays for sorting
    for (i = 0; i < n; i++) {
        temp_process[i] = process[i];
        temp_at[i] = at[i];
        temp_bt[i] = bt[i];
    }

    // Sort processes based on burst time
    qsort(temp_bt, n, sizeof(int), compare_bt);

    // Find completion time, waiting time, and turnaround time
    ct[0] = temp_at[0] + temp_bt[0];
    wt[0] = 0;
    tat[0] = ct[0] - temp_at[0];
    for (i = 1; i < n; i++) {
        // Find the index of the sorted burst time in the original array
        for (j = 0; j < n; j++) {
            if (temp_bt[i] == bt[j]) {
                k = j;
                break;
            }
        }
        ct[i] = ct[i - 1] + bt[k];
        wt[i] = ct[i] - at[k];
        tat[i] = ct[i] - at[k];
        total_wt += wt[i];
        total_tat += tat[i];
    }

    printf("Process\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", process[i], at[i], bt[i], ct[i], wt[i], tat[i]);
    }
    printf("Average Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);
    free(temp_process);
    free(temp_at);
    free(temp_bt);
}

// Function for Round Robin (RR)
void round_robin(int process[], int at[], int bt[], int n, int quantum) {
    int i, j, rem_bt[n], ct[n], wt[n], tat[n], total_wt = 0, total_tat = 0;
    for (i = 0; i < n; i++) {
        rem_bt[i] = bt[i]; // Initialize remaining burst time
        ct[i] = 0; // Initialize completion time
        wt[i] = 0; // Initialize waiting time
        tat[i] = 0; // Initialize turnaround time
    }

    int time = 0; // Time counter
    int completed = 0; // Number of completed processes
    while (completed != n) {
        for (i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                if (rem_bt[i] > quantum) {
                    time += quantum; // Increase time by quantum
                    rem_bt[i] -= quantum; // Reduce remaining burst time
                } else {
                    time += rem_bt[i]; // Increase time by remaining burst time
                    ct[i] = time; // Set completion time
                    wt[i] = ct[i] - at[i] - bt[i]; // Calculate waiting time
                    tat[i] = ct[i] - at[i]; // Calculate turnaround time
                    completed++; // Mark process as completed
                    rem_bt[i] = 0; // Set remaining burst time to 0
                }
            }
        }
    }

    printf("Process\tArrival Time\tBurst Time\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", process[i], at[i], bt[i], ct[i], wt[i], tat[i]);
        total_wt += wt[i];
        total_tat += tat[i];
    }

    printf("Average Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);
}

// Function for Priority Scheduling
void priority_shedule(int process[], int at[], int bt[], int priority[], int n) {
    int i, j, k, wt[n], tat[n], ct[n], total_wt = 0, total_tat = 0;
    int *temp_process = (int *)malloc(n * sizeof(int));
    int *temp_at = (int *)malloc(n * sizeof(int));
    int *temp_bt = (int *)malloc(n * sizeof(int));
    int *temp_priority = (int *)malloc(n * sizeof(int));

    // Copy process information to temporary arrays for sorting
    for (i = 0; i < n; i++) {
        temp_process[i] = process[i];
        temp_at[i] = at[i];
        temp_bt[i] = bt[i];
        temp_priority[i] = priority[i];
    }

    // Sort processes based on priority
    qsort(temp_priority, n, sizeof(int), compare_priority);

    // Find completion time, waiting time, and turnaround time
    ct[0] = temp_at[0] + temp_bt[0];
    wt[0] = 0;
    tat[0] = ct[0] - temp_at[0];
    for (i = 1; i < n; i++) {
        // Find the index of the sorted priority in the original array
        for (j = 0; j < n; j++) {
            if (temp_priority[i] == priority[j]) {
                k = j;
                break;
            }
        }
        ct[i] = ct[i - 1] + bt[k];
        wt[i] = ct[i] - at[k];
        tat[i] = ct[i] - at[k];
        total_wt += wt[i];
        total_tat += tat[i];
    }

    printf("Process\tArrival Time\tBurst Time\tPriority\tCompletion Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", process[i], at[i], bt[i], priority[i], ct[i], wt[i], tat[i]);
    }
    printf("Average Waiting Time: %.2f\n", (float)total_wt / n);
    printf("Average Turnaround Time: %.2f\n", (float)total_tat / n);
    free(temp_process);
    free(temp_at);
    free(temp_bt);
    free(temp_priority);
}

int main() {
    int choice;

    printf("Choose Scheduling Algorithm:\n");
    printf("1. First Come First Serve (FCFS)\n");
    printf("2. Shortest Job First (SJF)\n");
    printf("3. Round Robin (RR)\n");
    printf("4. Priority Scheduling\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int process[] = {1, 2, 3, 4};
            int at[] = {2, 1, 0, 4};
            int bt[] = {5, 6, 3, 5};
            int n = 4;
            fcfs(process, at, bt, n);
            break;
        }
        case 2: {
            int process[] = {1, 2, 3, 4, 5};
            int at[] = {2, 5, 1, 0, 4};
            int bt[] = {5, 2, 6, 3, 5};
            int n = 5;
            sjf(process, at, bt, n);
            break;
        }
        case 3: {
            int process[] = {1, 2, 3, 4};
            int at[] = {0, 2, 4, 6};
            int bt[] = {5, 4, 2, 3};
            int n = 4;
            int quantum = 2;
            round_robin(process, at, bt, n, quantum);
            break;
        }
        case 4: {
            int process[] = {1, 2, 3, 4};
            int at[] = {0, 1, 2, 3};
            int bt[] = {5, 2, 4, 3};
            int priority[] = {3, 1, 2, 4}; // Higher number means lower priority
            int n = 4;
            priority_shedule(process, at, bt, priority, n);
            break;
        }
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}