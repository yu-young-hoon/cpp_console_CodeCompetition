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
class yh_simpleFactory
{
public:
	Pizza* createPizza(char* type){
		Pizza* pizza;
		if (strcmp("cheese", type)){
			pizza = new cheesePizza();
		}
		else if (strcmp("papalony", type)){
			pizza = new papalonyPizza();
		}
		return pizza;
	};
};
class yh_store{
	yh_simpleFactory* factory;
public:
	yh_store(){
		factory = new yh_simpleFactory();
	};
	Pizza order(){
		Pizza* pizza;
		pizza = factory->createPizza("cheese");
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	};
};




