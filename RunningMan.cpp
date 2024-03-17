#include <iostream>
using namespace std;
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <vector>
void gotoxy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}
void hideCursor() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;					
    GetConsoleCursorInfo(handle, &CursorInfo);		
    CursorInfo.bVisible = false;			
    SetConsoleCursorInfo(handle, &CursorInfo);		
}

void initialMap(){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
		gotoxy(5,0); cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
		gotoxy(5,1); cout<<"*                                                                                                 *";
		gotoxy(5,2); cout<<"*   RRRRRRRR   UU     UU  NN        NN  NN        NN  IIIIII  NN        NN       GGGGGGG          *";
		gotoxy(5,3); cout<<"*   RR     RR  UU     UU  NN N      NN  NN N      NN    II    NN N      NN     GGG                *";
		gotoxy(5,4); cout<<"*   RR     RR  UU     UU  NN  N     NN  NN  N     NN    II    NN  N     NN    GG                  *";
		gotoxy(5,5); cout<<"*   RRRRRRR    UU     UU  NN   N    NN  NN   N    NN    II    NN   N    NN    GG                  *";
		gotoxy(5,6); cout<<"*   RR  RR     UU     UU  NN    N   NN  NN    N   NN    II    NN    N   NN    GG     GGGGGG       *";
		gotoxy(5,7); cout<<"*   RR   RR    UU     UU  NN     N  NN  NN     N  NN    II    NN     N  NN    GGG       GGG       *";
		gotoxy(5,8); cout<<"*   RR    RR   UU     UU  NN      N NN  NN      N NN    II    NN      N NN     GGG     GGG        *";
		gotoxy(5,9); cout<<"*   RR     RR   UUUUUUU   NN       NNN  NN       NNN  IIIIII  NN       NNN       GGGGGGGG         *";
		gotoxy(5,10); cout<<"*                                                                                                 *";
		gotoxy(5,11); cout<<"*                                                                                                 *";
		gotoxy(5,12); cout<<"*      O                                                                                          *";
		gotoxy(5,13); cout<<"*     OOO                 MM        MM        AA        NN       NN       PRESS 1 >> START GAME   *";
		gotoxy(5,14); cout<<"*    OOOOO                MMM      MMM       AAAA       NN N     NN       PRESS 2 >> HELP         *";
		gotoxy(5,15); cout<<"*   OOOOOOO    O          MM M    M MM      AA  AA      NN  N    NN       PRESS Esc >> EXIT       *";
		gotoxy(5,16); cout<<"*  OOOOOOOOO  OOO         MM  M  M  MM     AA    AA     NN   N   NN                               *";
		gotoxy(5,17); cout<<"*      |     OOOOO        MM   MM   MM    AAAAAAAAAA    NN    N  NN                               *";
		gotoxy(5,18); cout<<"*      |       |          MM   MM   MM   AA        AA   NN     N NN       110511223               *";
		gotoxy(5,19); cout<<"*      |       |          MM        MM  AA          AA  NN      NNN                               *";
		gotoxy(5,20); cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	
}

void help() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	gotoxy(5,0);  cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
	gotoxy(5,1);  cout<<"*     How to play RUNNING MAN ? !!! :                                                             *";
	gotoxy(5,2);  cout<<"*                                                                                                 *";
	gotoxy(5,3);  cout<<"*     # Jump or Squart to avoid crashing into obstacles !                                         *";
	gotoxy(5,4);  cout<<"*     # Collect coins  to get points.                                                             *";
	gotoxy(5,5);  cout<<"*                                                                                                 *";
	gotoxy(5,6);  cout<<"*                                                                                                 *";
	gotoxy(5,7);  cout<<"*     # Press 'w' to jump.                                                                        *";
	gotoxy(5,8);  cout<<"*     # Press 's' to squart down.                                                                 *";
	gotoxy(5,9);  cout<<"*     # Press 'p' to pause game.           O                                                      *";
	gotoxy(5,10); cout<<"*                                         OOO                                                     *";
	gotoxy(5,11); cout<<"*                                        OOOOO                                                    *";
	gotoxy(5,12); cout<<"*      O                                OOOOOOO                                                   *";
	gotoxy(5,13); cout<<"*     OOO                              OOOOOOOOO                                                  *";
	gotoxy(5,14); cout<<"*    OOOOO                            OOOOOOOOOOO                                                 *";
	gotoxy(5,15); cout<<"*   OOOOOOO    O                          |||                                                     *";
	gotoxy(5,16); cout<<"*  OOOOOOOOO  OOO                         |||                                                     *";
	gotoxy(5,17); cout<<"*      |     OOOOO                        |||                                                     *";
	gotoxy(5,18); cout<<"*      |       |                          |||                                                     *";
	gotoxy(5,19); cout<<"*      |       |                          |||                                                     *";
	gotoxy(5,20); cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	getch();
}

