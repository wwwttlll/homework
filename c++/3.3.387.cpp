#include<bits/stdc++.h>
using namespace std;
long long read(){
    long long ret=0,f=1;char ch=getchar();
    while(ch>'9'||ch<'0'){if(ch=='-')f=-f;ch=getchar();}
    while(ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
    return ret*f;
}
char c;
int n,m,f;
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> c;
		cin >> n;
		if(f)printf("\n");
        f ++;
		for(int i = 0; i < n; i++){
			for(int j = 1; j <= n + i; j++){
				if(j == n - i || j == n + i || i == n - 1)
				    cout << c ;
				else
                    cout << " ";
			}
			cout << endl;
		}
	}
	return 0;
}