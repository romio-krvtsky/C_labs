#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	const char* names[] = { "Ann", "Romio", "Li", "Alex", "Michael", "Nick", "Dan" };
	const char* wishes[] = { "happiness", "great health", "well-being", "longevity", "career growth", "more joy",
		"bright impressions", "love", "good luck" };
	char* holidays[] = { "Birthday", "New Year", "Christmas", "Easter", "Wedding", "Exam day" };

	int namesCount = sizeof(names) / sizeof(char*);
	int wishesCount = sizeof(wishes) / sizeof(char*);
	int holidaysCount = sizeof(holidays) / sizeof(char*);

	srand(time(NULL));
    int i,j;
	for (i = 0; i < namesCount; i++)
	{
		int indexOfRandomWish = rand() % wishesCount;
		int indexOfRandomHoliday = rand() % holidaysCount;

		printf("\nDear, ");
		for (j = 0; names[i][j] != '\0'; j++)
			printf("%c", names[i][j]);

		printf("! On ");
		for (j = 0; holidays[indexOfRandomHoliday][j] != '\0'; j++)
			printf("%c", holidays[indexOfRandomHoliday][j]);

		printf(" I wish you ");
		for (j = 0; j < wishes[indexOfRandomWish][j] != '\0'; j++)
			printf("%c", wishes[indexOfRandomWish][j]);

		printf(". Be happy!) ");
	}
	printf("\n");

	return 0;
}