void countdownMap() {
	system("cls");
	int firstRow = 0;
	int lastRow = 16;
	int firstCol = 6;
	int lastCol = 102;
	int count = 0;
	while(count < 3) {
		if(count == 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
			gotoxy(50,6);  cout << "   #####  ";
			gotoxy(50,7);  cout << "       #  ";
			gotoxy(50,8);  cout << "       #  ";
			gotoxy(50, 9); cout << "    ####  ";
			gotoxy(50,10); cout << "       #  ";
			gotoxy(50,11); cout << "       #  ";
			gotoxy(50,12); cout << "   #####  ";
		}
		else if (count == 1) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
			gotoxy(50,6);  cout << "   #####  ";
			gotoxy(50,7);  cout << "       #  ";
			gotoxy(50,8);  cout << "       #  ";
			gotoxy(50, 9); cout << "   #####  ";
			gotoxy(50,10); cout << "   #      ";
			gotoxy(50,11); cout << "   #      ";
			gotoxy(50,12); cout << "   #####  ";
		}
		else if (count == 2) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE) ,14);
			gotoxy(50,6);  cout << "     #    ";
			gotoxy(50,7);  cout << "     #    ";
			gotoxy(50,8);  cout << "     #    ";
			gotoxy(50, 9); cout << "     #    ";
			gotoxy(50,10); cout << "     #    ";
			gotoxy(50,11); cout << "     #    ";
			gotoxy(50,12); cout << "     #    ";
		}
		for(int i = firstCol; i <= lastCol;i++) {
			gotoxy(i,firstRow); cout << "O";
			Sleep(1);
		}
		firstRow += 2;
		for(int i = firstRow;i <= lastRow;i++) {
			gotoxy(lastCol,i); cout << "O";
			Sleep(1);
		}
		lastCol -= 2;
		if(firstRow <= lastRow) {
			for(int i = lastCol; i >= firstCol;i--) {
				gotoxy(i,lastRow); cout << "O";
				Sleep(1);
			}
			lastRow -= 2;
		}
		if(firstCol <= lastCol) {
			for(int i = lastRow;i >= firstRow;i--) {
				gotoxy(firstCol,i); cout << "O";
				Sleep(1);
			}
			firstCol += 2;
		}
		
		count++;
		
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);


}


void playMap() {
	gotoxy(5,0);  cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
	gotoxy(5,1);  cout<<"*                                                                                                 *";
	gotoxy(5,2);  cout<<"*                                                                                                 *";
	gotoxy(5,3);  cout<<"*                                                                                                 *";
	gotoxy(5,4);  cout<<"*                                                                                                 *";
	gotoxy(5,5);  cout<<"*                                                                                                 *";
	gotoxy(5,6);  cout<<"*                                                                                                 *";
	gotoxy(5,7);  cout<<"*                                                                                                 *";
	gotoxy(5,8);  cout<<"*                                                                                                 *";
	gotoxy(5,9);  cout<<"*                                                                                                 *";
	gotoxy(5,10); cout<<"*                                                                                                 *";
	gotoxy(5,11); cout<<"*                                                                                                 *";
	gotoxy(5,12); cout<<"*                                                                                                 *";
	gotoxy(5,13); cout<<"*                                                                                                 *";
	gotoxy(5,14); cout<<"*                                                                                                 *";
	gotoxy(5,15); cout<<"*                                                                                                 *";
	gotoxy(5,16); cout<<"*                                                                                                 *";
	gotoxy(5,17); cout<<"* *********************************************************************************************** *";
	

	gotoxy(5,20); cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
}


