#include <stdio.h>
#include <stdlib.h>

int evalandprint() {
  int a, b;
  char c = getchar();
  switch(c) {
  case 't':
    printf(" t ");
    return 1;
  case 'f': 
    printf(" f ");
    return 0;
  case '|':
    printf(" ( ");
    a = evalandprint();
    printf(" | ");
    b = evalandprint();
    printf(" ) ");    
    return (a || b);
  case '&':
    printf(" ( ");
    a = evalandprint();
    printf(" & ");
    b = evalandprint();
    printf(" ) ");
    return (a && b);
  case '!':
    printf(" !");
    a = evalandprint();
    return (!a);
  default:
    puts("bad input - goodbye!");
    exit(-1);
  }
}

main () {
  if(evalandprint()) 
    puts("evaluated to: TRUE");
  else
    puts("evaluated to: FALSE");
}
