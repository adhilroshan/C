#include <stdio.h>
int main(int argc, char *argv[]) {
  int bt[20], wt[20], tat[20], i, n;
  float wtavg, tatavg;
  printf("\nEnter the no of processses: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("\n Enter the burst time for process %d ", i + 1);
    scanf("%d", &bt[i]);
  }
  wt[0] = wtavg = 0;
  tat[0] = tatavg = bt[0];
  for (i = 1; i < n; i++) {
    wt[i] = wt[i - 1] + bt[i - 1];
    tat[i] = tat[i - 1] + bt[i];
    wtavg = wtavg + wt[i];
    tatavg = tatavg + tat[i];
  }
  printf("Process\t\t BT\t WT\t TAT\n");
  for (i = 0; i < n; i++) {
    printf("\nP[%d]\t\t %d\t %d\t %d\t", i + 1, bt[i], wt[i], tat[i]);
  }
  wtavg = wtavg / n;
  tatavg = tatavg / n;
  printf("\nAVG Waiting Time : %f", wtavg);
  printf("\nAVG Turnaround Time : %f", tatavg);
  return 0;
}
