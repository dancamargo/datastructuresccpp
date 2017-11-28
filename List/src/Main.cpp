#include <iostream>
#include <stdlib.h>
#include <new>
#include <string>
#define LEN 10

using namespace std;

/* FUNCTIONS */
void clearscreen(void);
void chooseop(int);
void showmenu();
//int* fillarray(void);

int main()
{
    /* VARIABLES */
    int op;
    //int array[LEN] = fillarray();

    showmenu();
    do
    {
        cout << "ENTER AN OPTION: ";
        cin >> op;
        clearscreen();
        chooseop(op);
    } while (op < 10 && op > 0);
    if(op > 10 || op < 0)
        cout << "INVALID OPTION. PROGRAM WILL EXIT\n";
    system("PAUSE");

}

void clearscreen()
{
    system("CLS");
}

void showmenu()
{
    cout << "1: Insert Node At Start\n";
    cout << "2: Insert Node At End\n";
    cout << "3: Insert Node At Index N\n";
    cout << "4: Remove Node At Start\n";
    cout << "5: Remove Node At End\n";
    cout << "6: Remove Node At Index N\n";
    cout << "7: Search Node With ID\n";
    cout << "8: Print List\n";
    cout << "9: Show Menu\n";
    cout << "0: Exit\n\n";
}

void chooseop(int option)
{
    switch(option)
    {
        case 1:
            cout << "Insert Node At Start\n";
            break;
        case 2:
            cout << "Insert Node At End\n";
            break;
        case 3:
            cout << "Insert Node At Index N\n";
            break;
        case 4:
            cout << "Remove Node At Start\n";
            break;
        case 5:
            cout << "Remove Node At End\n";
            break;
        case 6:
            cout << "Remove Node At Index N\n";
            break;
        case 7:
            cout << "Search Node With ID\n";
            break;
        case 8:
            cout << "Print List\n";
            break;
        case 9:
            clearscreen();
            showmenu();
            break;
        case 0:
            cout << "THANKS FOR USING :)\n\n";
            return;
    }
}

/*
int* fillarray()
{
    int array[LEN];
    int i;

    for (i = 0; i < LEN ; i++)
    {
        cout << "Enter integer value for " << i << endl;
        cin >> array[i];
    }
    return array;
}

*/
