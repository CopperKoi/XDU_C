#include<bits/stdc++.h>
//CopperKoi
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3;
    scanf("%f %f\n%f %f\n%f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    printf("%.2f",sqrt(pow(x2-x1,2)+pow(y2-y1,2))+sqrt(pow(x3-x2,2)+pow(y3-y2,2))+sqrt(pow(x1-x3,2)+pow(y1-y3,2)));
    return 0;
}