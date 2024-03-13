#include<stdio.h>
char items[100][100];
int prices[100];
int itemCount = 0;
void choice(char ch1);
void animation()
{

    system("cls");
    int a,k,c;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    for(c=1; c<7; c++)
    {
        for(k=1; k<900000000; k++)

            a=k;
        if(c==1)
        {
            printf("\033[0;33m    DDDDD   AAAAA   RRRRR   AAAAA   ZZZZZ\033[0m\n");
        }
        else if(c==2)
        {
            printf("\033[0;36m    D   D   A   A   R   R   A   A      Z\033[0m\n");
        }
        else if(c==3)
        {
            printf("\033[0;33m    D   D   AAAAA   RRRRR   AAAAA     Z\033[0m\n");
        }
        else if(c==4)
        {
            printf("\033[0;36m    D   D   A   A   R R     A   A    Z\033[0m\n");
        }
        else if(c==5)
        {
            printf("\033[0;33m    DDDDD   A   A   R   R   A   A   ZZZZZ\033[0m\n");
        }

    }

    usleep(900000);
}
void loading()
{
    system("cls");
    int a,k,c;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("\033[0;33m             Loading\033[0m");
    for(c=1; c<5; c++)
    {
        for(k=1; k<600000000; k++)

            a=k;
        printf(".");

    }
    usleep(300000);
}
void loging(char email1[],char pass1[])
{
    system("cls");

    printf("\n\n\n\t\t   Loging Page");
    printf("\n\t\t..................");
    printf("\n\n\t\tEnter Your Email\n\t\t=>");
    scanf("%s",email1);
    printf("\n\t\tEnter Your Password\n\t\t=>");
    scanf("%s",pass1);

}

void create(char email2[],char pass2[])
{
    printf("\n\n\n\t\t   Create Account");
    printf("\n\t\t....................");
    printf("\n\n\t\tEnter Your Email\n\t\t=>");
    scanf("%s",email2);
    printf("\n\t\tEnter Your Password\n\t\t=>");
    scanf("%s",pass2);


}

