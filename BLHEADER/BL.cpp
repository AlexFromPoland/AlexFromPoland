#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include <windows.h>
using namespace std;
string find_ASCIIcode(char x)
{
    //do pliku ascii dodane są znaki bitowo 
    fstream plik;
    string line_buffer,line_store,temp;
    int iter=0;
    char znak =toupper(x);
    plik.open("BLHEADER/ASCII.txt",ios::in);
    while (!plik.eof())
    {
        getline(plik,line_buffer);
        if(line_buffer[0]==znak)
        {
            line_store=line_buffer;
        }
    }
    plik.close();
for(int i=2; i<line_store.length(); i++)
    {
       temp+=line_store[i];
    }
    line_store=temp;
    return line_store;
}

void print_Big_char(string word,unsigned char null_ch,unsigned char find_ch,int length_of_line,int color)
{
    //może być jaki kolwiek podany stringiem ważne by, było podane za pomocą 0 i 1 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
    for(int i=0; i<word.length(); i++)
    {
        if((i%length_of_line==0)&&(i!=0))cout<<"\n";
        if(word[i]==(int)'1')
        {
        cout<<find_ch;
        }
        else
        {
        cout<<null_ch;
        }
    }
    cout<<"\n";
    SetConsoleTextAttribute(hConsole,7);
}

void Big_Word(string given,unsigned char null_ch,unsigned char fill_ch,int color)
{
    //progrma jest przystosowany pod macierz 5x7 startowo,lecz można to zmienic
    string word=given,temp[word.length()],temp2[7];
    string sklej_temp2,sklej_temp;
    for(int i=0;i<word.length();i++)
    {
        temp[i]=find_ASCIIcode(word[i]);
        sklej_temp+=temp[i];
    }
    int iter=0,tab_iter=0;          
for(int k=0; k<7;k++)
{
    for(int z=0; z<word.length();z++)
    {
        for(int l=0+iter; l<5+iter; l++)
        {
        temp2[k]+=temp[z][l];       
        }
    
    }
    sklej_temp2+=temp2[k];
    iter+=5;
}
print_Big_char(sklej_temp2,null_ch,fill_ch,5*word.length(),color);
}

// int main()
// {
//     Big_Word("a",' ','0',2);
// }