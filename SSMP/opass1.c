#include <stdio.h>
#include <string.h>
int main()
{
  FILE *f1, *f2, *f3, *f4;
  int lc, sa, l, op1, o, len;
  char m1[20], la[20], op[20], otp[20];
  f1 = fopen("input.txt", "r");
  f3 = fopen("symtab.txt", "w");
  fscanf(f1, "%s%s%d", la, m1, &op1);
  if (strcmp(m1, "START") == 0)
  {
    sa = op1;
    lc = sa;
    printf("\t%s\t%s\t%d\n", la, m1, op1);
  }
  else
  {
    lc = 0;
  }
  fscanf(f1, "%s%s", la, m1);
  while (!feof(f1))
  {
    fscanf(f1, "%s", op);
    printf("\n%d\t%s\t%s\n", lc, la, m1, op);
    if (strcmp(la, "-") != 0)
    {
      fprintf(f3, "\n%d\t%s\n", lc, la);
    }
    f2 = fopen("optab.txt", "r");
    fscanf(f2, "%s%d", otp, &o);
    while (!feof(f2))
    {
      if (strcmp(m1, otp) == 0)
      {
        lc = lc + 3;
        break;
      }
      fscanf(f2, "%s%d", otp, &o);
    }
    fclose(f2);
    if (strcmp(m1, "WORD") == 0)
    {
      lc = lc + 3;
    }
    else if (strcmp(m1, "RESW") == 0)
    {
      op1 = atoi(op);
      lc = lc + (3 * op1);
    }
    else if (strcmp(m1, "BYTE") == 0)
    {
      if (op[0] == 'X')
      {
        lc = lc + 1;
      }
      else
      {
        len = strlen(op) - 2;
        lc = lc + len;
      }
    }
    else if (strcmp(m1, "RESB") == 0)
    {
      op1 = atoi(op);
      lc = lc + op1;
    }
    fscanf(f1, "%s%s", la, m1);
  }
  if (strcmp(m1, "END") == 0)
  {
    printf("program length=\n%d", lc - sa);
  }
  fclose(f1);
  fclose(f3);
  return 0;
}

/*
 * Definition

This program is written in C language and performs the task of reading a file
named "input.txt" containing assembly language code and generates a symbol table
file named "symtab.txt". Here are the descriptions of variables used in this
program:

* f1, f2, f3, f4: Pointers to files used in the program
* lc: Location counter, used to keep track of the current memory location being
used in the program
* sa: Starting address of the program
* l: Line number, used for printing the output
* op1, o: Operand values used in the program
* m1: Instruction or operation code
* la: Label or symbol used in the code
* op: Operand value associated with the instruction
* otp: Temporary storage variable for operation code
* len: Length of the operand
* strcmp(): Function used for string comparison
* fopen(): Function used for opening a file
* fclose(): Function used for closing a file
* fscanf(): Function used for reading from a file
* printf(): Function used for printing to the console or terminal
* atoi(): Function used for converting a string to an integer

The program reads the first line of the input file and checks if the instruction
is START. If so, it sets the starting address and location counter to the
specified value. If the instruction is not START, the location counter is set to
0.

The program then reads the next line of the input file and starts a loop that
continues until the end of the file is reached. For each line of the input file,
the program reads the label, operation code, and operand. If a label is present,
it is written to the symbol table file.

The program then searches the optab file for the current operation code. If the
operation code is found, the program updates the location counter accordingly.

The program also checks for certain instructions, including WORD, RESW, BYTE,
and RESB. If one of these instructions is found, the program updates the
location counter based on the size of the operand.

After processing each line of the input file, the program reads the next line
and continues the loop. When the END instruction is found, the program prints
the program length and closes all files.

*/
