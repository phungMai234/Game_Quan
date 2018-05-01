
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
    if(info->score == 1000) // giai quyet cap do diem nay
    {
        info->level++;
        info->speed-=0.1;
    }
}


