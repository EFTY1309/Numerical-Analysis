#include<bits/stdc++.h>
#define N 10
using namespace std;


int main(void)
{
  int row,col;
  cout<<"Enter the row of the matrix:";
  cin>>row;

  cout<<"Enter column of the matrix:";
  cin>>col;

  int a[N][N]={};

  for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
  {
      cin>>a[i][j];
  }

  double c[N]={};
  c[row]=1;
  double M[N][N]={};
  int i=0,j=0;
  while(1)
     {
       M[i][j]=1;
       i++;
       j++;

       if(i==row) break;
     }
     int m=0,n=row-1;
     for(int k=0;k<row;k++)
     {


     }


}


