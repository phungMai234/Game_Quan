#include"IMap.h"

// ham ve ra khung man hinh

void render()
{
    int i, j;
    for(i = LEFT; i <= LEFT + 10 + 1; i++) // cot
    {
        for(j = TOP; j <= TOP + 18 + 1; j++) // hang
        {
            if((j == TOP + 18 +1) && i > LEFT && i < LEFT + 10 + 1) // ve hang
            {
                gotoXY(i, j); // hoi
                TextColor(7);
                cout << char(205);
            }
            if((j == TOP ) && i > LEFT && i < LEFT + 10 + 1) // ve hang
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

void veBangDiem(INFO info)
{
    TextColor(10); // cai nay dung cho het ca dc a
    gotoXY(LEFT + MaxJ + 4, TOP + 6);
    cout << "SCORE: " << info.score << endl;
    gotoXY(LEFT + MaxJ + 4, TOP + 7);
    cout << "LEVEL: " << info.level << endl;
    gotoXY(LEFT + MaxJ + 4, TOP + 8);
    cout << "SPEED: " << info.speed << endl;

}
// ham ve trang thai ma tran
void disPlayBoard()
{
    int i, j;
    for(i = 0; i < MaxI; i++)
    {
        for(j = 0; j < MaxJ; j++)
        {
            if(Board[i][j] == 1 && i > 4)
            {

                gotoXY(j + LEFT + 1, i + TOP + 1 - 4); // k hieu
                TextColor(15);
                cout << char(219);
            }
            if(Board[i][j] == 0 && i >= 4)
            {
                gotoXY(j + LEFT + 1, i + TOP + 1 - 4);
                TextColor(0);
                cout << " ";
            }
        }
    }
}
//  cap nhat lai toa do sau moi lan an diem
void updateGame(int  row)
{
    int i, j;
    // hàng bat dau tu 4 -> 22
    for(i = row; i > 0; i--) // > 4 hay > 0, tinh ca o ngoai bang a
    {
        for(j = 0; j < MaxJ; j++)
        {
            Board[i][j] = Board[i - 1][j];
        }
    }

}
// gan gia tri cho bang khi moi khoi gach roi xuong
void ganGiaTri(KhoiGach* pKhoiGach) // moi gan gia tri chuwa ve
{
    int i, j;
    for(i = 0; i < pKhoiGach->Row; i++)
    {

        for(j = 0; j < pKhoiGach->Col; j++)
        {
            if(pKhoiGach->arr[i][j] == 1)
                Board[pKhoiGach->iBoard + i][pKhoiGach->jBoard + j] = 1;
        }
    }
}
