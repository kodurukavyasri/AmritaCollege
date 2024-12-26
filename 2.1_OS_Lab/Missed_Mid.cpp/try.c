#include <stdio.h>

#define MAX 10 // Maximum number of processes

struct Process {
    int id;                // Process ID
    int burstTime;         // Burst Time
    int priority;          // Priority
    int waitingTime;       // Waiting Time
    int turnaroundTime;    // Turnaround Time
    int completionTime;    // Completion Time
};

void calculateTimes(struct Process proc[], int n) {
    int totalWaitingTime = 0, totalTurnaroundTime = 0;

    // Calculate waiting time, turnaround time, and completion time
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            proc[i].completionTime = proc[i].burstTime;
            proc[i].waitingTime = 0;
        } else {
            proc[i].completionTime = proc[i - 1].completionTime + proc[i].burstTime;
            proc[i].waitingTime = proc[i].completionTime - proc[i].burstTime;
        }
        proc[i].turnaroundTime = proc[i].waitingTime + proc[i].burstTime;

        totalWaitingTime += proc[i].waitingTime;
        totalTurnaroundTime += proc[i].turnaroundTime;
    }

    printf("\nProcess ID\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\tCompletion Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", 
            proc[i].id, 
            proc[i].burstTime, 
            proc[i].priority, 
            proc[i].waitingTime, 
            proc[i].turnaroundTime,
            proc[i].completionTime);
    }

    printf("\nAverage Waiting Time: %.2f", (float)totalWaitingTime / n);
    printf("\nAverage Turnaround Time: %.2f\n", (float)totalTurnaroundTime / n);
}

void sortProcesses(struct Process proc[], int n) {
    struct Process temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (proc[j].priority > proc[j + 1].priority) {
                // Swap processes based on priority
                temp = proc[j];
                proc[j] = proc[j + 1];
                proc[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Process proc[MAX];
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Input process details
    for (int i = 0; i < n; i++) {
        printf("Enter Process ID: ");
        scanf("%d", &proc[i].id);
        printf("Enter Burst Time: ");
        scanf("%d", &proc[i].burstTime);
        printf("Enter Priority: ");
        scanf("%d", &proc[i].priority);
    }

    // Sort processes based on priority
    sortProcesses(proc, n);

    // Calculate waiting and turnaround times
    calculateTimes(proc, n);

    return 0;
}