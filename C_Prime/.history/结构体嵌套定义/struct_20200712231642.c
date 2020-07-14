#include <stdio.h>
void main()
{
	struct date
	{
		int month;
		int day;
		int year;	


	};	
	struct 
	{
		int num;
		char name[20];
		char sex;
		struct date birthday;
		float score;
	}boy1,boy2;
	printf("Please input birthday(YY:)");
	scanf_s("%d", &boy1.birthday.year);
	printf("Please input birthday(MM:)");
	scanf_s("%d", &boy1.birthday.month);
	printf("Please input birthday(DD:)");
	scanf_s("%d", &boy1.birthday.day);
	printf("\n");
	boy2 = boy1;
	printf("boy1's birthday is %d-%d-%d\n", boy1.birthday.year, boy1.birthday.month, boy1.birthday.day);
	printf("boy2's birthday is %d-%d-%d\n", boy2.birthday.year, boy2.birthday.month, boy2.birthday.day);


}