#include <iostream>

using namespace std;

struct product{
int code;
int weight;
int price;
};

void read(product* m1,product* m2 ){
 cout<<"enter code of M1 : ";
 cin>>m1->code;
 cout<<endl;
 cout<<"enter weight of M1 : ";
 cin>>m1->weight;
 cout<<endl;
 cout<<"enter price of M1 : ";
 cin>>m1->price;
 cout<<endl;
 cout<<"enter code of M2 : ";
 cin>>m2->code;
 cout<<endl;
 cout<<"enter weight of M2 : ";
 cin>>m2->weight;
 cout<<endl;
 cout<<"enter price of M2 : ";
 cin>>m2->price;
 cout<<endl;
}
void modify(  int i ,product &m){
     cout<<"enter  new code  of M"<<i<<" :";
 cin>>m.code;
 cout<<endl;
 cout<<"enter  new weight of M"<<i<<" :";
 cin>>m.weight;
 cout<<endl;
 cout<<"enter new price  of M"<<i<<" :";
 cin>>m.price;
 cout<<endl;

}
void display(product* m1,product* m2){
     cout<<" the code of M1 : ";
 cout<<m1->code;
 cout<<endl;
 cout<<"the weight of M1 : ";
 cout<<m1->weight;
 cout<<endl;
 cout<<"the price of M1 : ";
 cout<<m1->price;
 cout<<endl;
 cout<<"----------------------------------------------------";
 cout<<endl;
 cout<<"the code of M2 : ";
 cout<<m2->code;
 cout<<endl;
 cout<<"the weight of M2 : ";
 cout<<m2->weight;
 cout<<endl;
 cout<<"the price of M2 : ";
 cout<<m2->price;
 cout<<endl;
}
void chong( product* m1,product* m2,product* m3,product* m4){
 m3->code=m1->code;
 m3->weight=m1->weight;
 m3->price=m1->price;
 m4->code=m2->code;
 m4->weight=m2->weight;
 m4->price=m2->price;
}

int main()
{
    int en,en1 ;
    product  M1,M2,M3,M4;
read(&M1,&M2);
chong(&M1,&M2,&M3,&M4);
cout<<" do you want to modify ?[y=1/n=0] ";
cin>>en;

if(en==1){
        cout<<" M1=1 or M2=2 or both=3 ";
        cin>>en1;
        if(en1 == 1){
            modify(en1,M1);

        }else if(en1 ==2){
            modify(en1,M2);
        }else if(en1==3)  {
        modify(1,M1);
        modify(2,M2);
        }else {

        cout<<" pleas enter  a  real nomber ";

return 0;
}


} else if( en==0){
    display(&M1,&M2);
    return 0;
}else{
cout<<" pleas enter  a real  nomber ";
return 0;
}

cout<<"befor modifay ";
cout<<endl;
display(&M3,&M4);
cout<<endl;
cout<<"--------------------------";
cout<<endl;
cout<<" after modifay";
cout<<endl;
display(&M1,&M2);
    return 0;
}
