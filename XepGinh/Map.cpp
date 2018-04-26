#include"IMap.h"

void Draw()
{
    int i, j;
    for(i = LEFT; i <= LEFT + 10 + 1; i++) // cot
    {
        for(j = TOP; j <= TOP + 18 + 1; j++) // hang
        {
            if((j == TOP || j == TOP + 18 +1) && i > LEFT && i < LEFT + 10 + 1) // ve hang
            {
                gotoXY(i, j); // hoi
                TextColor(7);
                cout << char(205);
            }

            if((i == LEFT || i == LEFT + 10 + 1) && j > TOP && j < TOP + 18 + 1) // ve cot
            {
                gotoXY(i, j);
                TextColor(7);
                cout << char(186);
            }
        }
    }

    // goc trai tren cung
    gotoXY(LEFT, TOP);
    TextColor(10);
    cout << char(219);
    // goc phai tren cung
    gotoXY(LEFT + 10 + 1, TOP);
    TextColor(10);
    cout << char(219);
    // goc trai duoi cung
    gotoXY(LEFT, TOP + 18 + 1);
    TextColor(10);
    cout << char(219);
    // goc phai duoi cung
    gotoXY(LEFT + 10 + 1, TOP + 18 + 1);
    TextColor(10);
    cout << char(219);

}
