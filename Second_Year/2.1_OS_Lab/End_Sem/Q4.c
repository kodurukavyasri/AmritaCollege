#include <stdio.h>
#include <stdbool.h>

#define FRAME_SIZE 3 
#define PAGE_COUNT 4 

bool isPageInFrames(int frames[], int page) {
    for (int i = 0; i < FRAME_SIZE; i++) {
        if (frames[i] == page) {
            return true;
        }
    }
    return false;
}

void fifoPageReplacement(int pages[], int numPages) {
    int frames[FRAME_SIZE] = {-1, -1, -1}; 
    int pageFaults = 0;
    int pageHits = 0;
    int nextFrame = 0; 

    printf("Page Reference\tFrames\t\tStatus\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < numPages; i++) {
        int currentPage = pages[i];
        printf("%d\t\t", currentPage);

        if (isPageInFrames(frames, currentPage)) {
            pageHits++;
            printf("[");

            for (int j = 0; j < FRAME_SIZE; j++) {
                if (frames[j] != -1) {
                    printf("%d ", frames[j]);
                }
            }
            printf("]\tHit\n");
        } else {
            pageFaults++;
            frames[nextFrame] = currentPage;
            nextFrame = (nextFrame + 1) % FRAME_SIZE;

            printf("[");

            for (int j = 0; j < FRAME_SIZE; j++) {
                if (frames[j] != -1) {
                    printf("%d ", frames[j]);
                }
            }
            printf("]\tFault\n");
        }
    }

    printf("\nTotal Page Hits: %d\n", pageHits);
    printf("Total Page Faults: %d\n", pageFaults);
}

int main() {
    int pages[PAGE_COUNT] = {0, 1, 2, 3};

    fifoPageReplacement(pages, PAGE_COUNT);

    return 0;
}