#include <stdio.h>
#include <stdlib.h>

void menu()
{
    printf("					********************\n");
    printf("					*** 1.add  2.sub ***\n");
    printf("					*** 3.mul  4.dev ***\n");
    printf("					***   0.exit     ***\n");
    printf("					********************\n");
}
int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}

int Mul(int x, int y)
{
    return x * y;
}

int Div(int x, int y)
{
    return x / y;
}

int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        if (input >= 1 && input <= 4)
        {
            printf("����������������:>");
            scanf("%d%d", &x, &y);
            int ret = pfarr[input](x, y);
            printf("%d\n", ret);
        }
        else if(input==0)
        {
            printf("�˳�->\n");
        }
        else
        {
            printf("�������>\n");
        }
    } while (input);
}


