#include <iostream>
#include "UMatrizPtrDb.h"

using namespace std;
int main(){
   MatrizPD* m=new MatrizPD();
   m->dimensionar(5,5);
   m->poner(2, 2, 8);
   m->poner(3, 5, 1);
	m->poner(3, 3, 1);
	m->poner(4, 4, 1);
  cout << m->to_str() << endl;
	system("pause");
	return 0;


}
