#include<iostream>
#include<string.h>
#include<vector>
#define coupon "saadman10"
using namespace std;

class tv{
    public:
vector<string>code;
vector<string>model;
vector<long long int>price;
};

class mobile : public tv{};

        int Mobile(){
            cout<<"\n\n\tWelcome to the mobile zone : ";
            cout<<"\n\t---------------------------------------- ";
            mobile redmi;
            mobile realme;
            redmi.model.push_back("Redmi note 12");
            redmi.model.push_back("Redmi note 13");
            redmi.model.push_back("Redmi 12 pro");
            redmi.model.push_back("Redmi note 11 pro max");
            redmi.model.push_back("Redmi note 12 pro max");
            redmi.model.push_back("Redmi cyber 13");
            redmi.model.push_back("Redmi note 14 neon black");
            redmi.model.push_back("Redmi note 15");
            redmi.model.push_back("Redmi note 15 pro");
            redmi.model.push_back("Redmi note 15 pro max");
            redmi.code.push_back("FDFDS");
            redmi.code.push_back("FSDS");
            redmi.code.push_back("VVZX");
            redmi.code.push_back("NHNH");
            redmi.code.push_back("OIUJ");
            redmi.code.push_back("TRFV");
            redmi.code.push_back("BHBG");
            redmi.code.push_back("BHMJ");
            redmi.code.push_back("QWED");
            redmi.code.push_back("NMJJ");
            redmi.price.push_back(34000);
            redmi.price.push_back(23000);
            redmi.price.push_back(38000);
            redmi.price.push_back(34500);
            redmi.price.push_back(40000);
            redmi.price.push_back(19000);
            redmi.price.push_back(22000);
            redmi.price.push_back(20000);
            redmi.price.push_back(28000);
            redmi.price.push_back(35000);
            //realme
            realme.model.push_back("Realme note 12");
            realme.model.push_back("Realme note 13");
            realme.model.push_back("Realme 12 pro");
            realme.model.push_back("Realme note 11 pro max");
            realme.model.push_back("Realme note 12 pro max");
            realme.model.push_back("Realme cyber 13");
            realme.model.push_back("Realme note 14 neon black");
            realme.model.push_back("Realme note 15");
            realme.model.push_back("Realme note 15 pro");
            realme.model.push_back("Realme note 15 pro max");
            realme.code.push_back("DDFD");
            realme.code.push_back("ASWQ");
            realme.code.push_back("VFRS");
            realme.code.push_back("GTNH");
            realme.code.push_back("ORSA");
            realme.code.push_back("MIVK");
            realme.code.push_back("BOLK");
            realme.code.push_back("PLOI");
            realme.code.push_back("MNUI");
            realme.code.push_back("YRFF");
            realme.price.push_back(43000);
            realme.price.push_back(32000);
            realme.price.push_back(12000);
            realme.price.push_back(34500);
            realme.price.push_back(28000);
            realme.price.push_back(39000);
            realme.price.push_back(32000);
            realme.price.push_back(24000);
            realme.price.push_back(31000);
            realme.price.push_back(35000);

cout<<"\n\n\tSelect your phone model : 1.Redmi\t2.Realme";
int model;
string couponcode;
cin>>model;
string code;
int count=0;
switch(model){
    case 1:
    int index;
int havecoupon;
long double discountprice;
long long int money;
    cout<<"\n\n\tYou have choosen Redmi mobile brand ";
    cout<<"\n\n\tHere is our Redmi products , Enter the code to select from below : ";
    for(index=0;index<redmi.model.size();index++){
        cout<<"\n\tMobile "<<redmi.model[index]<<" Code : "<<redmi.code[index]<<" price : "<<redmi.price[index];
    }
    cin>>code;
    for(index=0;index<redmi.code.size();index++){
if(code==redmi.code[index]){
cout<<"\n\n\tYou have selected "<<redmi.model[index]<<" Price : "<<redmi.price[index];
 cout<<"\n\n\tDo you have any coupon : 1.YES\t2.NO";
        cin>>havecoupon;
        if(havecoupon==1){
            cout<<"\n\n\tEnter the coupon code : ";
            cin>>couponcode;
            if(couponcode==coupon){
                cout<<"\n\n\tCongratulations you have 10 percent discount on the product ";
                discountprice == (realme.price[index])-(0.10*realme.price[index]);
                cout<<"\n\n\tPlease pay taka "<<discountprice<<" to purchase the product ";
                    cin>>money;
                    if(money==discountprice)
                    cout<<"\n\n\tcongratulations you have bought the product ";
                    else if(money>discountprice)
                    cout<<"\n\n\tYou have bought the product\n\tHere is your extra taka "<<(money-discountprice);
                    else if(discountprice>money)
                    cout<<"\n\n\tYou have to pay taka "<<(discountprice-money)<<" more to buy the product ";
            }
            else if(couponcode!=coupon){
                cout<<"\n\n\tInvalid coupon code try again";
                abort();
            }
            else{
                cout<<"\n\n\tError ";
                abort();
            }
        }
            else if(havecoupon==2){
                cout<<"\n\n\tPlease pay taka "<<realme.price[index]<<" to buy the product ";
                cin>>money;
                 if(money==realme.price[index])
                    cout<<"\n\n\tcongratulations you have bought the product ";
                    else if(money>realme.price[index])
                    cout<<"\n\n\tYou have bought the product\n\tHere is your extra taka "<<(money-realme.price[index]);
                    else if(realme.price[index]>money)
                    cout<<"\n\n\tYou have to pay taka "<<(realme.price[index]-money)<<" more to buy the product ";
            }
            else{
                cout<<"\n\n\tError ";
                abort();
            }
}
    }
    for(index=0;index<redmi.code.size();index++){
if(code!=redmi.code[index]){
count++;
}
    }
    if(count>10){
        cout<<"\n\nNo match found ";
        abort();
    }
break;
        case 2:
    cout<<"\n\n\tYou have choosen Realme mobile brand ";
    cout<<"\n\n\tHere is our Realme products Choose from below :  ";
    for(index=0;index<realme.model.size();index++){
        cout<<"\n\tMobile "<<realme.model[index]<<" Code : "<<realme.code[index]<<" price : "<<realme.price[index]<<" ";
    }
    cin>>code;
for(index=0;index<realme.model.size();index++){
    if(code==realme.code[index]){
 cout<<"\n\n\tDo you have any coupon : 1.YES\t2.NO ";
        cin>>havecoupon;
        if(havecoupon==1){
            cout<<"\n\n\tEnter the coupon code : ";
            cin>>couponcode;
            if(couponcode==coupon){
                cout<<"\n\n\tCongratulations you have 10 percent discount on the product ";
                discountprice = (realme.price[index])-(0.10)*(realme.price[index]);
                cout<<"\n\n\tPlease pay taka "<<discountprice<<" to purchase the product ";
                    cin>>money;
                    if(money==discountprice)
                    cout<<"\n\n\tcongratulations you have bought the product ";
                    else if(money>discountprice)
                    cout<<"\n\n\tYou have bought the product\n\tHere is your extra taka "<<(money-discountprice);
                    else if(discountprice>money)
                    cout<<"\n\n\tYou have to pay taka "<<(discountprice-money)<<" more to buy the product ";
            }
            else if(couponcode!=coupon){
                cout<<"\n\n\tInvalid coupon code try again";
                abort();
            }
            else{
                cout<<"\n\n\tError ";
                abort();
            }
        }
            else if(havecoupon==2){
                cout<<"\n\n\tPlease pay taka "<<realme.price[index]<<" to buy the product ";
                cin>>money;
                 if(money==realme.price[index])
                    cout<<"\n\n\tcongratulations you have bought the product ";
                    else if(money>realme.price[index])
                    cout<<"\n\n\tYou have bought the product\n\tHere is your extra taka "<<(money-realme.price[index]);
                    else if(realme.price[index]>money)
                    cout<<"\n\n\tYou have to pay taka "<<(realme.price[index]-money)<<" more to buy the product ";
            }
            else{
                cout<<"\n\n\tError ";
                abort();
            }
    }
    else if(code!=realme.code[index]){
        count++;
    }
}
//for(index=0;index<realme.model.size();index++){

if(count>10){
    cout<<"\n\n\tNo match found ";
    abort();
}
        break;
        
        default:
        cout<<"\n\n\tError ";
}

return 0;

        }

