#include <stdio.h>
#include <ctype.h>

/**
 * Author: Raymond Omoraka
 * main - entry point
 * 	this is a program on Quiz Questions in C (malloc, free)
 * return: 0 if success
 */

int main()
{
	char questions[][200] = {
		"1. To allocate enough space for an array of 10 integers (on a 64bit, Linux machine), I can use: ",
		"2. malloc returns an address ",
		"3. What will you see on the terminal? \nint main(void)\n{\nint *ptr; \n*ptr = 98; \nprintf(\"\%d\", *ptr);\nreturn (0);}",
		"4. malloc returns a pointer ",
		"5. You can do this: \nchar str[] = \"Best School\"; \nfree (str); ",
		"6. The memory space reserved when calling malloc is on: ",
		"7. You can do this: \nchar *s; \ns = strdup(\"Best School\"); \nif (s != NULL) \n{\nfree(s);\n} ",
		"8. You can do this:\nfree(\"Best School\")"
				};

	char options [][100] = {
		"A. malloc(64 * 10)", "B. malloc(10 * int)", "C. malloc(10 * sizeof(int)) ",
		"A. False ", "B. True ", "C. None ",
		"A. Segmentation Fault ", "B. 98 ", "C. 0",
		"A. False ", "B. True ", "C. None",
		"A. No ", "B. Yes ", "C. None",
		"A. The heap ", "B. The stack ", "C. The block",
		"A. No ", "B. Yes ", "C. None",
		"A. No ", "B. Yes ", "C. None"};

	char answers[8] = {'C','B','A','B','A','A','B','A'};
	int num_of_questions = sizeof(questions)/sizeof(questions[0]);

	char pick_answer;
	int score, i, j;

	printf("QUIZ GAME by Dr Ray\n");

	for (i = 0; i < num_of_questions; i++)
	{
		printf("***************************\n")    ;
		printf("%s\n", questions[i]);
		printf("***************************\n");

		for (j = i * 3; j < (i * 3) + 3; j++)
		{
			printf("%s\n", options[j]);
		}
		
		char your_ans;

		printf("Your answer: ");
		scanf("%c", &your_ans);
		scanf("%*c");

		your_ans = toupper(your_ans);

		if (your_ans == answers[i])
		{
			printf("Awesome, you got it right\n");
			score++;
		}
		else
			printf("Ouch, you got it wrong\n");

	}

	printf("\nFINAL SCORE: You got %d out of %d\n", score, num_of_questions);

	if (score == num_of_questions)
		printf("\nYou are a genius🙌❤️🙌\n");
	else
		printf("\nCome on, you can do better\n");

	return (0);

}
