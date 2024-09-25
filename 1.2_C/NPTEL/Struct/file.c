#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *destination_file;
    char ch;

    char source_filename[100], destination_filename[100];

    printf("Enter the source filename: ");
    scanf("%s", source_filename);

    printf("Enter the destination filename: ");
    scanf("%s", destination_filename);

    
    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    
    destination_file = fopen(destination_filename, "w");
    if (destination_file == NULL) {
        printf("Error opening destination file.\n");
        fclose(source_file); // Close source file before exiting
        exit(1);
    }

    
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    printf("File copied successfully.\n");

    
    fclose(source_file);
    fclose(destination_file);

    return 0;
}