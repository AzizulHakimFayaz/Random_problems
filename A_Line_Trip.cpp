#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void soolution(){
    int numberOfFuelStation,endStop,biggestDifference = 0;
    cin>>numberOfFuelStation>>endStop;
    vector<int>fuelStation(numberOfFuelStation+2);
    fuelStation[0]=0;
    fuelStation[numberOfFuelStation+1]=endStop;
    for(int i = 1;i<=numberOfFuelStation;i++){
        cin>>fuelStation[i];
    }
        int lastDifference = abs(fuelStation[numberOfFuelStation+1] - fuelStation[numberOfFuelStation]);
        for(int i = 0;i<numberOfFuelStation+1;i++){
        biggestDifference = max(biggestDifference,(fuelStation[i+1]-fuelStation[i]));
        }
        while(biggestDifference < lastDifference * 2){
            biggestDifference+=1;
        }

        cout<<biggestDifference<<endl;

    
    
    
}

int main(){

    int number_of_iteration;
    cin>>number_of_iteration;
    for(int i = 0 ; i<number_of_iteration; i++){
        soolution();
    }
}