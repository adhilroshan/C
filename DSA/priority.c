#include <stdio.h>
#define N 20

int main()
{
	int Q[N], Pr[N];
	int r = -1, f = -1;
	int opt, n, i, data, p;
	printf("Enter Your Choice:-");
	do
	{
		printf("\n\n1 for Insert the Data in Queue\n2 for show the Data in Queue \n3 for Delete the data from the Queue\n4 for Exit\n");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			printf("\nEnter the number of data\n");
			scanf("%d", &n);
			printf("\nEnter your data and Priority of data\n");
			i = 0;
			while (i < n)
			{
				scanf("%d %d", &data, &p);
				{
					int i;
					if ((f == 0) && (r == N - 1))
						printf("Queue is full");
					else
					{
						if (f == -1)
						{
							f = r = 0;
							Q[r] = data;
							Pr[r] = p;
						}
						else if (r == N - 1)
						{
							for (i = f; i <= r; i++)
							{
								Q[i - f] = Q[i];
								Pr[i - f] = Pr[i];
								r = r - f;
								f = 0;
								for (i = r; i > f; i--)
								{
									if (p > Pr[i])
									{
										Q[i + 1] = Q[i];
										Pr[i + 1] = Pr[i];
									}
									else
										break;
									Q[i + 1] = data;
									Pr[i + 1] = p;
									r++;
								}
							}
						}
						else
						{
							for (i = r; i >= f; i--)
							{
								if (p > Pr[i])
								{
									Q[i + 1] = Q[i];
									Pr[i + 1] = Pr[i];
								}
								else
									break;
							}
							Q[i + 1] = data;
							Pr[i + 1] = p;
							r++;
						}
					}
				}

				i++;
			}
			break;
		case 2:
		{
			int i;
			for (i = f; i <= r; i++)
			{
				printf("\nElement = %d\tPriority = %d", Q[i], Pr[i]);
			}
		}
		break;
		case 3:
		{
			if (f == -1)
			{
				printf("Queue is Empty");
			}
			else
			{
				printf("deleted Element = %d\t Its Priority = %d", Q[f], Pr[f]);
				if (f == r)
					f = r = -1;
				else
					f++;
			}
		}
		break;
		case 4:

			break;
		default:
			printf("\nIncorrect Choice");
		}
	} while (opt != 4);
	return 0;
}