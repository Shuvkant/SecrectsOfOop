#include <math.h>
#include <stdio.h>
int main() {
  char choice;
  do {
    int number;
    int flag;
    int tempnumber;

    printf("Enter any number: ");
    scanf("%d", &number);
    tempnumber = number;
    if (number <= 1) {
      flag = 0;
    } else {
      for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
          flag = 0;
          break;
        }
        flag = 1;
      }
    }
    if (flag == 0) {
      printf("%d is not Prime Number", tempnumber);
    } else {
      printf("%d is Prime Number", tempnumber);
    }
    printf("\nDo you want to continue?(y/n)");
    scanf(" %c", &choice);

  } while (choice == 'y' || choice == 'Y');
  return 0;
}
