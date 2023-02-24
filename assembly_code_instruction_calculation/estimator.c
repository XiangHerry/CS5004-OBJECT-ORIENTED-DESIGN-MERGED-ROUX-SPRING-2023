// Chenyi XIANG
// 02/02/2023
// CS5008 Lab03
//
// Implement your cycle count tool here.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define instructions 9


const char instr_names[9][5] = {"add", "sub", "mul", "div", "mov", "lea", "push", "pop", "res"};
int instr_cycles[] = {1, 1, 3, 24, 1, 3, 1, 1, 1};
int main(int argc, char **argv) 
{  
    // checks if the argument number is consistent with expectation.
    if (argc != 2) {
        printf("Error Detected! No file provided!");
        return 1;
    }
    // get the file name.
    char *filename = argv[1];

    // open file.
    FILE *p = fopen(filename, "r");

    // check if the file was opened correctly.
    if (!p) {
        printf("Cannot open file %s\n", filename);
        return 1;
    }

    // Array calcuates the total amount of each type.
    int count[9] = {0};

    // every line of the file.
    char line[100];

    // go throught every line of the file.
    while (fgets(line, sizeof(line), p)) {
        for (int i = 0; i < 9; i ++) {
            // if the name of given string and names are same, it will add 1 to the corresponding element in count array.
            if (strstr(line, instr_names[i]) != NULL) {            
                // add one to the counting instruction
                count[i]++;
                // break the code and move to the next line.
                break;
            }
        }
    }

    // set the total number of instructions and cycles.
    int Total_InsCycle = 0;
    int Total_instructions = 0;

    // go through every instruction type.
    for (int i = 0; i < instructions; i ++) {
        Total_InsCycle += instr_cycles[i] * count[i];
        Total_instructions += count[i];
        printf("%s: %d\n", instr_names[i], count[i]);
    }

    // print the total of cycles and instructions.
    printf("Total Instructions: %d\n", Total_instructions);
    printf("Total Cycles: %d\n", Total_InsCycle);

    // close the file.
    fclose(p);
    return 0;
}

