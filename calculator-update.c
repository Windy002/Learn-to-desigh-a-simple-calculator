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

void calc(int (*pf)(int x,int y))
{
	int x=0;
	int y=0;
	printf("����������������:>\n");
	scanf("%d%d",&x,&y);
	printf("%d\n",pf(x,y));  // �кܶ��ظ���Σ�ֻ�ǲ�����ͬ�Ĵ��� ����ʹ�ûص��������Ľ� 
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
            calc(Add);
    		break;
    	case 2:
            calc(Sub);
    		break;
    	case 3:
            calc(Mul);
    		break;    		
    	case 4:
            calc(Div);
    		break;    
    	case 0:
    		printf("�˳���������\n");
    		break;   
		default:
		    printf("ѡ�����!\n");					
      } 
  }while(input);
}
