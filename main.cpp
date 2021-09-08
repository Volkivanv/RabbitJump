#include <iostream>
int ways(int n, int maxJump = 3){
    if((n < 0)||(maxJump <= 0)) {
        std::cout << "Incorrect Input" << std::endl;
        return 0;
    }
    if (maxJump > n) maxJump = n;
    if(n == 0) return 0;
    if(n == 1) return 1;

    int waysNumber = 0;
    for(int j = 1; j <= maxJump;j++){
       waysNumber+=ways(n-j, maxJump);

    //   std::cout<< j << " " <<n<<" "<<maxJump<<" " << waysNumber<<std::endl;
    }

    if (n == maxJump ) waysNumber++;
   // std::cout<<n<<" "<<maxJump<<" " << waysNumber<<std::endl;
    return waysNumber;
    //return 0;

}
int main() {
    int numStages, maxJump;

    std::cout << "Input stages count and maximum jump!" << std::endl;
    std::cin >> numStages >> maxJump;
    std::cout << ways(numStages,maxJump);
    return 0;
}
