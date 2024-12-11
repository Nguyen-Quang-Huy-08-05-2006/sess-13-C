#include <stdio.h>

int uoc(int a,int b){
	int save;
    while(b!=0){
        save=b;
        b=a%b;
        a=save;
    }
    return a;
}

int main(){
    int a,b;
    printf("Nhap so thu nhat: ");
    scanf("%d",&a);
    printf("Nhap so thu hai: ");
    scanf("%d",&b);
    int result=uoc(a,b);
    printf("Uoc chung lon nhat cua %d và %d là: %d\n",a,b,result);
    return 0;
}