void gameoverMap() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
	gotoxy(5,0);  cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
	gotoxy(5,1);  cout<<"*                                                                                                 *";
	gotoxy(5,2);  cout<<"*                    GGGGGGG                                                                      *";
	gotoxy(5,3);  cout<<"*                  GGG                  AA         MM        MM   EEEEEEEEEE                      *";
	gotoxy(5,4);  cout<<"*                 GG                   AAAA        MMM      MMM   EE                              *";
	gotoxy(5,5);  cout<<"*                 GG                  AA  AA       MM M    M MM   EE                              *";
	gotoxy(5,6);  cout<<"*                 GG     GGGGGG      AA    AA      MM  M  M  MM   EEEEEEEE                        *";
	gotoxy(5,7);  cout<<"*                 GGG       GGG     AAAAAAAAAA     MM   MM   MM   EE                              *";
	gotoxy(5,8);  cout<<"*                  GGG     GGG     AA        AA    MM   MM   MM   EE                              *";
	gotoxy(5,9);  cout<<"*                    GGGGGGGG     AA          AA   MM        MM   EEEEEEEEEE                      *";
	gotoxy(5,10); cout<<"*                                                                                                 *";
	gotoxy(5,11); cout<<"*                                                                                                 *";
	gotoxy(5,12); cout<<"*                     OOOOO      VVV        VVV    EEEEEEEEEE    RRRRRRRRR                        *";
	gotoxy(5,13); cout<<"*                   OO     OO     VV        VV     EE            RR       RR                      *";
	gotoxy(5,14); cout<<"*                  OOO     OOO     VV      VV      EE            RR       RR                      *";
	gotoxy(5,15); cout<<"*                  OOO     OOO      VV    VV       EEEEEEEE      RRRRRRRRRR                       *";
	gotoxy(5,16); cout<<"*                  OOO     OOO       VV  VV        EE            RR   RR                          *";
	gotoxy(5,17); cout<<"*                   OO     OO         VVVV         EE            RR    RR                         *";
	gotoxy(5,18); cout<<"*                     OOOOO            VV          EEEEEEEEEE    RR     RRRR                      *";
	gotoxy(5,19); cout<<"*                                                                                                 *";
	gotoxy(5,20); cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"; 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    getch();
}
int random1[10] = {70,92,80,100,75,89,98,65,85,98};
int random2[10] = {90,66,100,74,98,70,60,85,92,81};
class Obstacle {
public:
    friend class Character;
    int treeX,treeY; /// 樹的初始位置
    int wallX,wallY; //// 牆的初始位置
    int currentX,currentY; ///障礙物的現在位置
    int movecount; ///// 計算障礙物的移動，實現滾動式畫面
    int scored; /// 確認障礙物是否已經計算過分數 
    int moneyY[95]; ///在畫面每個X都有配合的錢幣，用此存每個錢幣的高度
    char moneyChar[95]; /// 存取每個錢幣的圖形，特殊狀況會設定成空白字元
    int initialMoney = 0; //// 確認是否初始過錢幣
    Obstacle ();
    Obstacle(int type); //type 1 = tree,type 2 = wall,type 3 = money
    void draw(int type,int &movecount); /// 劃出障礙物樹和牆
    void move(int type,int &movecount); /// 移動障礙物樹和牆
    void controlMoney(int op,Obstacle &tree,Obstacle &wall);
//////可以初始化所有錢幣位置，並且在後續移動錢幣位置
};

