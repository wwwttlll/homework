#### a
```cpp
int a[301][2],book[301][2];

int main()

{undefined

int i,n,t=0,b,j,k=0;

scanf("%d", &n);

for(i=0; i

scanf("%d %d", &a[i][0], &a[i][1]);

if(a[i][0]==0&&a[i][1]==0)//定义全局变量时可能会把坐标中的(0, 0)忽略掉//

t++;

}

for(i=0; i

b=1;

for(j=0; j

if(a[i][0]==book[j][0]&&a[i][1]==book[j][1]){undefined

b=0;

break;

}

else

b=1;

}

if(b!=0){undefined

book[i][0]=a[i][0];book[i][1]=a[i][1];

t++;

}

}

printf("%d\n", t);

return 0;

}
```
> #
> 