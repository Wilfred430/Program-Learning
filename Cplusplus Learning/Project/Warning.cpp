#include <iostream>
#include <iomanip>
#include <conio.h>
#include <fstream>
#include <windows.h>
#include <string>
#include <random>
#include <cwchar>
#include <ctime>
using namespace std;
void SetColor(int color = 7);
void Gamestartanimation();
void show_frame(char dot[][7]);
void initialize(char dot[][7]);
void dot_set(char arrow[7], char dot[][7], bool, bool);
void refresh(char arrow[7]);
void player1turn(char arrow[7], char dot[][7]);
void player2turn(char arrow[7], char dot[][7]);
void fullcheck(char dot[][7], char arrow[7]);
void fullline(char dot[][7], char arrow[7]);
void END(bool, bool);
void gotoxy(int xpos, int ypos);
void tie();
void showMsg();
bool changeplayer = false;
bool warning = false;
bool robot = false;
int num = 1;
int count = 0;
int Skip[7] = {0};
int Gap = 0;
int Gapk = 0;
int timelimit = 15;


int main()
{
    for (int i = 0; i < 7; i++)
    {
        Skip[i] = 0;
    }
    system("color 06");
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);
    CursorInfo.bVisible = false;
    SetConsoleCursorInfo(handle, &CursorInfo);
    ifstream text;
    char c, arrow[7], dot[6][7];
    string startext, nulltext, modoltext;


    Gamestartanimation();
    system("color 0F");
    while (1)
    {
        if (kbhit()) // 判斷是否按下按鈕(任意鍵)
            break;
        text.open("Game_start.txt"); // 讀取遊戲開始頁面
        cout << endl
             << endl
             << endl;
        while (!text.eof())
        {
            getline(text, startext); // 以列為單位，印出遊戲畫面
            cout << "  " << startext << endl;
        }
        Sleep(600);
        text.close();  // 關閉檔案
        system("cls"); // 清除遊戲開始畫面
        Sleep(200);
    }
    while (1)
    {
        if (kbhit()) // 判斷是否按下按鈕(任意鍵)
        {
            c = getch();
            if (c == 81 || c == 113)
            {
                system("cls");
                initialize(dot); // 初始化空格內為'.'
                robot = false;
                player1turn(arrow, dot);
            }
            else if (c == 69 || c == 101)
            {
                system("cls");
                initialize(dot); // 初始化空格內為'.'
                robot = true;
                player1turn(arrow, dot);
            }
        }
        text.open("Model_choose.txt"); // 讀取遊戲開始頁面
        cout << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl
             << endl;
        while (!text.eof())
        {
            getline(text, modoltext); // 以列為單位，印出遊戲畫面
            cout << "     " << modoltext << endl;
        }
        Sleep(600);
        text.close();  // 關閉檔案
        system("cls"); // 清除遊戲開始畫面
        Sleep(200);
    }
    return 0;
}


