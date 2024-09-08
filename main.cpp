#include <iostream>
#include<fstream>
using namespace std;
int key=34; //you can change the value
void encrypt( )
{
    char ch;
    ifstream fin("E:\\c++\\enc and dec\\orig.txt"); //change based on your path(orginal)
    ofstream fout("E:\\c++\\enc and dec\\enc.txt"); //encrypted file path
    while(!fin.eof()){
        fin.get(ch);
        ch=ch+key;//you can change the opperator
        fout.put(ch);
    }
    fin.close();
    fout.close();
}
int main(){
    encrypt();

    return 0;
}