#include<stdio.h>
int read_int(){
    int n=0;
    int ch=getchar();
    int sign=1;
    while(ch==' '||ch =='\n')
        ch=getchar();
    if(ch=='-'){
        sign=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        n=n*10+(ch-'0');
        ch=getchar();
    }
    return n*sign;
}
void write_int(int n){
    if(n<0){
        putchar('-');
        n=-n;
    }
    if(n/10){
        write_int(n/10);
    }
    putchar(n%10+'0');
}
int main(){
    int a=read_int();
    int b=read_int();
    int sum=a+b;
    int diff=a-b;
    int prod=a*b;
    int quot=a/b;
    write_int(sum);
    putchar('\n');
    write_int(diff);
    putchar('\n');
    write_int(prod);
    putchar('\n');
    write_int(quot); 
    return 0;
}