#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu()
{
  printf("					********************\n");
  printf("					*** 1.add  2.sub ***\n");
  printf("					*** 3.mul  4.dev ***\n");
  printf("					***   0.exit     ***\n");
  printf("					********************\n");
 } 
 int Add(int x,int y)
 {
 	return x+y;
 }
 
 int Sub (int x, int y)
 {
 	return x-y;
  } 
  
 int Mul (int x, int y)
 {
 	return x*y;
  }
  
 int Div (int x, int y)
 {
 	return x/y;
  }   
  
int main()
{ 
  int input=0;
  int x=0;
  int y=0;
  do
  {
  	 menu();
     printf("��ѡ��:>");
     scanf("%d",&input);
  
     switch (input)
      {
    	case 1:
            printf("����������������:>"); 
	        scanf("%d%d",&x,&y); 
    		printf("%d+%d = %d\n",x,y,Add(x,y));
    		break;
    	case 2:
            printf("����������������:>"); 
	        scanf("%d%d",&x,&y);     		
    		printf("%d-%d = %d\n",x,y,Sub(x,y));
    		break;
    	case 3:
            printf("����������������:>"); 
	        scanf("%d%d",&x,&y);     		
    		printf("%d*%d = %d\n",x,y,Mul(x,y));
    		break;    		
    	case 4:
            printf("����������������:>"); 
	        scanf("%d%d",&x,&y);     		
    		printf("%d/%d = %d\n",x,y,Div(x,y));
    		break;    
    	case 0:
    		printf("�˳���������\n");
    		break;   
		default:
		    printf("ѡ�����!\n");					
      } 
  }while(input);
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