Obstacle :: Obstacle(int type) {
	if(type == 1) { //tree
		movecount = 0;
		currentY = 0;
		scored = 0;
	}
	else if (type == 2 ) { ///wall
		movecount = 0;
		currentY = 5; 
	}

	else if(type == 3) { //money
		movecount = 0;
	}
}
	
void Obstacle :: draw(int type,int &movecount) {
	if(movecount == 0) {
			int mode = rand() % 10;
			if(type == 1) { //tree
				//srand(time(NULL));
				//treeX = rand() % 100;

				treeX = random1[mode];
				if(treeX + 10 > wallX && treeX - 10 < wallX) {
					treeX += 15;
				}
				//gotoxy(10,28); cout << "treeX = " << treeX;
				//Sleep(1000);
				currentX = treeX;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
				gotoxy(treeX,14); cout << "  00";
				gotoxy(treeX,15); cout << " 0000";
				gotoxy(treeX,16); cout << "000000";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
				scored = 0;
			}
			else if(type == 2) { // wall
				//srand(time(NULL));
				//wallX = rand() % 20 + 75;
				wallX = random2[mode];
				//gotoxy(10,29); cout << "wallX = " << wallX;
				//Sleep(1000);
				currentX = wallX;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
				gotoxy(wallX,1); cout <<  "00000";
				gotoxy(wallX,2); cout <<  "00000";
				gotoxy(wallX,3); cout <<  "00000";
				gotoxy(wallX,4); cout <<  "00000";
				gotoxy(wallX,5); cout <<  "00000";
				gotoxy(wallX,6); cout <<  "00000";
				gotoxy(wallX,7); cout <<  "00000";
				gotoxy(wallX,8); cout <<  "00000";
				gotoxy(wallX,9); cout <<  "00000";
				gotoxy(wallX,10); cout << "00000";
				gotoxy(wallX,11); cout << "00000";
				gotoxy(wallX,12); cout << "00000";
				scored = 0;
			} 
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	}
	
	
}

void Obstacle :: controlMoney(int op,Obstacle &tree,Obstacle &wall) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
    if(op == 1 && initialMoney == 0) { /// initial money position
        initialMoney = 1;
        moneyY[0] = 5;
        for(int i = 1;i < 95;i++) {
            moneyChar[i] = '$';
            int type = rand() % 4 ;
            if(type == 0) {
                moneyY[i] = moneyY[i-1] + 2;
                if(moneyY[i] >= 12) {
                    moneyY[i] = 12;
                }
            }
            else if (type == 1) {
                moneyY[i] = moneyY[i-1] - 2;
                if(moneyY[i] <= 2) {
                    moneyY[i] = 5;
                }
            }
            else if (type == 2) {
                moneyY[i] = moneyY[i-1] + 1;
                if(moneyY[i] >= 12) {
                    moneyY[i] = 12;
                }
            }
            else if (type == 3) {
                moneyY[i] = moneyY[i-1] - 1;
                if(moneyY[i] <= 2) {
                    moneyY[i] = 2;
                }
            }
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
            gotoxy(i + 6,17 - moneyY[i]); cout << moneyChar[i]; 
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    }
    else if (op == 2) { /// move money position
        for(int i = 0;i < 95;i++) {
            gotoxy(i + 6,17 - moneyY[i]); cout <<" ";
        }
        for(int i = 0;i < 95;i++) {
            int type = rand() % 4 ;
            if(type == 0) {
                moneyY[94] = moneyY[93] + 2;
                if(moneyY[94] >= 12) {
                    moneyY[94] = 12;
                }
            }
            else if (type == 1) {
                moneyY[94] = moneyY[93] - 2;
                if(moneyY[94] <= 1) {
                    moneyY[94] = 1;
                }
            }
            else if (type == 2) {
                moneyY[94] = moneyY[93] + 1;
                if(moneyY[94] >= 12) {
                    moneyY[94] = 12;
                }
            }
            else if (type == 3) {
                moneyY[94] = moneyY[93] - 3;
                if(moneyY[94] <= 2) {
                    moneyY[94] = 2;
                }
            }
            if(i != 94) {
                moneyY[i] = moneyY[i+1];
                moneyChar[i] = moneyChar[i+1];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
                gotoxy(i + 6,17 - moneyY[i]); cout << moneyChar[i]; 
            }
            else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
                gotoxy(94 + 6,17 - moneyY[94]); cout << moneyChar[i]; 
            }
        }
		if(wall.currentX > 7) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
			for(int i = 1;i < 13;i++) {
				gotoxy(wall.currentX ,i);
				cout << "00000 ";
			}
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		}
		else {
			for(int i = 1;i < 13;i++) {
				gotoxy(wall.currentX + 6,i);
				cout << " ";
			}
		}
		if(tree.currentX > 7) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
			gotoxy(tree.currentX,14); cout <<  "  00";
			gotoxy(tree.currentX,15); cout << " 0000";
			gotoxy(tree.currentX,16); cout << "000000";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		}
		else {
			gotoxy(tree.currentX,14); cout <<  "  ";
			gotoxy(tree.currentX,15); cout << "  ";
			gotoxy(tree.currentX,16); cout << "  ";
		}
    }
}


