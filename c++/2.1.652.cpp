#include<iostream>
using namespace std;
int main()

{
    char ch;
    ch = getchar();

    if (('A'<= ch && ch<= 'Z') ||( 'a' <= ch&&ch<= 'z'))

        printf("English\n");//ע�⣬����������У���Ӱ������ȷ�ԡ�

    else

        printf("not English\n");

    return 0;

}
