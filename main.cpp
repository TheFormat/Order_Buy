#include <iostream>

using namespace std;

//메뉴판 다 띄울 예정. main에는 직원 설명하는 것처럼

int money = 20000;
int bread_cost = 1000; // 빵종류에 따라 +
int meat_cost = 1500; // 고기종류에 따라 +
int veg_simp_cost = 1500; // simple은 기본, add는 +
int bev_cost = 1000; // 음료는 사이즈크면 +
int money_you_pay = 0;

string bread;
string meat;
string veg;
string bev;
int main() {
    cout << "Welcome! Choose your bread";
    cin >> bread;
    if(bread == "oat") {
        bread_cost +=300;
    };
    
    int total_cost = bread_cost + meat_cost + veg_simp_cost + bev_cost;
    cout << "Your sandwich would cost " << total_cost << "." << endl;
    cin >> money_you_pay;
    cout << "You just paid " << money_you_pay << "!"<< endl;
    cout << "Your change would be " << money_you_pay - total_cost << "." << endl;
    cout << "Here's your " << bread << " sandwich!" << endl;
    cout << "Enjoy your Sandwich!";
return 0;

}
