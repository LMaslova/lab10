#include "lab10.h"
using namespace std;

void AdminRole::showRights()
{
	cout << "Admin: add/delete tickets, create new sellers" << endl;
}

AbstractRole * Admin::factoryMethod()
{
	return new AdminRole;
}

void SellerRole::showRights()
{
	cout << "Seller: add/delete tickets" << endl;
}

AbstractRole * Seller::factoryMethod()
{
	return new SellerRole;
}

void UserRole::showRights()
{
	cout << "User: book and buy tickets" << endl;
}

AbstractRole * User::factoryMethod()
{
	return new UserRole;
}


void FactoryMethod()
{
	Admin adminCreator;
	unique_ptr<AbstractRole> adminRole(adminCreator.factoryMethod());
	adminRole->showRights();

	Seller moderCreator;
	unique_ptr<AbstractRole> moderRole(moderCreator.factoryMethod());
	moderRole->showRights();

	User userCreator;
	unique_ptr<AbstractRole> userRole(userCreator.factoryMethod());
	userRole->showRights();
}