void show_frame(char dot[][7]) // 作用:印出遊戲內的棋盤以及詳細資料
{
    int i, j, time = 1;


    for (i = 1; i <= 17; i++)
    {
        if (i % 3 == 1)
        {
            cout << "   |";
            for (j = 0; j < 7; j++)
            {
                cout << "       |";
            }
            if (i == 4)
            {
                cout << "   "
                     << "|                |";
            }
            if (i == 7)
            {
                cout << "   "
                     << "|                |";
            }
            if (i == 10)
            {
                cout << "   "
                     << "\\----------------/";
            }
            cout << endl;
        }
        else if (i % 3 == 2)
        {
            cout << "  " << time << "|"; // 列數
            for (j = 0; j < 7; j++)
            {
                // cout << "   " << dot[(i - 2) / 3][j] << "   |"; // 將char array塞進空格中


                cout << "  ";
                if (dot[(i - 2) / 3][j] == 'X')
                    SetColor(170);
                else if (dot[(i - 2) / 3][j] == 'O')
                    SetColor(187);
                else if (dot[(i - 2) / 3][j] == 'A')
                    SetColor(204);
                cout << "   ";
                SetColor();
                cout << "  |";
            }
            if (i == 8)
            {
                cout << "   "
                     << "|                |";
            }
            if (i == 5)
            {
                cout << "   "
                     << "|                |";
            }
            if (i == 2)
            {
                cout << "   "
                     << "/----------------\\";
            }
            time++;
            cout << endl;
        }
        else if (i % 3 == 0 && robot == false)
        {
            cout << "   |";
            for (j = 0; j < 7; j++)
            {
                cout << ".......|";
            }
            if (i == 3)
            {
                cout << "   "
                     << "| ";
                SetColor(170);
                cout << "   ";
                SetColor();
                cout << " is Player 1|";
            }
            if (i == 6)
            {
                cout << "   "
                     << "| ";
                SetColor(187);
                cout << "   ";
                SetColor();
                cout << " is Player 2|";
            }
            if (i == 9)
            {
                cout << "   "
                     << "| ";
                SetColor(204);
                cout << "   ";
                SetColor();
                cout << " is Endline |";
            }
            if (i == 12)
            {
                cout << "   "
                     << "Player 1 : A / D ";
            }
            if (i == 15)
            {
                cout << "   "
                     << "Player 2 : L / R";
            }
            cout << endl;
        }
        else if (i % 3 == 0 && robot == true)
        {
            cout << "   |";
            for (j = 0; j < 7; j++)
            {
                cout << ".......|";
            }
            if (i == 3)
            {
                cout << "   "
                     << "| ";
                SetColor(170);
                cout << "   ";
                SetColor();
                cout << " is Player  |";
            }
            if (i == 6)
            {
                cout << "   "
                     << "| ";
                SetColor(187);
                cout << "   ";
                SetColor();
                cout << " is Robot   |";
            }
            if (i == 9)
            {
                cout << "   "
                     << "| ";
                SetColor(204);
                cout << "   ";
                SetColor();
                cout << " is Endline |";
            }
            if (i == 12)
            {
                cout << "   "
                     << "Player : A / D ";
            }
            cout << endl;
        }
    }
    cout << "   ";
    for (i = 0; i < 7; i++)
    {
        cout << "|_______";
    }
    cout << "|" << endl;
    cout << "       1";
    for (i = 2; i < 8; i++)
    {
        cout << setw(8) << i; // 下方的欄數
    }
    cout << endl;
    return;
}
void initialize(char dot[][7]) // 初始化遊戲(僅在遊戲的開頭)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            dot[i][j] = ' '; // 為何用點:因為如果用空格會讀取不到
        }
    }
}
void refresh(char arrow[7])
{ // 想法:將箭頭刷新成空格後再assignment箭頭符號進去
    for (int i = 0; i < 7; i++)
    {
        arrow[i] = ' ';
    }
}