void Pages()
{
    printf("\t\t\033[0;32m*********************************\033[0m");
    printf("\n\t\t\033[0;33m| Home| Product List| Cart| Exit|\033[0m");

    printf("\n\t\t\033[0;32m*********************************\033[0m\n\n");
}
void address()
{
    system("cls");
    Pages();
    char name[100];
    char add[100];
    char mail[100];
    char number[100];
    char payment;
    printf("\n\t\t\033[0;36mEnter Your Name= \033[0m\n");
    scanf(" %s",&name);
    printf("\t\t\033[0;36mEnter Your Full Address= \033[0m\n");
    scanf(" %s",&add);
    printf("\t\t\033[0;36mEnter Your Mail= \033[0m\n");
    scanf(" %s",&mail);
    printf("\t\t\033[0;36mEnter Your Number= \033[0m\n");
    scanf(" %s",&number);
    printf("\t\t\033[0;36mChoose Payment Method\033[0m\n");
    printf("\t\t\033[0;36m1.Online     2.Cash On Delivery\033[0m\n");
    scanf(" %c",&payment);
    if(payment=='1')
    {
           system("cls");
           printf("\n\n\n After Mid Exam");
    }
    else if(payment=='2')
    {
           system("cls");
           printf("\n\n\nAfter Mid Exam");
    }

}
void cart()
{
    int sum=0;
    char ch1;
    Pages();
    printf("\n\t\t\t\t\tYour Cart\n\n");
    for(int i = 0; i < itemCount; i++)
    {
        printf("\t\t\033[0;36m%d. %s\t\t%d tk\033[0m\n", i+1, items[i], prices[i]);
        sum=sum+prices[i];
    }
    printf("\n\n\n\t\t\033[0;32m+ ADD\033[0m");
    printf("                          \033[0;31m- Remove\033[0m");
    printf("\n\t\t\033[0;32m******************************\033[0m\n\t\t\t\033[0;33mTotal Amount = %d\033[0m",sum);
    printf("\n\t\t\t\033[0;32m  #.Oder Now\033[0m");
    printf("\n\n\n\033[0;31mEnter your choice-->\033[0m");

    scanf(" %c",&ch1);
    if(ch1=='+')
    {
        system("cls");
        productView();
    }
    else if(ch1=='-')
    {
           system("cls");
           printf("\n\n\nAfter Mid Exam");

    }
    else if(ch1=='#')
    {
           address();
    }
    else
    {
        choice(ch1);

    }


}
void Exit()
{
       char ch;
    printf("\n\n\n\t\t    Are You Sure?\n");
    printf("\t\t\033[0;32m1.YES\033[0m\t\t \033[0;31m2.NO\033[0m\n");
    scanf(" %c",&ch);
    if(ch=='2')
    {
       dashboard();
    }
    else
    {
       system("cls");
    }


}
void choice(char ch1)
{
    if(ch1=='h')
    {
        system("cls");
        dashboard();

    }
    else if(ch1=='p')
    {
        system("cls");
        productView();
    }
    else if(ch1=='c')
    {
        system("cls");
        cart();
    }
     else if(ch1=='e')
    {
        system("cls");
        Exit();
    }
}
void productView()
{
    char ch2;
    char head1[]= {"Remix EH406"};
    int price1=530;
    char head2[]= {"Havit H655BT"};
    int price2=640;
    char head3[]= {"JBL Quantum"};
    int price3=1150;
    char head4[]= {"UiiSii HM13"};
    int price4=350;
    char head5[]= {"MI 7UG40"};
    int price5=720;
    Pages();
    printf("\n\t\t\033[0;36m1.Earphone.\033[0m\n");
    printf("\t\t\033[0;36m2.Case and back covers.\033[0m\n");
    printf("\t\t\033[0;36m3.Charger and PowerBank.\033[0m\n");
    printf("\t\t\033[0;36m4.Glass Protector.\033[0m\n");
    printf("\t\t\033[0;36m5.Cables and Converter.\033[0m\n");
    printf("\t\t\033[0;36m6.Back to the previous page.\033[0m\n");
    printf("\t\t\033[0;36m7.Back to the home page.\033[0m\n");
    printf("\n\n\n\033[0;31mEnter your choice-->\033[0m");
    scanf(" %c",&ch2);
    if(ch2=='h'||ch2=='p'||ch2=='c'||ch2=='a')
    {
        choice(ch2);
    }
    else
    {
        if(ch2=='1')
        {
            char num;
            while(num!='c')
            {

                system("cls");
                Pages();
                printf("\n\t\t\033[0;36m1.%s    ---> %d tk\033[0m\n",head1,price1);
                printf("\t\t\033[0;36m2.%s   ---> %d tk\033[0m\n",head2,price2);
                printf("\t\t\033[0;36m3.%s    ---> %d tk\033[0m\n",head3,price3);
                printf("\t\t\033[0;36m4.%s    ---> %d tk\033[0m\n",head4,price4);
                printf("\t\t\033[0;36m5.%s       ---> %d tk\033[0m\n",head5,price5);

                printf("\n\n\nAdd to cart--> ");
                scanf("%c",&num);
                if(num=='1')
                {
                    strcpy(items[itemCount], head1);
                    prices[itemCount] = price1;
                    itemCount++;
                }
                else if(num=='2')
                {
                    strcpy(items[itemCount], head2);
                    prices[itemCount] = price2;
                    itemCount++;
                }
                else if(num=='3')
                {
                    strcpy(items[itemCount], head3);
                    prices[itemCount] = price3;
                    itemCount++;
                }
                else if(num=='4')
                {
                    strcpy(items[itemCount], head4);
                    prices[itemCount] = price4;
                    itemCount++;
                }
                else if(num=='5')
                {
                    strcpy(items[itemCount], head5);
                    prices[itemCount] = price5;
                    itemCount++;
                }



            }
            choice(num);
        }


    }


}
void dashboard()
{
    system("cls");
    Pages();
    char ch1;
    printf("\n\t\tWelcome, dear.\n\t\tHere are the simple instructions\n\n");
    printf("\t\t\033[0;36mh -> Home\033[0m\n");
    printf("\t\t\033[0;36mp -> Product List\033[0m\n");
    printf("\t\t\033[0;36mc -> Cart\033[0m\n");
    printf("\t\t\033[0;36me -> Exit\033[0m");
    printf("\n\n\n\033[0;31mEnter your choice-->\033[0m");

    scanf(" %c",&ch1);
    choice(ch1);

}


int main()
{
    animation();
    loading();
    char email1[100],pass1[100],email2[100],pass2[100];
    system("cls");
    printf("\n\n\n\t\t\033[0;32m1.Loging\033[0 \n");
    printf("\n\t\t \033[0;32m2.Create Account\033[0\n");
    int n;
    scanf("%d",&n);
    if(n==1)
    {
        system("cls");
        loging(email1,pass1);

    }
    else if(n==2)
    {
        system("cls");
        create(email2,pass2);
        system("cls");
        loging(email1,pass1);


    }

    int value;
    value=strcmp(email1,email2);
    if(value!=0)
    {
        do
        {
            system("cls");

            printf("\n\n\n\t\t\033[0;31m incorrect password\033[0");
            loging(email1,pass1);

            value=strcmp(email1,email2);

        }
        while(value != 0);
    }

    system("cls");

    loading();
    dashboard();








    getch();
}

