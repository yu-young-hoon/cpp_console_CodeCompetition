#pragma once
#include <cstring>
class Pizza{
public:
	void prepare();
	void bake();
	void cut();
	void box();

};
class cheesePizza : public Pizza{

};
class papalonyPizza : public Pizza{

};
class yh_nonFactory
{
public:
	Pizza* orderPizza(char* type){
		Pizza* pizza;
		if (strcmp("cheese",type)){
			pizza = new cheesePizza();
		}
		else if (strcmp("papalony",type)){
			pizza = new papalonyPizza();
		}
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	};
	yh_nonFactory();
	~yh_nonFactory();
};

