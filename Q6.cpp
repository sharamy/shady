#include <iostream>
#include <string>
using namespace std ;
class Move {

private :
	double x ;
	double y ;
	int m ;
public :
	Move ( double a , double b )
	{ x=a ; y=b; }

	showmove ()
	{ return  x  ;
	  return y  ;      }

    Move add ( const move ,int m )
	{  x=m ;                    }

	reset ( double a=0 , double b = 0 )
	{    x = a ; y = b ;}
};
	
	int main () {
                     
		int x=5,y=6 ,z=7 ,c=8 ;
		Move  move1 ;
		cout<< move1.Move (z,c);
		cout<< move1.showmove();
		cout<<	move1.reset(0,0) ;
	return 0 ;}


