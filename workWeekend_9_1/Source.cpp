#include<stdio.h>
#include"Header.h"
#include<stdlib.h>
#include<time.h>



int main()
{
	srand(time(NULL));
	int num;
	printf("number of student : ");
	scanf_s("%d", &num);

	int i = 0;
	while (i < num)
	{
		printf("%d.Name : ", i + 1);
		scanf("%s", student[i].name);

		printf("%d.Age : ", i + 1);
		scanf_s("%d", &student[i].age);

		If_Else(i);
		i++;

	}


}