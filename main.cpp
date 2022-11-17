#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

// Pobieranie rozmiarów tablicy podanych przez użytkownika
    const int SizeX=10,SizeY=10;
// Tworzeie tabeli
    int tab[SizeY][SizeX];
    int MinX=0,MaxX=SizeX-1,MinY=0,MaxY=SizeY-1;
// Deklaracja zmiennej "żyjącej" tylko na czas nieskończonej pętli
    for(int V=0;;)
    {
// Algorytm wpisywania liczb w tablicę
        for(int x=MinX;x<=MaxX;++x) tab[MinY][x]=++V;
        if((0>MaxX)||(++MinY>MaxY)) break;
        for(int y=MinY;y<=MaxY;++y) tab[y][MaxX]=++V;
        if((0>--MaxX)||(MinY>MaxY)) break;
        for(int x=MaxX;x>=MinX;--x) tab[MaxY][x]=++V;
        if((0>MaxX)||(MinY>--MaxY)) break;
        for(int y=MaxY;y>=MinY;--y) tab[y][MinX]=++V;
        if((++MinX>MaxX)||(MinY>MaxY)) break;
    }
    for(int y=0;y<SizeY;++y,cout<<endl) for(int x=0;x<SizeX;++x) cout<<setw(4)<<tab[y][x];

    cout << "\n" << endl;

    {
// Pobiera podane rozmiary
        for(int i=1;i<=SizeX*SizeY;i++){
// Wypisuje wartości tabeli od 1
            std::cout<<i<<" ";
        }
    }


    return 0;
}
