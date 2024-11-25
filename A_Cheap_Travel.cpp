#include <bits/stdc++.h>
using namespace std;
int main(){
    int count, price, numberOfRides,spetialTickets,numberOfRidesPrice, spetialTicketPrice;
    cin>>numberOfRides>>spetialTickets>>numberOfRidesPrice>>spetialTicketPrice;
    int prev = numberOfRides;
    while(numberOfRides>0){
        if(numberOfRides==1&& prev==numberOfRides&&numberOfRidesPrice==1){
            
            price=1;
            break;
        }
        else if(spetialTickets==spetialTicketPrice){
            price=numberOfRides;
            break;
        }else if(spetialTickets>=numberOfRides&&numberOfRidesPrice<spetialTicketPrice&&prev==numberOfRides){
            price+=spetialTicketPrice;
            break;
        }else if(numberOfRidesPrice*2>=spetialTicketPrice&&spetialTickets>1&&numberOfRides>=spetialTickets){
            numberOfRides-=spetialTickets;
            price+=spetialTicketPrice;
        }else{
            if(numberOfRidesPrice>spetialTicketPrice&&numberOfRides<spetialTickets){
                numberOfRides-=spetialTickets;
                price+=spetialTicketPrice;
                continue;
            }
            numberOfRides-=1;
            price+=numberOfRidesPrice;
            
        }
    }
    cout<<price;
}

    


