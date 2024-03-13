#include<stdio.h>
int i,j,height=20,weight=20;
void draw()
{
       for(i=0;i<=height;i++)
       {
              for(j=0;j<=weight;j++)
              {
                     if(i==0 || i==height || j==0 || j==weight)
                     {
                                                              printf("#");

                     }
                      else{
                            printf(" ");
                      }
              }
printf("\n");
       }
}
int main()
{
       draw();
       return 0;
}
