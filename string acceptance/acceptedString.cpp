// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char string[50];
//     int flag, count = 0;

//     printf("The grammar is: S->aS, S->Sb, S->ab\n");
//     printf("Enter the string to be checked:\n");
//     gets(string);
//     if (string[0] == 'a')
//     {
//         flag = 0;
//         for (count = 1; string[count - 1] != '\0'; count++)
//         {
//             if (string[count] == 'b')
//             {
//                 flag = 1;
//                 continue;
//             }
//             else if ((flag == 1) && (string[count] == 'a'))
//             {
//                 printf("The string does not belong to the specified grammar");
//                 break;
//             }
//             else if (string[count] == 'a')
//                 continue;
//             else if ((flag == 1) && (string[count] = '\0'))
//             {
//                 printf("String accepted…..!!!!");
//                 break;
//             }
//             else
//             {
//                 printf("String not accepted");
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
// #include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char string[20];
    int state = 0, count = 0;
    // clrscr();
    cout << "SHIVAM GUGLANI" << endl;
    cout << 1816110190 << endl;
    cout << "the grammar is: S->aS, S->Sb, S->ab \n";
    cout << "enter the string to be checked \n";
    // gets(string);
    cin >> string;
    while (string[count] != '\0')
    {
        switch (state)
        {
        case 0:
            if (string[count] == 'a')
                state = 1;
            else
                state = 3;
            break;
        case 1:
            if (string[count] == 'a')
                state = 1;
            else if (string[count] == 'b')
                state = 2;
            else
                state = 3;
            break;
        case 2:
            if (string[count] == 'b')
                state = 2;
            else
                state = 3;
            break;
        default:
            break;
        }
        count++;
        if (state == 3)
            break;
    }
    if (state == 2)
        cout << "string is accepted";
    else
        cout << "string is not accepted";
    // getch();
    return 0;
}