void player1turn(char arrow[7], char dot[][7]) // 玩家1的回合
{
    vector<int> full_line1;
    fullline(dot, arrow);
    refresh(arrow);
    gotoxy(0, 0);
    changeplayer = true;
    bool player1 = true, player2 = false, fault = false;
    int k = 0, i;
    int Ch = 0;
    char c = 33;            // 無其他目的，只是要避開Space的ASCII code
    arrow[0] = 'V';         // 初始化箭頭的位置
    int start = time(NULL); // 進來時的time
    int passtime;
    if (robot == false)
    {
        cout << endl
             << "《 Round Player 1 》" << endl
             << endl;
    }
    else
    {
        cout << endl
             << "《 Round Player 》" << endl
             << endl;
    }
    cout << setw(8) << arrow[0] << endl; // 印出箭頭
    show_frame(dot);                     // 顯現表格
    if (robot == false)
    {
        if (warning) // warning function監測是否對方有三格連一線
        {
            gotoxy(0, 25);
            cout << "    Player 2 has 3 in a row !                           ";
        }
    }
    else
    {
        if (warning) // warning function監測是否對方有三格連一線
        {
            gotoxy(0, 25);
            cout << "    Robot has 3 in a row !                              ";
        }
    }
    while (c != 32) // 在還沒按空白鍵之前(Space ascii code為32)
    {
        passtime = (time(NULL) - start) + Gap;
        if ((timelimit - passtime) >= 0)
        {
            gotoxy(38, 2);
            cout << "Remaining Time : " << timelimit - passtime << " ";
        }
        else
        {
            for (int i = 0; i < 7; i++)
            {
                if (Skip[i] == 0)
                {
                    full_line1.push_back(i);
                }
            }
            srand(time(NULL));
            k = full_line1[rand() % (full_line1.size())];
            full_line1.clear();
            Sleep(1000); // 電腦隨機下棋時間
            refresh(arrow);
            system("cls");
            arrow[k] = 'V'; // 刷新後將K位子assignment出箭頭
            if (robot == false)
            {
                cout << endl
                     << "《 Round Player 1 》" << endl
                     << endl;
            }
            else
            {
                cout << endl
                     << "《 Round Player 》" << endl
                     << endl;
            }
            for (int i = 0; i < 7; i++)
                cout << setw(8) << arrow[i];
            cout << endl;
            show_frame(dot);
            if (num == 42)                         // 非滿格
                tie();                             // 確認是否滿行
            dot_set(arrow, dot, player1, player2); // 下X子 並判斷是否勝出 //用bool判斷是player1的回合
            refresh(arrow);
            gotoxy(0, 0);
            num++; // 記錄下幾個子
            player2turn(arrow, dot);
        }
        if (kbhit())
        {
            c = getch(); // getch函數抓鍵盤的input
            gotoxy(0, 25);
            cout << "                                          ";
            if (c != 32)
                refresh(arrow); // 因為input只能有AD RL space 三種，所以不是移動方向就是落子
            else                // 是按Space後就跳開while然後下子在最下一層
            {
                break;
            }
            fault = false;
            switch (c)
            {
            case 65:
            case 97: // 左 大小寫D
                if (k != 0)
                    k--;
                else
                    k = 6; // 反方向產出箭頭
                break;
            case 68:
            case 100: // 右  大小寫A
                if (k != 6)
                    k++;
                else
                    k = 0; // 反方向產出箭頭
                break;
            default:
                fault = true; // 判斷有沒有按到其他的鍵
            }
            gotoxy(0, 0);
            arrow[k] = 'V'; // 刷新後將K位子assignment出箭頭
            if (robot == false)
            {
                cout << endl
                     << "《 Round Player 1 》" << endl
                     << endl;
            }
            else
            {
                cout << endl
                     << "《 Round Player 》" << endl
                     << endl;
            }
            for (int i = 0; i < 7; i++)
                cout << setw(8) << arrow[i];
            cout << endl;
            show_frame(dot);
            if (fault)
            {
                // 若沒延遲會有bug (會隱隱約約看到下方提示字)
                gotoxy(0, 25);
                cout << "    《 Please only press A / a or D / d 》";
            } /*else
             {
                 gotoxy(0,25);
                 cout << "                                          ";
             }*/
        }
    }
    if (num != 42)                         // 非滿格
        fullcheck(dot, arrow);             // 確認是否滿行
    dot_set(arrow, dot, player1, player2); // 下X子 並判斷是否勝出 //用bool判斷是player1的回合
    refresh(arrow);
    gotoxy(0, 0);
    passtime = time(NULL) - start + Gap;
    if (changeplayer || passtime <= 0) // 判斷是否滿格，是的話就就跑else並回到初始位子
    {
        num++; // 記錄下幾個子
        Gap = 0;
        player2turn(arrow, dot);
    }
    else
    {
        Gap = passtime;
        player1turn(arrow, dot);
    }
}


