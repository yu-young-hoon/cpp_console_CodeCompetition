#pragma once
#include <cstring>
class Pizza{
public:
	void prepare();
	void bake();
	void cut();
	void box();

};
class nyCheesePizza : public Pizza{

};
class nyPapalonyPizza : public Pizza{

};

class yh_factoryMethod
{
public:
	Pizza order(){
		Pizza* pizza;
		pizza = createPizza("cheese");
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	};
	virtual Pizza* createPizza(char* type) = 0;
};

class nyPizzaStore : public yh_factoryMethod
{
public:
	Pizza* createPizza(char* type){
		Pizza* pizza;
		if (strcmp("cheese", type)){
			pizza = new nyCheesePizza();
		}
		else if (strcmp("papalony", type)){
			pizza = new nyPapalonyPizza();
		}
	}
};


