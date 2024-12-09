#include<stdio.h>
int hoanHao(int n){
    if (n <= 1)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i ==0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    
}
int main(){
    int num1, num2;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    if (hoanHao(num1)==0)
    {
        printf("%d ko phai la so hoan hao\n",num1);
    }else
    {
         printf("%d la so hoan hao\n",num1);
    }
    if (hoanHao(num2)==0)
    {
        printf("%d ko phai la so hoan hao\n",num2);
    }else
    {
         printf("%d la so hoan hao\n",num2);
    }
}