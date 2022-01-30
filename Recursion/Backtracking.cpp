#include<iostream>
#include<math.h>
#include<climits>
#include<algorithm>
using namespace std;
/*
bool safe(int** arr, int n, int x, int y){
    for(int row=0; row<x; row++){
        if(arr[row][y]==1){
            return false;
        }
    }

    int row=x;
    int col=y;

    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }

    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}


bool nQueen(int** arr, int n, int x){
    if(x>=n){
        return true;
    }

    for(int col=0; col<n; col++){
        if(safe(arr, n, x, col)){
            arr[x][col] = 1;
            if(nQueen(arr, n, x+1)){
                return true;
            }
            arr[x][col] = 0;
        }
    
    }

    return false;
}

int main(){
    int n;
    n=8;
    int** arr = new int *[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }

    if(nQueen(arr, n, 0)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
    
}*/

/*
using namespace std;

bool safe(int** arr, int n, int x, int y){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int n, int x, int y, int** sol){
    if(x==n-1 && y==n-1){
        sol[x][y]=1;
        return true;
    }
    
    if(safe(arr, n, x, y)){
        sol[x][y] = 1;
        if(ratInMaze(arr, n, x+1, y, sol)){
            return true;
        }
        if(ratInMaze(arr, n, x, y+1, sol)){
            return true;
        }
        sol[x][y] = 0;
        return false;
    }
    return false;
}*/

/*
int main(){
    int n;
    cin>>n;
    
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[n];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    int** sol = new int*[n];
    for(int i=0; i<n; i++){
        sol[i] = new int[n];
        for(int j=0; j<n; j++){
            sol[i][j]=0;
        }
    }
    
    if(ratInMaze(arr, n, 0, 0, sol)){
        for(int i=0; i<n; i+=1){
            for(int j=0; j<n; j+=1){
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
    
}*/

/*
using namespace std;

bool safe(int** arr, int n, int x, int y){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool nQueen(int** arr, int n, int x){
    if(x){
        return true;
    }
}*/

//N Queens

bool safe(int **arr, int n, int x, int y){
    if(x<n && y<n && arr[x][y]==1){
        return false;
    }
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }

    row=x;
    col=y;

    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueens(int **arr, int n, int x){
    if(x<=n){
        return true;
    }
    for(int col=0; col<n; col++){
        if(safe(arr, n, x, col)){
            arr[x][col]=1;
            if (nQueens(arr, n, x))
            {
                return true;
            }
            arr[x][col]=0;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int **arr = new int*[n];
    for(int i=0; i<n; i+=1){
        arr[i] = new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=0;
        }
    }

    
}