#include<stdio.h>
int nguyenTo(int n){
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i ==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    if (nguyenTo(num1)==0)
    {
        printf("%d ko phai la so nguyen to",num1);
    }else
    {
         printf("%d la so nguyen to",num1);
    }
    if (nguyenTo(num2)==0)
    {
        printf("%d ko phai la so nguyen to",num2);
    }else
    {
         printf("%d la so nguyen to",num2);
    }
}