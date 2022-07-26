#include <iostream>
#include "../lib/Data.hpp"

int main(){

    Data test;
    test.readFiles("../samples/Numeric.tx");
    test.showData();
    std::cout << std::endl;

    float P {0.20};
    int C {3};
    
    test.analysisFiles(P, C);

    //Data mixed;
    //Data mixedE;
    //Data categoric;
    //Data categoricE;
    //Data numeric;
    //Data numericE;

    //mixed.readFiles("../samples/Mixed.txt");
    //mixedE.readFiles("../samples/Mixed_-_Error_L7C25.txt");
    //categoric.readFiles("../samples/Categoric.txt");
    //categoricE.readFiles("../samples/Categoric_-_Error_L46C10.txt");
    //numeric.readFiles("../samples/Numeric.txt");
    //numericE.readFiles("../samples/Numeric_-_Error_L35C14.txt");

    //mixed.showData();
    //mixedE.showData();
    //categoric.showData();
    //categoricE.showData();
    //numeric.showData();
    //numericE.showData();

    //categoric.analysisFiles(0.35, 5);
    
    return 0;
}