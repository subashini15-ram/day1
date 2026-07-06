#include<studio.h>
int main()
{
       int price,discount,gst,total; 
       printf("enter product price:");
       scanf("%p", &price);
       printf("enter the discount percentage:");
       scanf("%d", &discount);
       printf("%f", &gst);

    price= price-(price*discount/100);
    total=price+(price*gst/100);
    printf("final amount to pay: total");
       printf("thank you");
    return 0;
}
