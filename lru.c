#include <stdio.h>
#define N 1000
int tim = 1;

void printMemoryTable(int memoryTable[], int numberOfFrames)
{
	for(int i=0; i<numberOfFrames; i++)
	{
		if(memoryTable[i] == -1)
			printf("-- ");
		else
			printf("%2d ", memoryTable[i]);
	}
	printf(" |");
}

int exists(int memoryTable[], int numberOfFrames, int page, int used[])
{
	for(int i=0; i<numberOfFrames; i++)
		if(page == memoryTable[i])
		{
			used[i] = tim++;
			return 1;
		}
	return 0;
}

int getpos(int numberOfFrames, int used[])
{
	int mini = 1e9, pos = -1;
	for(int i=0; i<numberOfFrames; i++)
		if(mini > used[i])
		{
			mini = used[i];
			pos = i;
		}

	return pos;
}

int main()
{
	int n, pos = 0, numberOfFrames;
	int memoryTable[N], pages[N], used[N];

	for(int i=0; i<N; i++)
	{
		memoryTable[i] = -1;
		used[i] = 0;
	}

	printf("Enter number of frames : ");
	scanf("%d", &numberOfFrames);

	printf("Enter number of page requests: ");
	scanf("%d", &n);

	printf("Enter pages\n");
	for(int i=0; i<n; i++)
		scanf("%d", &pages[i]);

	int cnt = 0;
	printf("\nFrame table after each request\n");
	printf("---------------------------------\n");
	for(int i=0; i<n; i++)
	{
		printf("Table after request %2d | ", pages[i]);
		if(!exists(memoryTable, numberOfFrames, pages[i], used))
		{
			pos = getpos(numberOfFrames, used);
			memoryTable[pos] = pages[i];
			used[pos] = tim++;

			printMemoryTable(memoryTable, numberOfFrames);
			printf("  Page Fault\n");
			cnt++;
			continue;
		}

		printMemoryTable(memoryTable, numberOfFrames);
		printf("\n");
	}

	printf("\nNumber of page faults : %d\n\n", cnt);
}
