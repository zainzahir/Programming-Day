#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void playerMove(int x, int y);
void printMaze();
int main(){
    int x=11 ,y=1;
    system("cls");
    printMaze();
    while(true){
        playerMove(x,y);
        y += 1;
        if(y==8)
        y=1;
    }
    gotoxy(0,12);
    return 0;
}
void printMaze(){
cout << "#######################" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#                     #" << endl;
cout << "#######################" << endl;
}
void gotoxy(int x, int y){
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void playerMove(int x, int y){
    gotoxy(x,y);
    cout<<"P";
    Sleep(200);
    gotoxy(x,y);
    cout<<" ";
};
