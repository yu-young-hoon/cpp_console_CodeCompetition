#pragma once
#include <cstring>

class Dough{

};
class ThinCrustDough : public Dough{

};
class Sauce{

};
class MarinaraSauce : public Sauce{

};
class Cheese{

};
class ReggianoCheese : public Cheese{

};
class yh_abstractFactory{
public:
	virtual Dough* createDough() = 0;
	virtual Sauce* createSauce() = 0;
	virtual Cheese* createCheese() = 0;
};

class NYPizzaIngredientFactory : public yh_abstractFactory{
public:
	Dough* createDough(){
		return new ThinCrustDough();
	};
	Sauce* createSauce(){
		return new MarinaraSauce();
	};
	Cheese* createCheese(){
		return new ReggianoCheese();
	};
};

class Pizza{
protected:
	Dough* dough;
	Sauce* sauce;
	Cheese* cheese;
public:
	void prepare();
	void bake();
	void cut();
	void box();

};
class cheesePizza : public Pizza{
	yh_abstractFactory* indgredientFactory;
public:
	cheesePizza(yh_abstractFactory* indgredientFactory){
		cheesePizza::indgredientFactory = indgredientFactory;
	};
	void prepare(){
		dough = indgredientFactory->createDough();
		sauce = indgredientFactory->createSauce();
		cheese = indgredientFactory->createCheese();
	}
};

