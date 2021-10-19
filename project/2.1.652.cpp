#include<iostream>
using namespace std;
int main()

{
    char ch;
    ch = getchar();

    if (('A'<= ch && ch<= 'Z') ||( 'a' <= ch&&ch<= 'z'))

        printf("English\n");//注意，这里输出换行，不影响结果正确性。

    else

        printf("not English\n");

    return 0;

}
