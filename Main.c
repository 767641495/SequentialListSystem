#include "WorkFactory.c"
#include "Menu.c"

int Read(int left, int right); //读入一个int属于[left,right]

int main()
{
    SeqList list = Create(0);
    int option = 0;
    while (option != 16)
    {
        Menu();
        option = Read(1, 16);
        WorkFactory(&list, option);
        system("pause");
    }
}
 
int Read(int left, int right) //读入一个int属于[left,right]
{
    int object = 0;
    fflush(stdin);
    if (scanf("%d", &object) && object >= left && object <= right)
        return object;
    printf(RED "	Input Error!Please choose again!\n\n" NONE);
    return -1;
}