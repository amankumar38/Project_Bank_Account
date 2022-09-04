#include <iostream>

class hello
{
	std::string hello;
public:
	void display();
};

void hello::display()
{
	std::cout << "Hello this is class program using class and object." << std::endl;
}

int main()
{
	hello hello_obj;
	hello_obj.display();

	return 0;
}