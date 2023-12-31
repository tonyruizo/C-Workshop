#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <Windows.h>

int calculateAge(int age, int year);

int main(void)
{

  bool playAgain;
  int userAge;
  int futureYear;
  char playAnswer;
  playAgain = true;

  printf("Welcome! Calculate your age in a later year! Let's begin!\n");
  printf("\n");

  while (playAgain)
  {
    printf("Type in your current age:\n");
    scanf("%d", &userAge);

    printf("Type in the year:\n");
    scanf("%d", &futureYear);

    printf("Calculating....\n");
    Sleep(2000);
    printf("\n");

    calculateAge(userAge, futureYear);

    printf("Would you like to play again? (Y/N)\n");
    scanf(" %c", &playAnswer);

    if (playAnswer == 'N' || playAnswer == 'n')
    {
      playAgain = false;
    }
  }

  printf("Thanks for playing!\n");
  printf("Goodbye!\n");

  return 0;
}

int calculateAge(int age, int year)
{
  // Local Time
  time_t myTime;
  struct tm *localTime;
  time(&myTime);
  localTime = localtime(&myTime);

  int currentYear;
  int yearDifference;
  int result;

  // Get current year
  currentYear = localTime->tm_year + 1900;

  yearDifference = year - currentYear;
  result = age + yearDifference;

  if (result > 0)
  {
    if (year < currentYear)
    {
      printf("That's going back in time.. but you were %d years old, in %d.\n", result, year);
    }
    else
    {
      printf("You will be %d years old, in %d.\n", result, year);
    }
  }
  else
  {
    printf("Ok, you were not born yet.\n");
  }
  return 0;
}
