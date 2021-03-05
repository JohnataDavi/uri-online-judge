#include <iostream>
#include <math.h>
int main (){

    int D,VF,VG;
    while(std::cin>>D>>VF>>VG)
        ( (double)( (double)sqrt((D*D)+ 144)/VG) <= (double)(12.0/VF) ) ? std::cout << "S\n" : std::cout << "N\n";

    return 0;
}


