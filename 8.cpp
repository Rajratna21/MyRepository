#include<iostream> 

using namespace std;  
class Test 
{
    int num1; 
    int num2; 
    mutable int count; 

    public: 

    Test( void ):num1(10),num2(10),count(0)
    { }  

    //classname *const this 
    void showRecord( void )
    {
        ++this->num1;
        ++this->num2;
        cout<<"Num1 :   "<<num1<<endl;
        cout<<"Num1 :   "<<num2<<endl;  
    }
    //classname *const this = &callingobject 
    //const Test * const this = &t1    
    void printRecord( void ) const 
    {
        //++this->num1; // NOT OK 
        //++this->num2; // NOT OK 
        ++this->count;    
        cout<<"Num1 :   "<<num1<<endl;
        cout<<"Num1 :   "<<num2<<endl;
        
    }

    // this = &t1 
    int getcount (  void )
    {
            return this->count;  
    }   
    
}; 

int main()
{
    Test t1; 
    t1.printRecord( );
    t1.printRecord( );
    t1.printRecord( );

    cout<<"Count    :   "<<t1.getcount( )<<endl;  

}


int main1()
{
    Test t1; 
    t1.showRecord( ); // t1.showRecord( &t1 ); 
    t1.printRecord( );// t1.printRecord( &t1 ); 
    return 0; 
}


/*
        const int * const ptr;  
*/