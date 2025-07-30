#include<iostream>

using namespace std ;

class Technology {
    private :

    public :
    void Lab(){
        cout<<"chemistrylab is accesible"<<endl;
    }


} ;
class BachelorOfTechnology : public Technology {
    private :

    public :
    void physicsLab(){
        cout<<"physicsLab is accesible"<<endl;
    }
} ;

class Engineering {
    private:



    public :
    void Classrooms(){
        cout<<"classrooms are accesible"<<endl;
    }
};

class BachelorOfEngineering : public Engineering, public BachelorOfTechnology{
    public:
    void Library(){
        cout<<"books are accesible"<<endl;
    }
};

int main() {
    BachelorOfEngineering s1 ;
    s1.Library();
    s1.Classrooms() ;
    s1.Lab() ;
    s1.physicsLab();
    

    
    return 0;

}