void Obstacle :: move(int type,int &movecount) {
	if(type == 1 ) { ////tree
		currentX = treeX - movecount;
		if(currentX < 30) {
			scored = 0;
		}
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
		gotoxy(treeX-movecount,14); cout << "  00 ";
		gotoxy(treeX-movecount,15); cout << " 0000 ";
		gotoxy(treeX-movecount,16); cout << "000000 ";
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		if(treeX - movecount == 49 || treeX - movecount == 54) {
			currentY = 1;
		}
		else if (treeX - movecount == 50 || treeX - movecount == 53) {
			currentY = 2;
		}
		else if (treeX - movecount == 51 || treeX - movecount == 52) {
			currentY = 3;
		}
		movecount++;
		if(treeX- movecount < 7) {
			gotoxy(treeX-movecount,14); cout << "       ";
			gotoxy(treeX-movecount,15); cout << "       ";
			gotoxy(treeX-movecount,16); cout << "       ";

			movecount = 0;
		}

	}
	else if(type == 2) { ////wall 
		currentX = wallX - movecount;
		if(currentX < 30) {
			scored = 0;
		}
		for(int i = 1;i < 13;i++) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
			gotoxy(wallX - movecount,i);
			cout << "00000 ";
		}
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		movecount++;

		if(wallX - movecount < 7) {
			for(int i = 1;i < 13;i++) {
				gotoxy(wallX - movecount,i);
				cout << "      ";
			}
			movecount = 0;
		}

	}
	Sleep(10);
}
class Character {     // 我的主要角色是小羊
public: 
    friend class Obstacle;   
    Character();
    int runleft;  // 和跑步函式有關，不斷變動runleft的值，讓視覺如同左右腳交替跑步
    int score; 
    int life;
    int dead;
    int sheepX; //小羊初始X位置
    int sheepY; //小羊初始Y位置
    int moveX;  // 為了讓畫面呈現滾動效果
    int moveY;  //紀錄跳動的高度
    int crashInto; // 若撞到牆 crashInto = 1
    int stumbleOver; // 若被樹絆倒 stumbleOver
    int currentX,currentY; // 小羊現在位置
    int gameOver; // 若gameOver = 1 遊戲結束
    void running(int runleft);
    void jump(int up);
    void squart(Obstacle &tree,Obstacle &wall,Obstacle &money);
    void scoreLife(Obstacle &tree,Obstacle &wall,Obstacle &money);
};


Character :: Character() {
	sheepX = 40;
	sheepY = 16;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
	gotoxy(sheepX,(sheepY-3)); cout << "  00000";
	gotoxy(sheepX,(sheepY-2)); cout << " 0000";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);cout << " .. ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9); cout << "0";
	gotoxy(sheepX,(sheepY-1)); cout << "   00000";
	gotoxy(sheepX,sheepY); cout << "   // \\\\";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	runleft = 1;
	moveX = 0;
	moveY = 0;
	score = 0;
	life = 10;
	dead = 0;
	crashInto = 0;
	stumbleOver = 0;
	currentX = 40;
	currentY = 4;
	gameOver = 0;
}

