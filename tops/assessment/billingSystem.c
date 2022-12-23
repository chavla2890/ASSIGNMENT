#include<stdio.h>
int main(){ 
    int totalPrice=0; 
    char ch;

    l1:
    printf("\n \n --------------Welcome To Sagar Dhaba-------------- \n \n -> Our Menu Card <- \n");
    printf(" 1. Idli sambhar      Rs. :- 40. \n 2. Masala Dosa       Rs. :- 80. \n 3. Burger            Rs. :- 50. \n 4. Cheese Burger     Rs. :- 60. \n 5. Pizza             Rs. :- 120. \n ");
   

    int order, quan, orderPrice=0;
    printf("\n Enter the number which food you want to order :-");
    scanf("%d",&order);
    switch (order)
    {
    case 1:{
        printf(" Your Order is IDli sambhar\n  Enter Quantity you want to order :- ");
        scanf("%d",&quan);
        orderPrice=40*quan;
        totalPrice += orderPrice;
        printf("   Your Order Price is Rs.%d \n   Your Total Price is Rs.%d ",orderPrice, totalPrice);
        break;
    }
    case 2:{
        printf(" Your Order is Masala Dosa\n  Enter Quantity you want to order :- ");
        scanf("%d",&quan);
        orderPrice=80*quan;
        totalPrice += orderPrice;
        printf("   Your Order Price is Rs.%d \n   Your Total Price is Rs.%d ",orderPrice, totalPrice);
        break;
    }
    case 3:{
        printf(" Your Order is Burger\n  Enter Quantity you want to order :- ");
        scanf("%d",&quan);
        orderPrice=50*quan;
        totalPrice += orderPrice;
        printf("   Your Order Price is Rs.%d \n   Your Total Price is Rs.%d ",orderPrice, totalPrice);
        break;
    }
    case 4:{
        printf(" Your Order is Cheese Burger\n  Enter Quantity you want to order :- ");
        scanf("%d",&quan);
        orderPrice=60*quan;
        totalPrice += orderPrice;
        printf("   Your Order Price is Rs.%d \n   Your Total Price is Rs.%d ",orderPrice, totalPrice);
        break;
    }
    case 5:{
        printf(" Your Order is Pizza\n  Enter Quantity you want to order :- ");
        scanf("%d",&quan);
        orderPrice=120*quan;
        totalPrice += orderPrice;
        printf("   Your Order Price is Rs.%d \n   Your Total Price is Rs.%d ",orderPrice, totalPrice);
        break;
    }
    default:{
        printf(" \n\nPlease Select From the Menu");
        goto l1;
      break;
    }
}
l2:
scanf("%c",&ch);
switch (ch)
{
case 'y':{
    goto l1;
    break;
}
case 'Y':{
    goto l1;
    break;
}
case 'n':{
    printf("\n Your Total bill is :- %d \n \n --------------Thankyou For Visit To Sagar Dhaba--------------",totalPrice);
    break;
}
case 'N':{
    printf("\n Your Total bill is :- %d \n \n --------------Thankyou For Visit To Sagar Dhaba--------------",totalPrice);
    break;
}
default:{
    printf("\n Please Enter Y for order or N for total bill :-");
    goto l2;
    break;
}
}
}