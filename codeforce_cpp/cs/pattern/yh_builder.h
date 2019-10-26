#pragma once
#include <stdio.h>
class Item
{
private:
	char* sword;
	char* armor;
public:
	void setSword(char* swordType)
	{
		sword = swordType;
	}
	void setArmor(char* armorType){
		armor = armorType;
	}
	void printItem(){
		printf("%s\n",sword);
		printf("%s\n", armor);
	}
};
class yh_builder
{
protected:
	Item* item;
public:
	Item getItem(){
		return *item;
	}
	void createItem(){
		item = new Item();
	}
	virtual void buildSword() = 0;
	virtual void buildarmor() = 0;
};
class metalItemBuilder : public yh_builder
{
public:
	void buildSword(){
		item->setSword("metalSword");
	}
	void buildarmor(){
		item->setArmor("metalArmor");
	}
};
class blackSmith
{
private:
	yh_builder *builder;
public:
	void setItem(yh_builder* itemBuilder){
		builder = itemBuilder;
	}
	Item getItem(){
		return builder->getItem();
	}
	void constructure(){
		builder->createItem();
		builder->buildarmor();
		builder->buildSword();
	}
};