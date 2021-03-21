#include "Menu.h"
#include "Sin.h"
#include "Ln.h"
#include <memory>
#include <iostream>
using std::shared_ptr;

Menu::Menu() {
	//creating the initial functions in the list:
	this->m_functionList.push_back(std::make_shared <Sin>());
	this->m_functionList.push_back(std::make_shared <Ln>());
}

void Menu::showMenu()const {
	std::cout << "This is the function list:" << std::endl;
	for (int i = 0; i < this->m_functionList.size(); i++) {
		std::cout << i << ": ";
		this->m_functionList[i]->print();
		std::cout << std::endl;
	}
	std::cout << "Please enter a command ('help' for command list):";
}

void Menu::deleteFunction(int num) {
	this->m_functionList.erase(this->m_functionList.begin() + num);
}

int Menu::getSize()const {
	return this->m_functionList.size();
}

void Menu::eval(double i,double x){
	std::cout << this->m_functionList[i]->eval(x) << std::endl;
}
