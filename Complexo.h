#include <math.h>

class Complexo
{
    private:
        float real;
        float im;
    public:
        //contrutor
        Complexo(float,float);
        //metodos
        float Modulo();
        Complexo Conjugado();

        Complexo operator + (Complexo);
        Complexo operator - (Complexo);
        Complexo operator * (Complexo);
        Complexo operator / (Complexo);
};