void player2turn(char arrow[7], char dot[][7])
{
    vector<int> full_line2;
    fullline(dot, arrow);
    char robot_arrow[7]; // 讓電腦箭頭不一樣
    char player2_arrow[7];
    refresh(robot_arrow);
    gotoxy(0, 0);
    changeplayer = true;
    bool player2 = true, player1 = false, fault = false;
    int k = 0, Ch = 0, i;
    char c = 31;
    arrow[0] = 'T';
    int start = time(NULL);
    int passtime;
    if (robot == false)
    {
        cout << endl
             << "《 Round Player 2 》" << endl
             << endl;
    }
    else
    {
        cout << endl
             << "《 Round Robot  》" << endl
             << endl;
    }
    if (num % 2 == 0)
    {
        // system("cls");
        // cout<<endl<<"《 Round Player 2 》"<<endl<<endl;
        cout << setw(8) << arrow[0] << endl;
    }
    show_frame(dot);
    if (robot == false)
    {
        if (warning)
        {
            gotoxy(0, 25);
            cout << "     Player 1 has 3 in a row !                                     ";
        }
    }
    else
    {
        if (warning)
        {
            gotoxy(0, 25);
            cout << "     Player has 3 in a row !                                      ";
        }
    }


    if (robot == false)
    {


        while (c != 32)
        {
            passtime = (time(NULL) - start) + Gapk;
            if ((timelimit - passtime) >= 0)
            {
                gotoxy(38, 2);
                cout << "Remaining Time : " << timelimit - (passtime) << " ";
            }
            else
            {
                for (int i = 0; i < 7; i++)
                {
                    if (Skip[i] == 0)
                    {
                        full_line2.push_back(i);
                    }
                }
                srand(time(NULL));
                k = full_line2[rand() % (full_line2.size())];
                full_line2.clear();
                Sleep(1000); // 電腦隨機下棋時間
                refresh(arrow);
                system("cls");
                arrow[k] = 'T'; // 刷新後將K位子assignment出箭頭
                if (robot == false)
                {
                    cout << endl
                         << "《 Round Player 2 》" << endl
                         << endl;
                }
                else
                {
                    cout << endl
                         << "《 Round Robot  》" << endl
                         << endl;
                }
                for (int i = 0; i < 7; i++)
                    cout << setw(8) << arrow[i];
                cout << endl;
                show_frame(dot);
                if (num == 42)                         // 非滿格
                    tie();                             // 確認是否滿行
                dot_set(arrow, dot, player1, player2); // 下X子 並判斷是否勝出 //用bool判斷是player1的回合
                refresh(arrow);
                gotoxy(0, 0);
                num++; // 記錄下幾個子
                player1turn(arrow, dot);
            }
            if (kbhit())
            {
                c = getch();
                gotoxy(0, 0);
                gotoxy(0, 25);
                cout << ("                                          ");
                if (c != 32)
                    refresh(arrow);
                else
                {
                    break;
                }
                fault = false;
                switch (c)
                {
                case 75: // 左鍵
                    if (k != 0)
                        k--;
                    else
                        k = 6;
                    break;
                case 77: // 右鍵
                    if (k != 6)
                        k++;
                    else
                        k = 0;
                    break;
                default:
                    fault = true;
                }
                gotoxy(0, 0);
                arrow[k] = 'V';
                cout << endl
                     << "《 Round Player 2 》" << endl
                     << endl;
                for (int i = 0; i < 7; i++)
                {
                    player2_arrow[i] = arrow[i];
                    if (player2_arrow[i] == 'V')
                        player2_arrow[i] = 'T';
                }
                for (int i = 0; i < 7; i++)
                    cout << setw(8) << player2_arrow[i];
                cout << endl;
                show_frame(dot);
                if (fault)
                {
                    // 若沒延遲會有bug (會隱隱約約看到下方提示字)
                    gotoxy(0, 24);
                    cout << endl
                         << "    《 Please only press Left or Right 》";
                    fault = false;
                }
            }
        }
    }
    else if (robot == true)
    {
        for (int i = 0; i < 7; i++)
        {
            if (Skip[i] == 0)
            {
                full_line2.push_back(i);
            }
        }
        srand(time(NULL));
        k = full_line2[rand() % (full_line2.size())];
        full_line2.clear();
        srand(time(NULL));
        Sleep((rand() % 1501) + 500); // 電腦隨機下棋時間
        refresh(arrow);
        system("cls");
        arrow[k] = 'V';
        cout << endl
             << "《 Round Robot 》" << endl
             << endl;
        for (int i = 0; i < 7; i++)
        {
            robot_arrow[i] = arrow[i];
            if (robot_arrow[i] == 'V')
                robot_arrow[i] = 'T';
        }
        for (int i = 0; i < 7; i++)
            cout << setw(8) << robot_arrow[i];
        cout << endl;
        show_frame(dot);
    }
    if (num != 42)
        fullcheck(dot, arrow);             // 檢測是否滿行
    dot_set(arrow, dot, player1, player2); // 下O子並判斷player2是否勝出 //用bool判斷是否為player2的回合
    refresh(arrow);
    gotoxy(0, 0);
    passtime = time(NULL) - start + Gapk;
    if (changeplayer || passtime <= 0)
    {
        num++;
        Gapk = 0;
        player1turn(arrow, dot);
    }
    else
	{
		Gapk = passtime;
    	player2turn(arrow, dot);
	}
}