void Character :: running(int runleft) {
	currentY = 4;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    gotoxy(sheepX, (sheepY-4));cout<<  "            ";
	gotoxy(sheepX,(sheepY-3)); cout << "  000000    ";
	gotoxy(sheepX,(sheepY-2)); cout << " 0000";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);cout << " .. ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9); cout << "0  ";
	gotoxy(sheepX,(sheepY-1)); cout << "   00000    ";
	if (runleft == 0) {
    	gotoxy(sheepX,sheepY); cout << "    /  \\  ";
    } 
	else if ( runleft == 1) {
    	gotoxy(sheepX,sheepY); cout << "   /  \\   ";
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    gotoxy(sheepX,(sheepY+1)); cout<< "****************";
    Sleep(10);
}

void Character :: jump(int jump) {
	if (jump == 1) { ///// jump up
    	moveY++;
	}
    else if (jump == 0 ) { ////jump down
    	moveY--;
	}
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    gotoxy(sheepX, (sheepY -4) - moveY);cout<<"            ";
    gotoxy(sheepX, (sheepY -3) - moveY);cout<<"  000000    ";
    gotoxy(sheepX, (sheepY -2) - moveY);cout<<" 0000 ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7); cout <<".. ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);cout << "0  ";
    gotoxy(sheepX, (sheepY -1) - moveY);cout<<"   00000    ";

    if (jump == 0 || jump == 1) {
        gotoxy(sheepX, sheepY - moveY); cout << "    | |   ";
    } 
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
    gotoxy(sheepX, (sheepY +1) - moveY);cout<<"                ";
	gotoxy(sheepX,(sheepY+1)); cout<< "****************";
	//gotoxy(10,25); cout << "moveY = " << moveY;
    Sleep(10);
}

void Character :: squart(Obstacle &tree,Obstacle &wall,Obstacle &money) {
	currentY = 2;
    money.controlMoney(2,tree,wall);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);
    gotoxy(sheepX, (sheepY -3));cout<<"             ";
	gotoxy(sheepX, (sheepY -2));cout<<"             ";
    gotoxy(sheepX, (sheepY -1));cout<<"  000000     ";
    gotoxy(sheepX, (sheepY));cout   <<" 0000 ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);cout <<".. ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),9);cout <<"0   ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
	tree.move(1,tree.movecount);
	wall.move(2,wall.movecount);
    Sleep(10);
}


