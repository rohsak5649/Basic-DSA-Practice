#include <iostream>
using namespace std ;
int main(){

    int aar1[5] = {1,2,3,4,5};
    int aar2[5] = {6,7,8,9,10};
    int resultArr[5];

    for (int i = 0 ; i < 5 ; i++){
        resultArr[i] = aar1[i] + aar2[i];
    }
    cout<<"the addition of Two Array : ";

    for (int i = 0 ; i < 5 ; i++){
        cout<<resultArr[i]<<" ";
    }
    cout<<endl;
    return 0 ;


}