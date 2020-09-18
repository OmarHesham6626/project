#include <stdio.h>
#include <stdlib.h>

int grade;
int reciever;
int subject;

int main()
{

    for(int i=1; i < 6; i++)
    {
        printf("\n Please enter the %d subject grade: ", i);
        int reciever;
        scanf("%d", &reciever);
        grade += reciever;
        subject++;
    }
    int average = grade / subject;
    printf("\n Your Average is %d ", average );
    printf("\n grade is %d", grade);
    printf("\n subject number is %d", subject);
    return 0;
}
