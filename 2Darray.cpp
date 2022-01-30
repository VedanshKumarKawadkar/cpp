#include<iostream>
#include <algorithm>
using namespace std;

int matrix(){
    int n,m;
    cin>>n>>m;
    int matrix[n][m];

    //Matrix Input:

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }

    //Matrix Output
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //Searcing in matrix

}


//Spiral order traverl of matrix
int main(){
    int n, m;
    cin>>n>>m;

    int a[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }

    int rowstart = 0, rowend=n-1, columnstart=0, columnend=m-1;

    while(rowstart<=rowend && columnstart<=columnend){
        
        for(int col=columnstart; col<=columnend; col++){
            cout<<a[rowstart][col]<<"->";
        }
        rowstart++;

        for(int row=rowstart; row<=rowend; row++){
            cout<<a[row][columnend]<<"v";
        }
        columnend--;

        for(int col=columnend; col>=columnstart; col--){
            cout<<a[rowend][col]<<"<-";
        }
        rowend--;

        for(int row=rowend; row>=rowstart; row--){
            cout<<a[row][columnstart]<<"^";
        }
        columnstart++;

    }

    return 0;
}


int CWspiralTravesal(int matrix[][], int n, int m){
    int rowstart=0, rowend=n-1, columnstart=0, columnend=m-1;

    while(rowstart<=rowend && columnstart<=columnend){
        for(int col=columnstart; col<=columnend; col++){
            cout<<matrix[rowstart][col]<<" ";
        }
        rowstart++;

        for(int row=rowstart; row<=rowend; row++){
            cout<<matrix[row][columnend]<<" ";
        }
        columnend--;

        for(int col=columnend; col>=columnstart; col--){
            cout<<matrix[rowend][col]<<" ";
        }
        rowend--;

        for(int row=rowend; row>=rowstart; row--){
            cout<<matrix[row][columnstart]<<" ";
        }
        columnstart++;
    }
}


int CCWspiraltravesal(int matrix[][], int n, int m){
    int rowstart=n-1, rowend=0, columnstart=0, columnend=m-1;
    while (rowstart>=rowend && columnstart<=columnend)
    {
        for(int col=columnend; col>=columnstart; col--){
            cout<<matrix[rowstart][col]<<" ";
        }
        rowstart++;

        for(int row=rowstart; row<=rowend; row++){
            cout<<matrix[row][columnstart]<<" ";
        }
        columnend++;

        for(int col=columnstart; col<=columnend; col++){
            cout<<matrix[rowend][col]<<" ";
        }
        rowend--;

        for(int row=rowend; row>=rowstart; row--){
            cout<<matrix[row][columnend]<<" ";
        }
        columnend--;
    }
    
}

