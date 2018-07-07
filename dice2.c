#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
  int n,m;
  char name[40];
  srand(time(NULL));
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Rolling the dice...\n");
  n=rand()%6+1;
  m=rand()%6+1;
  printf("Die 1: %d\n",n);
  printf("Die 2: %d\n",m);
  printf("Total value: %d\n",n+m);
  return 0;
}
