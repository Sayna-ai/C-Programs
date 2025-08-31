#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 90 && marks <= 100)
        printf("Grade = A1\n");
    else if (marks > 80 && marks <=90)
        printf("Grade = A2\n");
    else if (marks > 70 && marks <=80)
        printf("Grade = B1\n");
    else if (marks > 60 && marks <=70)
        printf("Grade = B2\n");
    else if (marks > 50 && marks <=60)
        printf("Grade = C1\n");
    else if (marks > 40 && marks <=50)
        printf("Grade = C2\n");
    else if (marks > 30 && marks <=40)
        printf("Grade = D\n");
    else if (marks >= 0 && marks <=30)
        printf("Grade = E\n");
    else
        printf("Invalid Input\n");

    return 0;
}
