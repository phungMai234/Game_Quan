
#include"Icheck.h"

int kiemTra(KhoiGach* pKhoiGach, INFO* info)
{
    int i, j, countB = 0;

    if(pKhoiGach->iBoard == 3) // xet tung khoi gach xem cham ma tran
        return -1;

    for(i = 0; i < MaxI; i++)
    {
        countB = 0;
        for(j = 0; j < MaxJ; j++)
        {
            if(Board[pKhoiGach->iBoard + i][j] == 1) // soa k phai la Board[i][j] == 1
            {
                countB++;
            }
        }
        if(countB == MaxJ)
        {
            update(info); // cap nhat lai diem, level, speed, sao k co &
            updateGame(pKhoiGach->iBoard + i); // cap nhat lai toa do
            disPlayBoard();

        }
    }
    return 1;
}
void huyKhoiGach(KhoiGach* pKhoiGach)
{

    int i;
    for(i = 0; i < pKhoiGach->Row; i++)
        delete [] pKhoiGach->arr[i];
    delete [] pKhoiGach->arr;
    pKhoiGach = NULL;
}

bool ingameSence()
{

    render(); // ve khung game

    int Id = Loai();
    KhoiGach * curr; // tao khoi gach

    curr = TaoKhoiGach(Id); // random khoi gach

    int IDKhoiTiepTheo = Loai();

    INFO info;  // khoi tao info ban dau
    initGame(&info); // truyen info ban dau

    char key; // nhap tu ban phim
    clock_t Start, End; // thoi gian chay

    while(1)
    {
        veBangDiem(info);
        VeKhoiGach(curr);
        Xoa_Next();
        Ve_Next(IDKhoiTiepTheo);

        Start = clock();

        do
        {
            if(kbhit())
            {
                key = _getch();

                xoaKhoiGach(curr);

                if( key == 'a' || key == 'A') // van bi loi
                    moveLeftObject(curr);
                if( key == 'd' || key == 'D')
                    moveRightObject(curr);
                if( key == 's' || key == 'S')
                    moveDownObject(curr);
                if( key == 'w' || key == 'W')
                    rotateObject(curr);


                VeKhoiGach(curr);
            }

            End = clock();

        }while(float(End - Start)/ CLK_TCK < info.speed); // choi duoc mot ti ai k chay duoc nua

        xoaKhoiGach(curr);

        if(moveDownObject(curr) == false)
        {
            ganGiaTri(curr); // gan toa do khoi gach vua roi xuong cho bagn

            int result = kiemTra(curr, &info);
            if(result == -1) // game over
                break;

            huyKhoiGach(curr); // giai phong bo nho

            curr = TaoKhoiGach(IDKhoiTiepTheo);
            IDKhoiTiepTheo = Loai();// tao khoi gach xuat hien tiep theo


        }
        disPlayBoard(); // ve ma tran
    }
    gotoXY(30,25);

    clrscr();


    /*show core, end game*/
    TextColor(15);
    cout << "Game Over\n";

    cout << "Your core :" << info.score << endl;

    /* Ask player want to continue game*/


    char choice;

    cout << "Do you want to back Main menu? (Y/N) \n";

    choice = _getch();
    if(choice == 'N' || choice == 'n')
        return false;
    return true;

}

