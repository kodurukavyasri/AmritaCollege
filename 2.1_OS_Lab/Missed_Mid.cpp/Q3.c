// process1.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <unistd.h>

int main() {
    int shmid;
    key_t key = 1234; // Unique key for the shared memory segment
    int *shared_memory;

    // Create a shared memory segment
    shmid = shmget(key, sizeof(int), 0666 | IPC_CREAT);
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

    // Input an integer value
    printf("Enter an integer: ");
    scanf("%d", shared_memory);

    // Detach from the shared memory segment
    shmdt(shared_memory);

    return 0;
}