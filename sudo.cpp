#include <iostream>
#include<stdlib.h>

using namespace std;
int index[9][9]={(0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0),
                 (0,0,0,0,0,0,0,0,0)};
int arr[3][3] = {(0,0,0),
                 (0,0,0),
                 (0,0,0)};
int checkrc(int n,int i,int j)
{
    int cr=0,cc=0;
    if(index[i][n-1]==1)
        cr=1;
    else if(index[n-1][j]==1)
        cc=1;

    if(cr==1||cc==1)
        return 0;
    else
        return 1;

}

int checka(int n)
{
    int flag=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
                flag=1;
        }

    if(flag==1)
        return 0;
    else
        return 1;


}

void assign()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            arr[i][j]=0;

}
int main()
{
cout<<"hello world";
int i,j,t,sudoku[9][9];
int ri=0,ci=0,row=3,col=3;
int trc,ta,gen,ia,ja,countc=0;

for(i=ri;i<row;i++)
    for(j=ci;j<col;j++)
    {
        trc=ta=0;
	cout<<"iii";
        while(trc==0||ta==0)
        {
            gen = rand()%9+1;
            trc=checkrc(gen,i,j);
            ta = checka(gen);
            if(trc==1&&ta==1){
                sudoku[i][j]=gen;
                index[gen-1][j]=1;
                index[i][gen-1]=1;
                for(ia=0;ia<3;ia++)
                    for(ja=0;ja<3;ja++){
                        arr[i][j]=gen;

                        if(ia==2&&ja==2){
                            ci=ci+3;
                            col=col+3;
                            countc++;
                            assign();
                        }
                        else if(countc==3)
                        {
                            ci=0;
                            col=3;
                            ri=ri+3;
                            row=row+3;

                        }

                    }
            }

    }

    }

for(i=0;i<9;i++)
    for(j=0;j<9;j++)
    {
        cout<<sudoku[i][j]<<" ";
        if(j==8)
        cout<<"\n";

    }
return 0;



}
