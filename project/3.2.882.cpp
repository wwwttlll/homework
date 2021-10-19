#include<cstdio>
long long  f[1001000],sum[1001000];
long long  k,t,n,c;
int main(){
	scanf("%lld%lld%lld",&n,&k,&t);
	for(int i=1;i<=n;i++){
		sum[1]+=i;
	}
	for(int i=2;i<=t;i++){
		sum[i]=sum[i-1]+n*n;
	}
	f[1]=1;
	for(int i=2;i<=t;i++){
		f[i]=(f[i-1]+sum[i-1])%k;
	}
	c=0;
	for(int i=1;i<=t;i++){
        c+=f[i];
    }
	printf("%lld\n",c);
	
	return 0;
}