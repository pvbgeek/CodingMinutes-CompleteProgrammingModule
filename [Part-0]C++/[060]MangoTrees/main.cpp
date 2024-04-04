#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int r=6;
const int c=6;

int getsum(int mat[r][c] , int x1 , int y1, int x2 , int y2)
{
    int sum = mat[x2][y2];
    if(x1>0)
    {
        sum -= mat[x1-1][y2];
    }
    if(y1>0)
    {
        sum -= mat[x2][y1-1];
    }
    if(x1>0 && y1>0)
    {
        sum += mat[x1-1][y1-1];
    }

    return sum;
}

int main()
{
    int a[r][c] = {{0,1,1,0,0,0},{1,0,0,1,1,0},{0,1,0,0,0,0},{0,1,1,0,0,1},{1,0,0,1,1,0},{0,1,0,0,0,0}};
    int mat[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            mat[i][j] = a[i][j];

            if(i>0)
            {
                mat[i][j] += mat[i-1][j];
            }
            if(j>0)
            {
                mat[i][j] += mat[i][j-1];
            }
            if(i>0 && j>0)
            {
                mat[i][j] -= mat[i-1][j-1];
            }
        }
    }

    int maxmangoes = 0;
    int pi=0;
    int pj=0;

    for(int i=0; i<r-1; i++)
    {
        for(int j=0; j<c-1; j++)
        {
            int topleft = getsum(mat , 0 , 0 , i , j);
            int topright = getsum(mat , 0 , j+1 , i , c-1);
            int bottomleft = getsum(mat , i+1 , 0 , r-1 , j);
            int bottomright = getsum(mat , i+1 , j+1 , r-1 , c-1);

            int currmin = min({topleft , topright , bottomleft , bottomright});

            if(currmin > maxmangoes)
            {
                maxmangoes = currmin;
                pi = i;
                pj = j;
            }
        }
    }

    cout<<"Maximum Mangoes after Division are : "<<maxmangoes<<endl;
    cout<<"Partition to be done at : "<<pi<<" "<<pj<<endl;

    return 0;
}
