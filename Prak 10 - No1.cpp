//R. Yudo Arya Kusuma//
//   20051297013   //
//D4MI // 2020A //

#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
for (int i=0;i<20;i++)
 {
 cout<<A[i]<<" ";
 }
}
cout<<"\n Data yang ingin dicari : ";
cin>>c;
i=0;
posisi=0;
while(i<19 && A[i]!=c){
 i++;
}
if (A[i]!=c){
 cout<<"Maaf data yang dicari tidak ada";
}else if(posisi=i+1)
   cout<<"ditemukan pada posisi ke "<<posisi;
getch();
}
