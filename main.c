#include <stdio.h>

int main()
{
  float derece;
  
  printf("sicaklik derecesini giriniz\n");
  scanf("%f", &derece);
  if(derece<=0)
    printf("durum=buz\n");
  else if(derece>0&&derece<100)
    printf("durum=su\n");
   else
    printf("durum=buhar\n");   
   
 
   
    return 0;
}
