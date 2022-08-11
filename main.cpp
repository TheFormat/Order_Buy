#include <iostream>
#include <fstream>


using namespace std;

//메뉴판 다 띄울 예정. main에는 직원 설명하는 것처럼

int money = 20000;
int bread_cost = 1000; // 빵종류에 따라 +
int main_cost = 1500; // 메인종류에 따라 +
int veg_basic_cost = 1000; // simple은 기본, add는 +
int bev_cost = 1000; // 음료는 사이즈크면 +
int money_you_pay = 0;

int getCostOfBread(string bread) {
    if(bread == "toast") {
        return 0;
    }
    else if(bread == "oat") {
        return 300;
    }
    else if(bread == "triple_toast") {
        return 500;
    }
    else if(bread == "panini") {
        return 300;
    }
    else if(bread == "roll") {
        return 200;
    } 

    return 0;
}

int getCostOfMains(string mains) {
    if(mains == "egg") {
        return 0;
    }
    else if(mains == "sausage") {
        return 0;
    }
    else if(mains == "greeneggs_and_ham") {
        return 300;
    }
    else if(mains == "grilled_pork") {
        return 300;
    }
    else if(mains == "roasted_beef") {
        return 500;
    }
    else if(mains == "bestie") {
        return 1000;
    }
    
    return 0;
}


string bread;
string mains;
string rm_cheese;
string veg;
string spread;
string bev;

int main() {
    ifstream ifs;
    ifs.open("menu.txt");
    char c;
    while(ifs.get(c)) {
        cout << c;
    }
    ifs.close();
    cout << endl;
    
    
    cout << "Welcome! Choose your bread" << endl;
    cin >> bread;
    bread_cost += getCostOfBread(bread);

    cout << "Next, choose your fillings. What main filling do you want?" << endl;
    cin >> mains;
    main_cost += getCostOfMains(mains);

    cout << "Good. We offer grilled cheese for base. Would you like to take cheese out of your sandwich?" << endl;
    cin >> rm_cheese;
    if(rm_cheese == "yes") {
        main_cost -= 100;
    };

    int total_cost = bread_cost + main_cost + veg_basic_cost + bev_cost;
    cout << "Your sandwich would cost " << total_cost << "." << endl;
    cin >> money_you_pay;
    cout << "You just paid " << money_you_pay << "!"<< endl;
    cout << "Your change would be " << money_you_pay - total_cost << "." << endl;
    cout << "Here's your " << bread << " " << mains << " sandwich!" << endl;
    cout << "Enjoy your Sandwich!";
    
    return 0;
}
