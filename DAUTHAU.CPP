#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int n = 0;
int tien_nhap_vao = 0;
int tien_max = 0;
string ten_nhap_vao = "";
string ten_max ="";
int main(){
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("DAUTHAU.INP.txt", ios_base::in);
    fileOut.open("DAUTHAU.OUT.txt", ios_base::out);
    fileIn >> n;

for (int i =0; i<n; i++){
    fileIn >> ten_nhap_vao;
    fileIn >> tien_nhap_vao;

if (tien_nhap_vao > tien_max){
    tien_max = tien_nhap_vao;
    ten_max = ten_nhap_vao;
}
}




















fileOut << ten_max;
cout << ten_max <<endl;
fileIn.close();
fileOut.close();
system("pause");
return 0;
}