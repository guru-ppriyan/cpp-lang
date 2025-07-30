#include<iostream>
using namespace std ;

class Grandfathder{
    public:
    Grandfathder(){
        cout<<"constructor Grand-father memory space"<<endl;
    }
    void Assets() {
        cout<<"land is accesible"<<endl;
    }
};
class Mother : virtual public Grandfathder{
    public:
    Mother(){
        cout<<"constructor Mother memory space"<<endl;
    }
    void Materials()  {
        cout<<"chains are accesible"<<endl;
    }
};

class Father: virtual public Grandfathder{
    private:

    public:
    Father(){
        cout<<"constructor Father memory space"<<endl;
    }
    void house() {
        cout<<"home is accesible"<<endl;
    }

} ;

class Son : public Mother , public Father {
    private :

    public:
    Son(){
        cout<<"constructor Son memory space"<<endl;
    }
    void phone()  {
        cout<<"mobile phone is accessible"<<endl;
    }


};

int main() {
    Son g1;
    g1.phone() ;
    g1.Assets();
    g1.house();
    g1.Materials();
    return 0;
}