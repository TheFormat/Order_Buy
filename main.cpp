#include <iostream>

using namespace std;

//메뉴판 다 띄울 예정. main에는 직원 설명하는 것처럼

int money = 20000;
int bread_cost = 1000; // 빵종류에 따라 +
int main_cost = 1500; // 메인종류에 따라 +
int veg_simp_cost = 1500; // simple은 기본, add는 +
int bev_cost = 1000; // 음료는 사이즈크면 +
int money_you_pay = 0;

string bread;
string mains;
string rm_cheese;
string veg;
string spread;
string bev;

int main() {
    cout << "Welcome! Choose your bread" << endl;
    cin >> bread;
    if(bread == "toast") {
        bread_cost += 0;
    }
    if(bread == "oat") {
        bread_cost +=300;
    };
    if(bread == "triple_toast") {
        bread_cost += 500;
    };
    if(bread == "panini") {
        bread_cost += 300;
    };
    if(bread == "roll") {
        bread_cost += 200;
    }; // enum switch로 할려 했는데 어케할지 모르겠넹..

    cout << "Next, choose your fillings. What main filling do you want?" << endl;
    cin >> mains;
    if(mains == "egg") {
        main_cost += 0;
    };
    if(mains == "sausage") {
        main_cost += 0;
    };
    if(mains == "greeneggs_and_ham") {
        main_cost += 300;
    };
    if(mains == "grilled_pork") {
        main_cost += 300;
    };
    if(mains == "roasted_beef") {
        main_cost += 500;
    };
    if(mains == "bestie") {
        main_cost += 1000;
    };

    cout << "Good. We offer grilled cheese for base. Would you like to take cheese out of your sandwich?" << endl;
    cin >> rm_cheese;
    if(rm_cheese == "yes") {
        main_cost -= 100;
    };

    int total_cost = bread_cost + main_cost + veg_simp_cost + bev_cost;
    cout << "Your sandwich would cost " << total_cost << "." << endl;
    cin >> money_you_pay;
    cout << "You just paid " << money_you_pay << "!"<< endl;
    cout << "Your change would be " << money_you_pay - total_cost << "." << endl;
    cout << "Here's your " << bread << " " << mains << " sandwich!" << endl;
    cout << "Enjoy your Sandwich!";
    
return 0;

}
