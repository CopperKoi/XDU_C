#include<bits/stdc++.h>
//CopperKoi
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+1];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int b[m+1];
    for(int i=1;i<=m;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=m;i++){
        int j=b[i];
        printf("%d\n",a[j]);
    }
    return 0;
}