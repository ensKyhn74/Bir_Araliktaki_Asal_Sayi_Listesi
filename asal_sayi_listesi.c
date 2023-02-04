#include <stdio.h>
// kullanıcının girdiği alt ve üst limit arasındaki asal sayılar ekrana yazdırılır
// (eğer girilen alt ve üst limit asalsa onlar da dahil)

int main() 
           
{ 
  
  int i,j; 
  int AltLimit,UstLimit;
  
  printf("alt limiti girin: ");   scanf("%d",&AltLimit);
  printf("ust limiti girin: ");   scanf("%d",&UstLimit);
  
  if((AltLimit < 0 && UstLimit < 0) || (AltLimit <= 0 && UstLimit >= 0) || (AltLimit >= 0 && UstLimit <= 0))
  {
    printf("alt ve ust limitin ikisini de pozitif girin!");
  }
  
  else
 {
  
  for(i = AltLimit ; i <= UstLimit ; i++) // alt = 2 , üst = 10 üzerinden anlat
  {
    int AsalKontrol = 1; // kontrol edilen her sayı asal gibi kabul et!
    
    for(j = 2 ; j < i ; j++)
    {
        
     if(i % j == 0)
     {
      AsalKontrol = 0; // asal değil
      break;
     }
     
    }
     
     if(AsalKontrol == 1)
     {
      printf("%d ",i);
     }
  }
 } 

  return 0;
  
}
