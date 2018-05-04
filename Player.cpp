#include"IPlayer.h"

int KiemTra(KhoiGach *pkhoigach,INFO *infogame) //-1 : gameover 0: win
{
    int i,j,count;
    i=pkhoigach->Row - 1;
    if(pkhoigach->iBoard<=3)
        return -1;//Gameover
    if(infogame->score>=300)
        return 0;//Win
    do
    {
        count=0;
        for(j=0; j<MaxJ; j++)
        {
            if(Board[pkhoigach->iBoard+i][j]==1)
                count++;
        }
        if(count==MaxJ)
        {
            CapNhat(infogame,20);
            CapNhatLaiToaDo(pkhoigach->iBoard+i);
            DisplayBoard();
        }
        else
        {
            i=i-1;
        }
    }
    while(i>=0);
    return 1;
}


void dieuKhienChinh()
{
    clrscr();
    int IDKhoiTiepTheo;
    clock_t Start, End;
    char key;

    INFO info;
    KhoiGach *currenKhoi;
    currenKhoi = TaoKhoiGach(Loai());
    IDKhoiTiepTheo = Loai();
    DrawBoard();
    InitGame(&info);
    do
    {
        VeBangDiem(info);
        VeKhoiGach(currenKhoi);
        Xoa_Next();
        Ve_Next(IDKhoiTiepTheo);
        Start = clock();
        do
        {
            if(_kbhit())
            {
                key = _getch();

                XoaKhoiGach(currenKhoi);
                if(GetAsyncKeyState(VK_LEFT) || key == 'a' || key == 'A') // sua lai cac phim ASDW
                    turnLeft(currenKhoi);
                if(GetAsyncKeyState(VK_RIGHT) || key == 'd' || key == 'D')
                    turnRight(currenKhoi);
                if(GetAsyncKeyState(VK_DOWN) || key == 's' || key == 'S')
                    goDown(currenKhoi);
                if(GetAsyncKeyState(VK_UP) || key == 'w' || key == 'W')
                    goAround(currenKhoi);
                VeKhoiGach(currenKhoi);

                Sleep(200);
            }
//            if(_kbhit())
//            {
//
//                key = _getch();
//                XoaKhoiGach(currenKhoi);
//                if(key == 'a' || key == 'A')
//                    SangTrai(currenKhoi);
//                if(key == 'd' || key == 'D')
//                    SangPhai(currenKhoi);
//                if(GetAsyncKeyState(VK_UP))
//                    goDown(currenKhoi);
//                if(key == 'w' || key == 'W')
//                    XoayKhoiGach(currenKhoi);
//                VeKhoiGach(currenKhoi);
//            }
//            system("pause");
            End = clock();
        }
        while(float(End - Start) < 1000);
        XoaKhoiGach(currenKhoi);
        if(goDown(currenKhoi) == 0)
        {
            GanGiaTri(currenKhoi);

            int ketqua = KiemTra(currenKhoi, &info);
            if(ketqua == -1 || ketqua == 0)
                break;

            HuyKhoiGach(currenKhoi); // giai phong bôj nhớ

            currenKhoi = TaoKhoiGach(IDKhoiTiepTheo);
            IDKhoiTiepTheo = Loai();
        }
        DisplayBoard(); // ve khoi đẫ rơi cuống cuốibảng

    }
    while(1);
    clrscr();
    TextColor(15); // khai bao duoi de lam j
    gotoXY(35,10);
    cout << "GAME OVER\n";

    cout << "YOU GOT: " << info.score << endl;

    cout << "End Game.Press anykey to back to Main Menu.";
    _getch(); // cái n� y để l� m j
}
void Ve_Next(int ID)
{
    KhoiGach *pnext=TaoKhoiGach(ID);
    int iRoot=LEFT+MaxJ + 5;
    int jRoot=TOP;
    for(int i=0;i<pnext->Row;i++)
    {
        for (int j=0;j<pnext->Col;j++)
        {
            if(pnext->arr[i][j]==1)
            {
                TextColor(15);
                gotoXY(iRoot+j,jRoot+i);
                cout << char(219);
            }
        }

    }
    HuyKhoiGach(pnext);
}
void Xoa_Next()
{
    int iRoot=LEFT+MaxJ+5;
    int jRoot=TOP;
    for(int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {

                TextColor(0);
                gotoXY(iRoot+j,jRoot+i);
                cout << " "; // chú ý in ra dấu cách
        }

    }
}
void HuyKhoiGach(KhoiGach* pkhoigach)
{
    int i;
    //Huy bo nho cua ma tran trang thai arr.
    for(i=0;i<pkhoigach->Row;i++)
        delete(pkhoigach->arr[i]);
    delete(pkhoigach->arr);
    /////////////////////////////////////////////////////////
    //Sau do moi free(pkhoigach)
    delete(pkhoigach);
    pkhoigach=NULL;
}
void VeBangDiem(INFO info)
{
    TextColor(15);
    gotoXY(LEFT+MaxJ+2,10);
    cout << "  SCORE: " << info.score;
    gotoXY(LEFT+MaxJ+2,11);
    cout << "  LEVEL: " << info.level;
    gotoXY(LEFT+MaxJ+2,12);
    cout << "  SPEED: " << info.speed;
}
