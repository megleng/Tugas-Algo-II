#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void identitas(){
cout<<"\t\t||============================||\n";
cout<<"\t\t||                            ||\n";
cout<<"\t\t|| Nama  : Wahid Andrianto    ||\n";
cout<<"\t\t|| NIM   : 5180711024         ||\n";
cout<<"\t\t|| Prodi : S1 Teknik Elektro  ||\n";
cout<<"\t\t||                            ||\n";
cout<<"\t\t||============================||\n\n\n";
}

int input(string text){
int angka;
cout<<"Masukkan "<<text<<":  ";cin>>angka;
return angka;

}

float pangkatan( int x ,int y){

float hasil, pangkat=1;
int i,a;

if (x>0 && y>0){
for (i=1;i<=y;i++)
pangkat*=x;
return pangkat;
}

else if (x>0 && y<0){
a=y-y-y;
for (i=1;i<=a;i++){
pangkat*=x;
}
hasil=1/pangkat;
return hasil;
}

else {
a=y-y-y;
for (i=1;i<=a;i++){
pangkat*=x;
}
hasil=1/pangkat;
return -hasil;
}

}

main(int argc, char** argv){
    int angka,pangkat;
    identitas();
angka  =input("Angka   ");
pangkat=input("Pangkat ");
cout<<"Hasil Dari "<<angka<<"^"<<pangkat<<"   :  "<<pangkatan(angka,pangkat);
cout<<"\n\n";



}
