#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

main()
{
	int a,b,mod;
   float bagi;
   cout<<"\n\tContoh penggunaan / an %\n\n";
   cout<<"\n\tMasukan angka pertama  (a)  =   ";cin>>a;
   cout<<"\n\tMasukan angka pertama  (b)  =  ";cin>>b;
   bagi=float(a)/b;
   mod=a%b;
   cout<<"\n\tHasil pembagian  ="<<setiosflags(ios::fixed)
   										<<setprecision(3) <<bagi;
	cout<<"\n\tSisa hasil bagi  ="<<mod;
   getch();
   }


