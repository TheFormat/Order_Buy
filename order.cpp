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

int getCostOfVeg(string veg) {
    if(veg == "simple") {
        return 0;
    }
    else if(veg == "no_veg") {
        return -1000;
    }
    else {
        return 500;
    }
    
    return 0;
}

int getCostOfBev(string bev) {
    if(bev == "no_bev") {
        return -1000;
    }
    else {
        return 0;
    }

    return 0;
} // size up은 아직 못했다..

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
    }
    else if(rm_cheese == "no") {
        main_cost += 0;
    }

    cout << "Choose vegetable you want. Just say simple if you want only main veg, Cabbage Onion and Tomato. If you don't want any of these, say no_veg" << endl;
    cin >> veg;
    veg_basic_cost += getCostOfVeg(veg);

    cout << "Tell any spread you like. Just tell any spread. It's Free!!" << endl;
    cin >> spread;

    cout << "Lastly, choose your beverage. It costs 1000, +500 if you want to size up. Say no_bev if you don't want it." << endl;
    cin >> bev;
    bev_cost += getCostOfBev(bev);


    int total_cost = bread_cost + main_cost + veg_basic_cost + bev_cost;
    cout << "Your sandwich would cost " << total_cost << "." << endl;
    cin >> money_you_pay;
    cout << "You just paid " << money_you_pay << "!"<< endl;
    cout << "Your change would be " << money_you_pay - total_cost << "." << endl;
    cout << "Here's your " << bread << " " << mains << " sandwich" << " with " << bev << "!!" << endl;
    cout << "Enjoy your Sandwich!";
    
    return 0;
}
