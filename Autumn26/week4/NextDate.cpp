#include <iostream>

bool leap_year(int year){
    bool ly;
   
    if((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0)){
        ly=true;
    } 
    else{
        ly=false;
    }
    

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if(d1 == 31 || ((d1 == 30 ) && (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)) || (d1 == 28 && leap_year(y1) == false && m1 == 2) || (d1 == 29 && m1 == 2)){
        d2 = 1;
        if(m1 == 12){
            m2 = 1;
            y2 = y1+1;
        }
        else{
            m2 = m1+1;
            y2 = y1;
        }
    }
    else{
        d2=d1+1;
        m2=m1;
        y2=y1;
    }

}

int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cout << "Enter date in form: DD MM YYYY: " << std::endl;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "Next date is: " << d2 << "/" << m2 << "/" << y2 << std::endl;
}