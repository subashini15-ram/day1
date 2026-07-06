#include<studio.h>
int main()
{
       float price,discount,gst,total; 
       printf("enter product price:");
       scanf("%f", &price);
       printf("enter the discount percentage:");
       scanf("%f", &discount);
       printf("enter gst percentage:");
       scanff("%f", &gst);

    price= price-(price*discount/100);
    total=price+(price*gst/100);
    printf("final amount to pay: total");
       printf("thank you");
    return 0;
}
