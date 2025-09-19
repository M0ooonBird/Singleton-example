#include <iostream>
#include "ModelCG.h"

int main()
{
	std::cout << "Hello" <<std::endl;
	

	modelCG()->SetA(2);
	std::cout << modelCG()->GetA() << std::endl;
	
	return 0;
}