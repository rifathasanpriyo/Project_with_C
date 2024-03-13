#include<stdio.h>
#include<unistd.h>
#include<conio.h>
int row,col,i,j;
void total_cost_cse(int wave,float waiver)
{
       system("cls");
       float total_cse,waiver2,waiver3,n3;
       printf("\n\nYour Total waiver is \033[0;32m%d%%\033[0m \n\n",wave);
       waiver2=1-waiver;
       waiver3=(3000*waiver2)*152;
       total_cse=waiver3+10000+60000+12500;
       printf("Your Total 4 Years Cost(With Admission Fee,Semester Fee)is \n\033[0;33m%.2f TK\033[0m\n",total_cse);

       getch();
}
//pharmacy
void total_cost_pharmacy(int wave,float waiver)
{
       system("cls");
       float total_phar,waiver2,waiver3;
       printf("\n\nYour Total waiver is \033[0;32m%d%%\033[0m \n\n",wave);
       waiver2=1-waiver;
       waiver3=(3574*waiver2)*160;
       total_phar=waiver3+10000+60000+12500;
       printf("Your Total 4 Years Cost(With Admission Fee,Semester Fee)is \n\033[0;33m%.2f TK\033[0m\n",total_phar);
       getch();
}
//EEE
void total_cost_eee(int wave,float waiver)
{
       system("cls");
       float total_eee,waiver2,waiver3;
       printf("\n\nYour Total waiver is \033[0;32m%d%%\033[0m \n\n",wave);
       waiver2=1-waiver;
       waiver3=(2631*waiver2)*160;
       total_eee=waiver3+10000+60000+12500;
       printf("Your Total 4 Years Cost(With Admission Fee,Semester Fee)is \n\033[0;33m%.2f TK\033[0m\n",total_eee);
       getch();
}
//textile
void total_cost_textile(int wave,float waiver)
{
       system("cls");
       float total_text,waiver2,waiver3;
       printf("\n\nYour Total waiver is \033[0;32m%d%%\033[0m \n\n",wave);
       waiver2=1-waiver;
       waiver3=(2520*waiver2)*164;
       total_text=waiver3+10000+2500+60000+12500;
       printf("Your Total 4 Years Cost(With Admission Fee,Semester Fee)is \n\033[0;33m%.2f TK\033[0m\n",total_text);
       getch();
}
//bba
void total_cost_bba(int wave,float waiver)
{
       system("cls");
       float total_bba,waiver2,waiver3;
       printf("\n\nYour Total waiver is \033[0;32m%d%%\033[0m \n\n",wave);
       waiver2=1-waiver;
       waiver3=(3409*waiver2)*129;
       total_bba=waiver3+10000+60000+12500;
       printf("Your Total 4 Years Cost(With Admission Fee,Semester Fee)is \n\033[0;33m%.2f TK\033[0m\n",total_bba);
       getch();
}
//ell
void total_cost_ell(int wave,float waiver)
{
       system("cls");
       float total_ell,waiver2,waiver3;
       printf("\n\nYour Total waiver is \033[0;32m%d%%\033[0m \n\n",wave);
       waiver2=1-waiver;
       waiver3=(1425*waiver2)*132;
       total_ell=waiver3+10000+60000+12500;
       printf("Your Total 4 Years Cost(With Admission Fee,Semester Fee)is \n\033[0;33m%.2f TK\033[0m\n",total_ell);
       getch();
}
//bangla
void total_cost_bangla(int wave,float waiver)
{
       system("cls");
       float total_ban,waiver2,waiver3;
       printf("\n\nYour Total waiver is \033[0;32m%d%%\033[0m \n\n",wave);
       waiver2=1-waiver;
       waiver3=(774*waiver2)*120;
       total_ban=waiver3+1000+18000+12500;
       printf("Your Total 4 Years Cost(With Admission Fee,Semester Fee)is \n\033[0;33m%.2f TK\033[0m\n",total_ban);
       getch();
}
 void waiver_count(int n1)
       {      system("cls");
float ssc,hsc,waiver;
int wave;
              printf("\n\n\033[0;31mEnter Your SSC and HSC Result\033[0m\n\n");
              printf("\033[0;33mSSC\033[0m : ");
              scanf("%f",&ssc);
              printf("\033[0;33mHSC\033[0m : ");
              scanf("%f",&hsc);

              if(ssc==5.00 && hsc==5.00)
              {
                 wave=70;
                 waiver=0.7;
              }
              else if((ssc<=5.00 && ssc>4.79 && hsc<5.00 && hsc>4.79 ) )
              {
                     wave=50;
                     waiver=0.5;

              }
              else if( (ssc<5.00 && ssc>4.79&& hsc<=5.00&&hsc>4.79) )
              {
                     wave=50;
                     waiver=0.5;

              }
              else if(ssc<=5.00 && ssc>4.49 && hsc<4.80 && hsc>4.49 )
              {
                     wave=40;
                     waiver=0.4;

              }
              else if( ssc<4.80 && ssc>4.49 && hsc<=5.00 && hsc>4.49 )
              {
                     wave=40;
                     waiver=0.4;

              }
              else if( ssc<=5.00 && ssc>3.99 && hsc<4.50 && hsc>3.99 )
              {
                     wave=35;
                     waiver=0.35;

              }
              else if(  ssc<4.50 &&ssc>3.99 && hsc<=5.00 && hsc>3.99)
              {
                     wave=35;
                     waiver=0.35;

              }
              else if(ssc<=5.00 && ssc>3.49 && hsc<4.00 && hsc>3.49)
              {
                     wave=25;
                     waiver=0.25;
              }
              else if(ssc<4.00 && ssc>3.49 && hsc<=5.00 && hsc>3.49)
              {
                     wave=25;
                     waiver=0.25;
              }
               else if(ssc<=5.00 && hsc<3.49)
              {
                     wave=15;
                     waiver=0.15;
              }
              else if(ssc<3.49 && hsc<=5.00)
                       {
                     wave=15;
                     waiver=0.15;
              }
              if(n1==1)
              {
                 total_cost_cse(wave,waiver);
              }
              else if(n1==2)
              {
                     total_cost_pharmacy(wave,waiver);
              }
              else if(n1==3)
              {
                     total_cost_eee(wave,waiver);
              }
               else if(n1==4)
              {
                     total_cost_textile(wave,waiver);
              }
               else if(n1==5)
              {
                     total_cost_bba(wave,waiver);
              }

               else if(n1==6)
              {
                     total_cost_ell(wave,waiver);
              }
               else if(n1==7)
              {
                     total_cost_bangla(wave,waiver);
              }

       }

void loading()
{
    system("cls");
    int a,k,c;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    printf("    \033[0;32mLoading\033[0m ");
    for(c=1; c<7; c++)
    {
        for(k=1; k<1000000000; k++)

            a=k;
        printf(".");

    }
    usleep(300000);
}
void intro()
{
     system("cls");
     printf("\n\n\n  NORTHERN UNIVERSITY BANGLADESH \n    Waiver Calculator\n\n  \033[0;31mPress Enter\033[0m");
      getch();

}

void choice()
{

       int n1;
       system("cls");
       printf("\n\nWhich Department You Want To Admit(Day Shift)\n\n");
       printf("\033[0;33m1.CSE\n2.Pharmacy\n3.EEE\n4.Textile\n5.BBA\n6.ELL\n7.Bangla\n\033[0m");
       printf("\n\n\033[0;31mEnter Number From List= \033[0m");
       scanf("%d",&n1);
       if(n1<=7)
       {
              waiver_count(n1);
       }
}
int main()
{

  loading();
   intro();
  choice();

  return 0;
}

