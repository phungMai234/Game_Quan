
#include"INFO.h"

void initGame(INFO* info)
{
    info->score = 0; // diem
    info->level = 1; // muc tro choi
    info->speed = 0.4; // toc do tro choi
}
void update(INFO* info) // int
{
    info->score+=100;
    if(info->score >= 1000)
    {
        info->level++;
        info->speed-=0.1;
    }
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
