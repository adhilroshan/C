#include <stdio.h>

int main(int argc, char const *argv[]) {
  int p, res, count = 0, i, j, alc[5][3], need[5][3], max[5][3], safe[5],
              available[3], done[5], terminate = 0;
  printf("Enter the number of processes and resources\n");
  scanf("%d%d", &p, &res);
  printf("Enter the allocation of resources of all processes %dx%d matrix\n", p,
         res);
  for (i = 0; i < p; i++) {
    for (j = 0; j < res; j++) {
      scanf("%d", &alc[i][j]);
    }
  }
  printf("Enter the max resource process required %dx%d matrix\n", p, res);
  for (i = 0; i < p; i++) {
    for (j = 0; j < res; j++) {
      scanf("%d", &max[i][j]);
    }
  }
  printf("Enter the available resources \n");
  for (i = 0; i < res; i++) {
    scanf("%d", &available[i]);
  }
  printf("Need resources required %dx%d matrix are\n", p, res);
  for (i = 0; i < p; i++) {
    for (j = 0; j < res; j++) {
      need[i][j] = max[i][j] - alc[i][j];
      printf("%d\t", need[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < p; i++) {
    done[i] = 0;
  }

  while (count < p) {
    for (i = 0; i < p; i++) {
      if (done[i] == 0) {
        for (j = 0; j < res; j++) {
          if (need[i][j] > available[j]) {
            break;
          }
        }
        if (j == res) {
          safe[count] = i;
          done[i] = 1;
          for (j = 0; j < res; j++) {
            available[j] += alc[i][j];
          }
          count++;
          terminate = 0;
        } else {
          terminate++;
        }
      }
    }
    if (terminate == (p - 1)) {
      printf("No Safe Sequence, Sorry\n");
      break;
    }
  }
  if (terminate != (p - 1)) {
    printf("\n available resource after completion\n");
    for (i = 0; i < res; i++) {
      printf("%d\t", available[i]);
    }
    printf("\n safe sequence are\n");
    for (i = 0; i < p; i++) {
      printf("p%d\t", safe[i]);
    }
  }

  return 0;
}
