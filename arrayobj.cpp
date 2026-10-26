#include <iostream>
using namespace std;

class register {
    private:
    unsigned char value ;
    public:
    void write(unsigned char v)
    {value = V;}
    unsigned char read() const {return value;}
void reset () {value=0;}
};
int main () {
    register file [4];
    for (int i=;i<4;++i)
    file [i].reset();
    file[0].write(0xAB);
    file [3].write (0x10);
    for (int i=0;i<4;++i)
    cout << "register"<<i<<"="<<(int)file [i]read() << endl;
    return 0;
    
}

