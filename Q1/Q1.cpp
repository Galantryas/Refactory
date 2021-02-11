#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    string restoName="",year,month,day,time,name="", item[100], cek;
    int temp=0, price[100], total=0, dot=1000, longItem=0;
    cout<<"Restaurant Name :";
    getline(cin, restoName);
    cout<<"Date\n"<<" - Year  :";
    cin>>year;
    cout<<" - Month :";
    cin>>month;
    cout<<" - Day   :";
    cin>>day;
    cout<<" - Time (eg: 13:12:00) :";
    cin>>time;
    cout<<"Name :";
    cin.ignore();
    getline(cin, name);
    cout<<"Input Item and Price\n";
    top:
    cout<<"Item :";
    item[temp]="";
    if(temp==0){
        getline(cin, item[temp]);
    }else{
        cin.ignore();
        getline(cin, item[temp]);
    }
    cout<<"Price :";
    cin>>price[temp];
    temp+=1;
    cout<<"Continue input item? Yes/No\n";
    cin>>cek;
    if(cek=="Yes"||cek=="yes"||cek=="YES"||cek=="Y"||cek=="y"){
        goto top;
    };
    cout<<"\n------------------------------\n";
    unsigned int paddingRestoName = 15 + (restoName.size() / 2);
    cout<<setw(paddingRestoName)<<restoName<<endl;
    cout<<"\nTanggal : "<<year<<"/"<<month<<"/"<<day<<" "<<time<<endl;
    cout<<"Nama Kasir :";
    unsigned int paddingName = 9 + (name.size() / 2);
    cout<<setw(paddingName)<<name;
    cout<<"\n\n==============================\n\n";
    for(int i=0;i<temp;i++){
        total+=price[i];
        std::string strTotal = to_string(total);
        std::string strPrice = to_string(price[i]);
        int dotTemp = 30 - (item[i].size()+strPrice.size()+2);
        if(dot>dotTemp){
            dot = dotTemp;
            longItem = item[i].size();
        }
        if(i==temp-1){
            dotTemp = 30 - (strTotal.size()+7);
            if(dot>dotTemp){
                dot = dotTemp;
                longItem = 5;
            }
        }
    }
    for(int i=0;i<temp;i++){
        std::string strTotal = to_string(total);
        std::string strPrice = to_string(price[i]);
        int finalDot = dot + (longItem-item[i].size());
        cout << item[i];
        if(finalDot>0){
            for(int j=0;j<finalDot;j++){
                cout<<".";
            }
        }
        cout<< "Rp" << price[i] << endl;
        if(i==temp-1){
            finalDot = dot + (longItem-5);
            cout<<"\n\nTotal";
            if(finalDot>0){
                for(int j=0;j<finalDot;j++){
                    cout<<".";
                }
            }
            cout<< "Rp" << total << endl;
        }
    }

return 0;
}
