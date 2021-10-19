# include<bits/stdc++.h>
using namespace std;
char name[10];
int main(){ 
    scanf("%s",name);
    while(1){
        string password;
        cin >> password;
        if(password=="0"){
            printf("Wrong Password!\n");
            break;
        }
        if(password=="123456"){
            printf("Hello %s\n",name);
            break;
        }
        else{
            printf("Wrong Password!\n");
            continue;
        }
    }
    return 0;
}