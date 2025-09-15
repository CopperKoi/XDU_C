#include <stdio.h>
static inline int read_int(){
    int n=0;
    int ch=getchar();
    while(ch==' '||ch=='\n')
        ch=getchar();
    int sign=1;
    if(ch=='-'){
        sign=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        n=(n<<3)+(n<<1)+(ch-'0');
        ch=getchar();
    }
    return n*sign;
}
static inline void write_int(int n){
    if(n==0){
        putchar('0');
        return;
    }
    if(n<0){
        putchar('-');
        n=-n;
    }
    int digits=0;
    int temp=n;
    while(temp){
        digits++;
        temp/=10;
    }
    char buffer[12];
    buffer[digits]='\0';
    for(int i=digits-1;i>=0;i--){
        buffer[i]='0'+(n%10);
        n/=10;
    }
    for(int i=0;i<digits;i++){
        putchar(buffer[i]);
    }
}
int main(){
    int a=read_int();
    int b=read_int();
    int c=read_int();
    int sum=a+b+c;
    write_int(sum);
    return 0;
}