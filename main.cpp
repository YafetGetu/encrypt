#include <iostream>
#include<fstream>
using namespace std;
int key=34;
void encrypt( )
{
    char ch;
    ifstream fin("E:\\c++\\enc and dec\\orig.txt");
    ofstream fout("E:\\c++\\enc and dec\\enc.txt");
    while(!fin.eof()){
        fin.get(ch);
        ch=ch+key;
        fout.put(ch);

    }
    fin.close();
    fout.close();
}
int main(){
    encrypt();

    return 0;
}