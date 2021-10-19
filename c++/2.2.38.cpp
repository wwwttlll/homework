#include <iostream>
using namespace std;
int main()

{

    char grade;

    scanf("%c", &grade);

    switch (grade)

    {

    case 'A':

        printf("90-100\n");
        break;
    case 'a':
        printf("90-100\n");
        break;
    case 'B':

        printf("80-89\n");
        break;
    case 'b':

        printf("80-89\n");
        break;

    case 'C':

        printf("70-79\n");
        break;
    case 'c':

        printf("70-79\n");
        break;
    case 'D':

        printf("60-69\n");
        break;
    case 'd':

        printf("60-69\n");
        break;
    case 'E':

        printf("<60\n");
        break;
    case 'e':

        printf("<60\n");
        break;
    default:

        printf("input error\n");
    }

    return 0;
}