void dot_set(char arrow[7], char dot[][7], bool player1, bool player2)
{
    int x;
    int y;
    warning = false; // 初始化
    for (int i = 0; i < 7; i++)
    {
        if (*(arrow + i) == 'V' || *(arrow + i) == 'T')
        {
            x = i;
            for (int k = 6; k >= 0; k--)
            {
                if ((*(*(dot + k) + i)) == ' ')
                { // 由下往上判斷是否能落子
                    if (player1 && !player2)
                    { // player1的回合
                        (*(*(dot + k) + i)) = 'X';
                    }
                    else if (player2 && !player1)
                    { // player2的回合
                        (*(*(dot + k) + i)) = 'O';
                    }
                    y = k;
                    break;
                }
            }
        }
    }
    count = 0;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        if (y + i < 6 && x - i >= 0)
        {
            if (dot[y][x] != dot[y + i][x - i]) // 左下
            {
                break;
            }
            else if (x - i == 0 || y + i == 5)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y + i][x - i])
            {
                count++;
            }
        }
    }
    for (i = 1; i < 4; i++)
    {
        if (y + i >= 0 && x + i <= 6)
        {
            if (dot[y][x] != dot[y - i][x + i]) // 右上
            {
                break;
            }
            else if (x + i == 6 || y - i == 0)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y - i][x + i])
            {
                count++;
            }
        }
    }
    if (count >= 4)
    {
        for (i = 1; i < 7; i++)
        {
            if (x - i >= 0 && y + i <= 6)
            {
                if (dot[y][x] != dot[y + i][x - i]) // 左下
                {
                    break;
                }
                else if (x - i == 0 || y + i == 5)
                {
                    dot[y + i][x - i] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y + i][x - i])
                {
                    dot[y + i][x - i] = 'A';
                }
            }
        }
        for (i = 1; i < 7; i++)
        {
            if (x + i <= 6 && y - i >= 0)
            {
                if (dot[y][x] != dot[y - i][x + i]) // 右上
                {
                    break;
                }
                else if (x + i == 6 || y - i == 0)
                {
                    dot[y - i][x + i] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y - i][x + i])
                {
                    dot[y - i][x + i] = 'A';
                }
            }
        }
        dot[y][x] = 'A';
        system("cls");
        cout << endl
             << endl
             << endl
             << endl;
        show_frame(dot);
        Sleep(3500);
        system("cls");
        END(player1, player2);
    }
    else if (count == 3)
    {
        warning = true;
        count = 0;
    }
    else
    {
        count = 0;
    }


    for (i = 0; i < 4; i++) // 左上
    {
        if (y - i >= 0 && x - i >= 0)
        {
            if (dot[y][x] != dot[y - i][x - i])
            {
                break;
            }
            else if (x - i == 0 || y - i == 0)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y - i][x - i])
            {
                count++;
            }
        }
    }
    for (i = 1; i < 4; i++)
    {
        if (x + i <= 6 && y + i <= 5)
        {
            if (dot[y][x] != dot[y + i][x + i]) // 右下
            {
                break;
            }
            else if (x + i == 6 || y + i == 5)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y + i][x + i])
            {
                count++;
            }
        }
    }
    if (count >= 4)
    {
        for (i = 1; i < 4; i++) // 左上
        {
            if (y - i >= 0 && x - i >= 0)
            {
                if (dot[y][x] != dot[y - i][x - i])
                {
                    break;
                }
                else if (x - i == 0 || y - i == 0)
                {
                    dot[y - i][x - i] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y - i][x - i])
                {
                    dot[y - i][x - i] = 'A';
                }
            }
        }
        for (i = 1; i < 4; i++)
        {
            if (x + i <= 6 && y + i <= 5)
            {
                if (dot[y][x] != dot[y + i][x + i]) // 右下
                {
                    break;
                }
                else if (x + i == 6 || y + i == 5)
                {
                    dot[y + i][x + i] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y + i][x + i])
                {
                    dot[y + i][x + i] = 'A';
                }
            }
        }
        dot[y][x] = 'A';
        system("cls");
        cout << endl
             << endl
             << endl
             << endl;
        show_frame(dot);
        Sleep(3500);
        system("cls");
        END(player1, player2);
    }
    else if (count == 3)
    {
        warning = true;
        count = 0;
    }
    else
    {
        count = 0;
    }
    for (i = 0; i < 4; i++)
    {
        if (x + i <= 6)
        {
            if (dot[y][x] != dot[y][x + i]) // 右
            {
                break;
            }
            else if (x + i == 6)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y][x + i])
            {
                count++;
            }
        }
    }
    for (i = 1; i < 4; i++)
    {
        if (x - i >= 0)
        {
            if (dot[y][x] != dot[y][x - i]) // 左
            {
                break;
            }
            else if (x - i == 0)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y][x - i])
            {
                count++;
            }
        }
    }
    if (count >= 4)
    {
        for (i = 1; i < 4; i++)
        {
            if (x + i <= 6)
            {
                if (dot[y][x] != dot[y][x + i]) // 右
                {
                    break;
                }
                else if (x + i == 6)
                {
                    dot[y][x + i] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y][x + i])
                {
                    dot[y][x + i] = 'A';
                }
            }
        }
        for (i = 1; i < 4; i++)
        {
            if (x - i >= 0)
            {
                if (dot[y][x] != dot[y][x - i]) // 左
                {
                    break;
                }
                else if (x - i == 0)
                {
                    dot[y][x - i] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y][x - i])
                {
                    dot[y][x - i] = 'A';
                }
            }
        }
        dot[y][x] = 'A';
        system("cls");
        cout << endl
             << endl
             << endl
             << endl;
        show_frame(dot);
        Sleep(3500);
        system("cls");
        END(player1, player2);
    }
    else if (count == 3)
    {
        warning = true;
        count = 0;
    }
    else
    {
        count = 0;
    }
    for (i = 0; i < 4; i++)
    {
        if (y - i >= 0)
        {
            if (dot[y][x] != dot[y - i][x]) // 上
            {
                break;
            }
            else if (y - i == 0)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y - i][x])
            {
                count++;
            }
        }
    }
    for (i = 1; i < 4; i++)
    {
        if (y + i <= 5)
        {
            if (dot[y][x] != dot[y + i][x]) // 下
            {
                break;
            }
            else if (y + i == 5)
            {
                count++;
                break;
            }
            else if (dot[y][x] == dot[y + i][x])
            {
                count++;
            }
        }
    }
    if (count >= 4)
    {
        for (i = 1; i < 4; i++)
        {
            if (y - i >= 0)
            {
                if (dot[y][x] != dot[y - i][x]) // 上
                {
                    break;
                }
                else if (y - i == 0)
                {
                    dot[y - i][x] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y - i][x])
                {
                    dot[y - i][x] = 'A';
                }
            }
        }
        for (i = 1; i < 4; i++)
        {
            if (y + i <= 5)
            {
                if (dot[y][x] != dot[y + i][x]) // 下
                {
                    break;
                }
                else if (y + i == 5)
                {
                    dot[y + i][x] = 'A';
                    break;
                }
                else if (dot[y][x] == dot[y + i][x])
                {
                    dot[y + i][x] = 'A';
                }
            }
        }
        dot[y][x] = 'A';
        system("cls");
        cout << endl
             << endl
             << endl
             << endl;
        show_frame(dot);
        Sleep(3000);
        system("cls");
        END(player1, player2);
    }
    else if (count == 3)
    {
        warning = true;
        count = 0;
    }
    else
    {
        count = 0;
    }
    if (num == 42) // 當滿盤時的判斷
    {
        system("cls");
        cout << endl
             << endl
             << endl;
        show_frame(dot);
        Sleep(1500);
        tie();
    }
}