int main(){
    cout<<"\n\n\t------Welcome to our online store------";
cout<<"\n\n\tEnter your choice : ";
cout<<"\n\tWe offer 1.TV\t2.Mobile ";
int choice;
int index;
cin>>choice;
tv samsung;
tv sony;
samsung.model.push_back("samsung r15 42 inch");
samsung.model.push_back("samsung sd1 40 inch");
samsung.model.push_back("samsung vb32 72 inch");
samsung.model.push_back("samsung df1 80 inch");
samsung.model.push_back("samsung ddr 82 inch");
samsung.model.push_back("samsung s4 42 inch");
samsung.model.push_back("samsung cv1 38 inch");
samsung.model.push_back("samsung w5 32 inch");
samsung.model.push_back("samsung g5t 56 inch");
samsung.model.push_back("samsung fa5 62 inch");
samsung.price.push_back(78000);
samsung.price.push_back(67000);
samsung.price.push_back(65000);
samsung.price.push_back(88000);
samsung.price.push_back(40000);
samsung.price.push_back(55000);
samsung.price.push_back(58000);
samsung.price.push_back(71000);
samsung.price.push_back(75000);
samsung.price.push_back(81000);
samsung.code.push_back("QWETY");
samsung.code.push_back("ASDF");
samsung.code.push_back("ZXCV");
samsung.code.push_back("GHJK");
samsung.code.push_back("YUIO");
samsung.code.push_back("QAZX");
samsung.code.push_back("CVFE");
samsung.code.push_back("VBRD");
samsung.code.push_back("ASWQ");
samsung.code.push_back("BNMT");
///sony
sony.model.push_back("sony rw1 42 inch");
sony.model.push_back("sony fg3 40 inch");
sony.model.push_back("sony vb32 72 inch");
sony.model.push_back("sony df1 80 inch");
sony.model.push_back("sony ddr 82 inch");
sony.model.push_back("sony s4 42 inch");
sony.model.push_back("sony cv1 38 inch");
sony.model.push_back("sony w5 32 inch");
sony.model.push_back("sony g5t 56 inch");
sony.model.push_back("sony fa5 62 inch");
sony.price.push_back(70000);
sony.price.push_back(67000);
sony.price.push_back(156000);
sony.price.push_back(143000);
sony.price.push_back(40000);
sony.price.push_back(55000);
sony.price.push_back(89000);
sony.price.push_back(71000);
sony.price.push_back(75000);
sony.price.push_back(81000);
sony.code.push_back("QWETY");
sony.code.push_back("ASDF");
sony.code.push_back("ZXCV");
sony.code.push_back("GHJK");
sony.code.push_back("YUIO");
sony.code.push_back("QAZX");
sony.code.push_back("CVFE");
sony.code.push_back("VBRD");
sony.code.push_back("ASWQ");
sony.code.push_back("BNMT");
int count=0;
switch(choice){
    case 1:
    //tv
    cout<<"\n\n\tSelect your TV Model : ";
    cout<<"\n\n\t1.Samsung\t2.Sony ";
cout<<"\n\n\tEnter your model no : ";
int model_no;
cin>>model_no;
if(model_no==1){
    cout<<"\n\n\tYou have choosen :  Samsung TV Brand ";
    cout<<"\n\n\tPlease Select from below by entering the code no : ";
    for(index=0;index<samsung.model.size();index++){
        cout<<"\n\n\tCode : "<<samsung.code[index]<<" Model : "<<samsung.model[index]<<" Price : "<<samsung.price[index]<<" ";
    }
    string select;
    cin>>select;
    for(index=0;index<samsung.code.size();index++){
        if(select == samsung.code[index]){
            cout<<"\n\n\tYou have selected the TV : "<<samsung.model[index]<<" Price : "<<samsung.price[index]<<" ";
            cout<<"\n\n\tDo you have any coupon : \t1.YES\t2.NO ";
            int havecoupon;
            cin>>havecoupon;
            long long int input_money;
            if(havecoupon==1){
                cout<<"\n\n\tEnter the coupon code : ";
                string couponcode;
                cin>>couponcode;
                if(couponcode==coupon){
                cout<<"\n\n\tCongratulations you have 10 percent discount on the product ";
                long double discountprice = (samsung.price[index] - (samsung.price[index]*0.10));
                cout<<"\n\n\tEnter the amount of money to purchase the product : "<<discountprice;
                cin>>input_money;
                if(input_money==discountprice){
                    cout<<"\n\n\tCongratulations you have bought the product. Thanks for being with us. ";
                }
                else if(input_money > discountprice){
                    cout<<"\n\n\tHere is your extra "<<(input_money - discountprice)<<" Tk. ";
                    cout<<"\n\n\tCongratulations you have bought the product. Thanks for being with us. ";
                }
                else if(input_money < discountprice){
                    cout<<"\n\n\tYou need to pay more "<<(discountprice - input_money)<<" Tk. ";
                    cout<<"\n\n\tPurchase failed ";
                    abort();
                }
                else{
                    abort();
                }
                }
                else{
                    cout<<"\n\n\tInvalid coupon code . Try again later ";
                }

            }

        }
    }
    for(index=0;index<samsung.code.size();index++){
        if(select != samsung.code[index]){
            count++;
        }
    }
    if(count>=10){
        cout<<"\n\n\tInvalid input ";
        abort();
    }
    //payment;


}
else if(model_no==2){
    cout<<"\n\n\tYou have choosen : "<<" Sony TV Brand ";
    cout<<"\n\n\tPlease Select from below : ";
    for(index=0;index<sony.model.size();index++){
        cout<<"\n\n\tCode : "<<sony.code[index]<<" Model : "<<sony.model[index]<<" Price : "<<sony.price[index]<<" ";
    }
    string select_sony;
    cin>>select_sony;
    for(index=0;index<sony.code.size();index++){
        if(select_sony == sony.code[index]){
            cout<<"\n\n\tYou have selected the TV : "<<sony.model[index]<<" Price : "<<sony.price[index]<<" ";
            cout<<"\n\n\tDo you have any coupon : \t1.YES\t2.NO ";
            int havecoupon;
            cin>>havecoupon;
            long long int input_money;
            if(havecoupon==1){
                cout<<"\n\n\tEnter the coupon code : ";
                string couponcode;
                cin>>couponcode;
                if(couponcode==coupon){
                cout<<"\n\n\tCongratulations you have 10 percent discount on the product ";
                long double discountprice = (sony.price[index] - (sony.price[index]*0.10));
                cout<<"\n\n\tEnter the amount of money to purchase the product : "<<discountprice;
                cin>>input_money;
                if(input_money==discountprice){
                    cout<<"\n\n\tCongratulations you have bought the product. Thanks for being with us. ";
                }
                else if(input_money > discountprice){
                    cout<<"\n\n\tHere is your extra "<<(input_money - discountprice)<<" Tk. ";
                    cout<<"\n\n\tCongratulations you have bought the product. Thanks for being with us. ";
                }
                else if(input_money < discountprice){
                    cout<<"\n\n\tYou need to pay more "<<(discountprice - input_money)<<" Tk. ";
                    cout<<"\n\n\tPurchase failed ";
                    abort();
                }
                else{
                    abort();
                }
                }
                else{
                    cout<<"\n\n\tInvalid coupon code . Try again later ";
                }
            }
            else if(havecoupon==2){
                cout<<"\n\n\tPlease pay taka "<<sony.price[index]<<" to buy the product ";
                long long int input_money;
                cin>>input_money;
                                if(input_money==sony.price[index]){
                    cout<<"\n\n\tCongratulations you have bought the product. Thanks for being with us. ";
                }
                else if(input_money > sony.price[index]){
                    cout<<"\n\n\tHere is your extra "<<(input_money - sony.price[index])<<" Tk. ";
                    cout<<"\n\n\tCongratulations you have bought the product. Thanks for being with us. ";
                }
                else if(input_money < sony.price[index]){
                    cout<<"\n\n\tYou need to pay more "<<(sony.price[index] - input_money)<<" Tk. ";
                    cout<<"\n\n\tPurchase failed ";
                    abort();
                }
                else{
                    abort();
                }
            }
            else{
                cout<<"\n\n\tInvalid input ";
                abort();
            }
        }
}

    for(index=0;index<sony.code.size();index++){
        if(select_sony != sony.code[index]){
            count++;
        }
    }
    if(count>=10){
        cout<<"\n\n\tInvalid input ";
        abort();
    }
}
else{
    cout<<"\n\n\tError ";
    abort();
}
    break;
    case 2:
    Mobile();
    break;

}
return 0;
}
