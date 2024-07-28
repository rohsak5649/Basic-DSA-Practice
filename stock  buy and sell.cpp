#include <iostream>
using namespace std ;
int maxProfit(int*prices, int size ){
    int maxProfit = 0 ;
    int minSofar = prices[0];
    for(int i =  0 ; i <size ; i++){
        if(prices[i]< minSofar ){
            minSofar = prices[i];
        }
        int profit = prices[i] - minSofar;
        if(profit > maxProfit ){
            maxProfit = profit;
        }
    
    }
    return maxProfit;
}
int main(){
    int prices[] = { 3,1,4,8,7,2,5};
    int size = sizeof(prices)/sizeof(prices[0]);
    cout<<"maxProfit "<<maxProfit(prices, size);
}