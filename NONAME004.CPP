#include <iostream.h>
#include <conio.h>

main()
{
	int a,b,mod;
	float hasil;
   cout<<"Contoh penggunaan / dan %\n\n";
   cout<<"Masukan angka pertama (a) = ";cin>>a;
   cout<<"Masukan angka pertama (b) = ";cin>>b;
   hasil=float(a)/b;
   mod=a%b;
   cout<<"\nHasil pembagian         ="<<hasil;
   cout<<"\nSisa hasil bagi        ="<<mod;
   getch();
   }



