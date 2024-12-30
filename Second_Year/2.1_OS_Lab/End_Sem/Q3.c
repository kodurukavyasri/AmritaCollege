#include <stdio.h>

#define MAX_PROCESSES 6

void calculateTimes(int arrival[], int service[], int n) {
    int completion[MAX_PROCESSES], turnaround[MAX_PROCESSES], waiting[MAX_PROCESSES];
    int total_time = 0;

    for (int i = 0; i < n; i++) {
        service[i] *= 60;
    }

    // Sorting processes based on arrival time by bubble sort
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arrival[i] > arrival[j]) {
                int temp = arrival[i];
                arrival[i] = arrival[j];
                arrival[j] = temp;

                temp = service[i];
                service[i] = service[j];
                service[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            total_time = arrival[i] + service[i]; 
        } else {
            if (total_time < arrival[i]) {
                total_time = arrival[i]; 
            }
            total_time += service[i];
        }
        completion[i] = total_time;
    }

    for (int i = 0; i < n; i++) {
        turnaround[i] = completion[i] - arrival[i];
        waiting[i] = turnaround[i] - service[i];
    }

    printf("Process\tArrival\tService\tCompletion\tTurnaround\tWaiting\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\t%d\t\t%d\t\t%d\n", 
               i + 1, arrival[i], service[i]/60, completion[i], turnaround[i], waiting[i]);
    }
}

int main() {
    int arrival[MAX_PROCESSES] = {0, 4, 2, 5, 3, 1}; 
    int service[MAX_PROCESSES] = {6, 3, 4, 1, 4, 3}; 

    calculateTimes(arrival, service, MAX_PROCESSES);

    return 0;
}