void fullcheck(char dot[][7], char arrow[7])
{
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (*(arrow + i) == 'V' || *(arrow + i) == 'T')
        {
            for (int k = 6; k >= 0; k--)
            {
                if ((*(*(dot + k) + i)) == 'O' || ((*(*(dot + k) + i)) == 'X')) // 只看ＯＸ的數量
                    count++;
            }
            if (count == 6)
            {
                Skip[i] = 1;
                gotoxy(0, 24);
                cout << endl
                     << "       該 行 已 滿 !                               ";
                changeplayer = false; // 從新回合
            }
            break;
        }
    }
}


void tie()
{
    ifstream text;
    string tietext;
    text.open("TIE.txt");
    system("cls");
    cout << endl
         << endl;
    while (!text.eof())
    {
        getline(text, tietext);
        cout << "      " << tietext << endl; // 印出平手畫面
    }
    Sleep(2500);
    exit(1);
}


void END(bool player1, bool player2)
{
    ifstream text;
    string endtext;
    cout << endl
         << endl;
    if (player1 && robot == false)
        text.open("Game_end1.txt"); // 讀取玩家1的畫面
    else if(player2 && robot == false)
        text.open("Game_end2.txt"); // 讀取玩家2的畫面
    else if(player1 && robot == true)
        text.open("Player_Win.txt");
	else if(player2 && robot == true)
        text.open("Robot_Win.txt");

    while (!text.eof())
    {
        getline(text, endtext);
        cout << "      " << endtext << endl; // 印出玩家獲勝的畫面
    }
    Sleep(2500);
    exit(1);
}


