#include <stdio.h>
#include <stdlib.h>
#include<math.h>

enum different_shapes
{ circle,
  square,
  triangular,
  rectangular,

};
typedef struct
{
  enum different_shapes difsh   ;
  int dimention1;
  int dimention2;
  int dimention3;
} shape;


float get_area(shape*shptr)
{
    if(shptr->difsh ==circle)
        return 3.14*shptr->dimention1*shptr->dimention1;
    else if(shptr->difsh==square)
        return shptr->dimention1*shptr->dimention1;
    else if(shptr->difsh==triangular)
        { float semiperimeter=(shptr->dimention1+shptr->dimention2+shptr->dimention3)/2;
           return sqrt(semiperimeter*(semiperimeter-shptr->dimention1)*(semiperimeter-shptr->dimention2)*(semiperimeter-shptr->dimention3));
        }
    else if(shptr->difsh==rectangular)
        {
            return shptr->dimention1*shptr->dimention2;
        }
}

int main()
{
 shape tri={triangular,4,3,5};
 printf("%f",get_area(&tri));
}