void Character :: scoreLife(Obstacle &tree,Obstacle &wall,Obstacle &money) {
	////////// tree score
	if(tree.currentX < sheepX + 10 && tree.currentX > sheepX  && currentY - 4 < tree.currentY  && tree.scored == 0) { //tree
		stumbleOver = 1;
		score--;
		life--;
		tree.scored = 1;
		if(life == 0) {
			gameOver = 1;
			Sleep(1000);
		}
	}
	else if(tree.currentX < sheepX + 10  && tree.currentX > sheepX && tree.scored == 0) {
		tree.scored = 1;
		score = score + 5;
	}
	
	///////// wall score
	if (wall.currentX < sheepX + 10 && wall.currentX > sheepX  && currentY >= 4 && wall.scored == 0) {    //wall
		crashInto = 1;
		score--;
		life--;
		wall.scored = 1;
		if(life == 0) {
			gameOver = 1;
			Sleep(1000);
		}
	}
	else if(wall.currentX < sheepX + 10 && wall.currentX > sheepX && wall.scored == 0){
		wall.scored = 1;
		score = score + 5;
		//Sleep(2000);
	}
	/////////// money score
	if(money.moneyY[43] < currentY + 1 && money.moneyY[43] > currentY - 4) {
        money.moneyChar[43] = ' ';
		score++;
		//getch();
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
	gotoxy(10,18);cout << "Score : " << score << " ";
	gotoxy(10,19);cout << "LIFE  : " << life << " ";
	//gotoxy(10,21); cout << "Sheep currentX = " << sheepX << " Sheep currentX front = " << sheepX + 10 << " Sheep currentY = " << currentY << "  ";
	//gotoxy(10,22); cout << "tree currentX = " << tree.currentX << " tree currentY = " << tree.currentY;
	//gotoxy(10,23); cout << "wall currentX = " << wall.currentX << " wall curentY = " << wall.currentY;
	//gotoxy(10,24); cout << "moneyY[44] = " << money.moneyY[44]  << " ";
    //gotoxy(6,26); 
	/*
    for(int i = 0;i < 95;i++) {
        cout << money.moneyChar[i];
    }
    gotoxy(6+43,27); cout << "+";
	*/
}


void play() {
	countdownMap();
	system("cls");
	playMap();
	Character runningMan;
	Obstacle tree1(1);
	Obstacle wall1(2);
    Obstacle money(3);
    money.controlMoney(1,tree1,wall1);
	char c;
	while(runningMan.gameOver == 0) {
		tree1.draw(1,tree1.movecount); /// draw new tree if movecount = 0
		wall1.draw(2,wall1.movecount); /// draw new wall if movecount = 0;
		while(!kbhit()) {
			if(runningMan.gameOver == 1) {
				system("cls");
				gameoverMap();
				break;
			}
			else {
                money.controlMoney(2,tree1,wall1);
				if(runningMan.runleft == 1) {
					runningMan.running(1);
					runningMan.runleft = 0;
					if(runningMan.gameOver == 1) {
						break;
					}
				}
				else {
					runningMan.running(0);
					runningMan.runleft = 1;
					if(runningMan.gameOver == 1) {
						system("cls");
						gameoverMap();
						break;
					}
				}
			}
			tree1.move(1,tree1.movecount);
			wall1.move(2,wall1.movecount);
			runningMan.scoreLife(tree1,wall1,money);
			if(runningMan.gameOver == 1) {
				system("cls");
				gameoverMap();
				break;
			}
		}
		if(runningMan.gameOver == 1) {
			gameoverMap();
			break;
		}
		c = getch();
		if(c == 'w') { ///jump
			for(int i = 0;i < 10;i++) { ////jump up
                money.controlMoney(2,tree1,wall1);
				runningMan.jump(1);
				tree1.move(1,tree1.movecount);
				wall1.move(2,wall1.movecount);
				runningMan.scoreLife(tree1,wall1,money);
				if(runningMan.gameOver == 1) {
					system("cls");
					gameoverMap();
					break;
				}
			}
			for(int i = 0 ;i < 10;i++) { ////jump down
                money.controlMoney(2,tree1,wall1);
				runningMan.jump(0);
				tree1.move(1,tree1.movecount);
				wall1.move(2,wall1.movecount);
				runningMan.scoreLife(tree1,wall1,money);
				if(runningMan.gameOver == 1) {
					system("cls");
					gameoverMap();
					break;
				}
			}
			
		}
		else if (c == 's') { /////squart
			for(int i = 0;i < 13;i++) {
				runningMan.squart(tree1,wall1,money);
				runningMan.scoreLife(tree1,wall1,money);
				if(runningMan.gameOver == 1) {
					system("cls");
					gameoverMap();
					break;
				}
			}
		}
		else if (c == 'p') { ////pause (press again to resume)
			getch();
		}
		else if (c == 27) { ///Ese
			break;
		}
		runningMan.scoreLife(tree1,wall1,money);
		
	}
	if(runningMan.gameOver == 1) {
		system("cls");
		gameoverMap();
		
		}
}
	
	
int main()
{
    hideCursor();
    while(1) {
		system("cls");
		initialMap();
		char c = getch();
		if( c =='1') play();
		else if( c =='2') help();
		else if( c == 27) exit(0);
		
	}
    
	return 0;
}
