//TOPILMADI!!!
//TOPILMADI!!!
//TOPILMADI!!!
#include <iostream>
using namespace std;

string kun(int k) {
    int kuni = (k + 1) % 7;
    
    switch (kuni) {
        case 0:
            return "Yakshanba";
        case 1:
            return "Dushanba";
        case 2:
            return "Seshanba";
        case 3:
            return "Chorshanba";
        case 4:
            return "Payshanba";
        case 5:
            return "Juma";
        case 6:
            return "Shanba";
        default:
            return "Xato";
    }
}

int main() {
    int k = 1;
    cout <<k<< " - yanvar payshanba va "<<kun(k)<< " boladi";
    
    return 0;
}
//TOPILMADI!!!
//TOPILMADI!!!
//TOPILMADI!!!


