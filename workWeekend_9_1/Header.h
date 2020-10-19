#pragma once

struct Student
{
	char name[20];
	int age;
}student[10];

void If_Else(int i)
{

	if (student[i].age >= 13 && student[i].age <= 18)
	{
		if (student[i].age >= 16 && student[i].age <= 18)
		{
			printf("name : %s   age : %d (high school student)\n\n", student[i].name, student[i].age);
		}
		else if (student[i].age >= 13 && student[i].age < 16)
		{
			printf("name : %s   age : %d (junior high school student)\n\n", student[i].name, student[i].age);
		}

	}
	else
	{
		if (student[i].age <= 0)
		{
			printf("Error\n\n");
		}
		else
		{
			printf("Not high school student and junior high school student\n\n");
		}
	}
}


