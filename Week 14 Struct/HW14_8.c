#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


#define CAPACITY 12
#define NAMELEN 20


struct Seat{
    int id;
    bool taken;
    char last[NAMELEN];
    char first[NAMELEN];
};

struct Seat seats[CAPACITY];

void printmenu(void);
void countempty(void);
void listempty(void);
void alphalist(void);
void assign(void);
void delete(void);

int size = sizeof(struct Seat);

int main(void){
    FILE * filePtr;
    int ch = 0;
    int id;
    struct Seat temp;

    for (int i = 0; i < CAPACITY; i++){
        seats[i].id = i;
        seats[i].taken = false;
    }

    if ((filePtr = fopen("seating.dat", "rb")) == NULL)
	{
		fprintf(stderr, "Could not open file 'seatassignments.dat'.\n");
		exit(EXIT_FAILURE);
	}

    while (fread(&temp, size, 1, filePtr) == 1)
	{
		seats[temp.id] = temp;
	}





}