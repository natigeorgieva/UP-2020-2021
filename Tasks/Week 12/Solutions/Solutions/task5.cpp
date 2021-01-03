#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

typedef short int ushort;

const int WIDTH = 100,  HEIGHT = 100;

string findPath(char maze[HEIGHT][WIDTH], ushort w, ushort h, ushort posX, ushort posY, string currPath = "");

int main()
{
    char maze[HEIGHT][WIDTH] = {{'X','X','X','X','X','X','X','X','X'},
                                {'X','S','*','*','*','X','*','*','X'},
                                {'X','X','X','X','*','X','*','X','X'},
                                {'X','X','*','*','*','*','*','X','X'},
                                {'X','*','*','X','X','X','X','E','X'},
                                {'X','X','*','*','*','*','*','*','X'},
                                {'X','X','X','X','X','X','X','X','X'},
                                };

    string result = findPath(maze, 9, 7, 1, 1);

    //

    if(result == ""){
        cout<<"There is no path to the end point or endpoint doesn't exist!"<<endl;
    }
    else{
        cout<<result<<endl;
    }

}

string findPath(char maze[HEIGHT][WIDTH], ushort w, ushort h, ushort posX, ushort posY, string currPath){

    if(posX<0||posX>=w||posY<0||posY>=h){
        return "";
    }

    if(!(maze[posX][posY] == '*'||maze[posX][posY]=='E'||maze[posX][posY]=='S')){
        return "";
    }

    if(maze[posX][posY] == 'E'){
        return currPath;
    }

    maze[posX][posY] = '/';

    string resR = findPath(maze, w, h, posX+1, posY, currPath+"R");
    if(resR!=""){
        cout<<"R";
        return resR;
    }

    string resD  =findPath(maze, w, h, posX, posY+1, currPath+"D");
    if(resD!=""){
        cout<<"D";
        return resD;
    }

    string resL = findPath(maze, w, h, posX-1, posY, currPath+"L");

    if(resL!=""){
            cout<<"L";
        return resL;
    }

    string resU = findPath(maze, w, h, posX, posY-1, currPath+"U");
    if(resU!=""){
            cout<<"U";
        return resU;
    }

     maze[posX][posY] = '*';

    return "";
}
