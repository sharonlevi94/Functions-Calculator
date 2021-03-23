#include "Menu.h"
#include "Add.h"
#include "Sin.h"
#include "Composite.h"
#include "Ln.h"
#include "Poly.h"
#include "Multiply.h"
#include <memory>
#include <iostream>
using std::shared_ptr;

Menu::Menu() {
	//creating the initial functions in the list:
	this->m_functionList.push_back(std::make_shared <Sin>());
	this->m_functionList.push_back(std::make_shared <Ln>());
}

void Menu::showMenu()const {
	std::cout << std::endl;
	std::cout << "This is the function list:" << std::endl;
	for (int i = 0; i < this->m_functionList.size(); i++) {
		std::cout << i << ": ";
		this->m_functionList[i]->print(nullptr);
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
	std::cout << std::endl;
	this->m_functionList[i]->printWithValue(x);
	std::cout << "=";
	std::cout << this->m_functionList[i]->eval(x) << std::endl;
}

void Menu::createPoly() {
	double arg1,arg2;
	std::cin >> arg1;
	vector<double> factors;
	for (int i = 0; i <= arg1; i++) {
		std::cin >> arg2;
		factors.push_back(arg2);
	}
	this->m_functionList.push_back(std::make_shared <Poly>(arg1,factors));
}

void Menu::multiplyFunctions() {
    int arg1, arg2;
    std::cin >> arg1 >> arg2;
    this->m_functionList.push_back(std::make_shared<Multiply>(this->m_functionList[arg1], this->m_functionList[arg2]));
}

void Menu::addFunctions() {
    int arg1, arg2;
    std::cin >> arg1 >> arg2;
    this->m_functionList.push_back(std::make_shared<Add>(this->m_functionList[arg1], this->m_functionList[arg2]));
}

void Menu::compFunctions() {
    int arg1, arg2;
    std::cin >> arg1 >> arg2;
    this->m_functionList.push_back(std::make_shared<Composite>(this->m_functionList[arg1], this->m_functionList[arg2]));
}