#include<iostream>
#include<algorithm>

using namespace std;

int getBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}


//set bit means making a bit 1
int setBit(int n, int pos){
    return (n|(1<<pos));
}

//clear bit means flipping bits
int clearBit(int n, int pos){
    int mask= ~(1<<pos);
    return (mask&n);
}

//Update bit means updating a bit 0 to 1 or 1 to 0
int updateBit(int n, int pos){
    int mask = ~(1<<pos);
    int temp = mask&n;
    return (temp | (1<<pos));

}

int main(){
    cout<<getBit(7, 3)<<endl;
    cout<<setBit(7, 3)<<endl;
    cout<<clearBit(7, 3)<<endl;
    cout<<updateBit(7, 3)<<endl;

    return 0;
}