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
	printf("请输入两个操作数:>\n");
	scanf("%d%d",&x,&y);
	printf("%d\n",pf(x,y));  // 有很多重复多次，只是参数不同的代码 可以使用回调函数来改进 
 } 
  
int main()
{ 
  int input=0;
  int x=0;
  int y=0;
  do
  {
  	 menu();
     printf("请选择:>");
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
    		printf("退出计算器！\n");
    		break;   
		default:
		    printf("选择错误!\n");					
      } 
  }while(input);
}