void gotoxy(int xpos, int ypos)
{
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos;
    scrn.Y = ypos;
    SetConsoleCursorPosition(hOuput, scrn);
}


void Gamestartanimation()
{
    int count = 0;
    ifstream text;
    string startext;
    text.open("Loading.txt"); // 讀取遊戲開始頁面
    while (count < 20)
    {
        getline(text, startext); // 以列為單位，印出遊戲畫面
        cout << "      " << startext << endl;
        count++;
        if (count == 5 || count == 10 || count == 15)
        {
            Sleep(350);
            system("cls");
            for (int i = 0; i < count - 3; i++)
            {
                cout << endl;
            }
        }
        else if (count == 20)
        {
            Sleep(2500);
            system("cls");
            for (int i = 0; i < count - 3; i++)
            {
                cout << endl;
            }
        }
    }
    system("cls");
    for (int i = 0; i < 7; i++)
    {
        cout << endl;
    }
    while (!text.eof())
    {
        getline(text, startext); // 以列為單位，印出遊戲畫面
        cout << "      " << startext << endl;
    }
    Sleep(3000);
    system("cls");
}
void SetColor(int color)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}


void fullline(char dot[][7], char arrow[7])
{
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        count = 0;
        for (int k = 6; k >= 0; k--)
        {
            if ((*(*(dot + k) + i)) == 'O' || ((*(*(dot + k) + i)) == 'X')) // 只看ＯＸ的數量
                count++;
        }
        if (count == 6)
        {
            Skip[i] = 1;
        }
    }
}
