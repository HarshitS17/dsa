#include <iostream>
using namespace std;

// first nasmespace]
namespace first_space
{
    void fun()
    {
        cout << "this is our first namespace ";
    }
}
// second namsespace
namespace second_space
{
    void fun()
    {
        cout << " this is our second namespace";
    }
} // namespace second__space
 int main (){
    first_space::fun(); // calling by first space 
    second_space::fun();// calling form seconfd space 
    return 0;
    
 }