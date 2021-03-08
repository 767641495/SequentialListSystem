#include "Factory.c"
#include "Menu.c"

int main()
{
    SeqList list;
    int option = 0;
    while (option != 16)
    {
        Menu();
        option = Read(1, 16);
        Factory(&list, option);
        system("pause");
    }
}