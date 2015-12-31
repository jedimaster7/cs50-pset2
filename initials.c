/*
   Simple program to take person's name
   and return their initials

   -Andrew Tolan
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {
  // initialize variables
  char name[61];
  int i = 0;

  // ask for user input
  printf("Please enter your name: ");
  fgets(name, 61, stdin);

  // print first initial
  printf("%c", toupper(name[0]));

  // print the next ones
  while (name[i] != '\0') {
    if (name[i] == ' ') {
      i++;
      printf("%c", toupper(name[i]));
    }
    i++;
  }
  // add newline
  printf("\n");
  return 0;
}
