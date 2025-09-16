#include<bits/stdc++.h>
//CopperKoi
using namespace std;
int main(){
    int n,q,m,i,j,k;
    scanf("%d %d",&n,&q);
    map<int,map<int,int>>a;
    for(int r=1;r<=q;r++){
        scanf("%d",&m);
        if(m==1){
            scanf("%d %d %d",&i,&j,&k);
            if(k==0)
                a[i][j]=0;
            else
                a[i][j]+=k;
        }else{
            scanf("%d %d",&i,&j);
            printf("%d\n",a[i][j]);
        }
    }
    return 0;
}