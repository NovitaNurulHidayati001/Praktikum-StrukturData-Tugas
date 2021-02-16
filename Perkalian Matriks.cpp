#include <iostream>
#include <conio.h>

using namespace std; 
void baca_matriks(int mat[10][10], int baris, int kolom)
{
     int i,j;
     for(i=0;i<baris;i++)
     for(j=0;j<kolom;j++)
     {
     cout<<"Data["<<i+1<<","<<j+1<<"]:";
     cin>>mat[i][j];
     }
}
      
     void kali_matriks(const int matriks1[10][10],
     const int matriks2[10][10], int baris, int kolom, int barkol,int mat_kali[10][10])
      
{
	int i,j,k;
     for(i=0;i<baris;i++)
     for(j=0;j<kolom;j++)
	 {
	 	mat_kali[i][j]=0;
		 for(k=0;k<barkol;k++)
		 mat_kali[i][j]=mat_kali[i][j]+matriks1[i][k]*matriks2[k][j];
	}
}
      
void cetak_matriks(const int A[10][10], int baris, int kolom)
{
	int i,j;
     for(i=0;i<baris;i++)
	 {
	 	for(j=0;j<kolom;j++)
		 cout<<A[i][j]<<" ";
		 cout<<endl;
     }
}
      
int main()
{
	int m,n,p;
	int matriks1[10][10],matriks2[10][10];
	int hasil[10][10];
	cout<<"Baris matriks ke-1 : ";
	cin>>m;
	cout<<"Banyak kolom : ";
	cin>>p;
	cout<<"Baris matriks ke-2 : ";
	cin>>n;
 
    cout<<"Data matriks ke-1 : \n";
    baca_matriks(matriks1,m,p);
    cetak_matriks(matriks1,m,p);
 
    cout<<"Data matriks ke-2 : \n";
    baca_matriks(matriks2,p,n);
    cetak_matriks(matriks2,p,n);
 
    kali_matriks(matriks1,matriks2,m,n,p,hasil);
    cout<<"Hasil perkalian : \n";
    cetak_matriks(hasil,m,n);
           
    getch();
    return 0;
}
