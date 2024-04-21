#include <stdio.h>

// Function to move a disk from source rod to destination rod
void moveDisk(int disk, char source, char destination) {
    printf("Move disk %d from rod %c to rod %c\n", disk, source, destination);
}

// Recursive function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        moveDisk(n, source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, destination);
    moveDisk(n, source, destination);
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int numDisks = 3; // Change the number of disks as needed
    char source = 'A', destination = 'C', auxiliary = 'B';

    printf("Steps to solve Tower of Hanoi with %d disks:\n", numDisks);
    towerOfHanoi(numDisks, source, destination, auxiliary);

    return 0;
}
