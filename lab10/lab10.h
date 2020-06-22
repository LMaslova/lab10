#pragma once

#include <iostream>

void FactoryMethod();

class AbstractRole
{
public:

	virtual void showRights() = 0;
};

class AbstractCreator
{
public:

	virtual AbstractRole* factoryMethod() = 0;
};

class UserRole : public AbstractRole
{
public:

	void showRights() override;
};

class User : public AbstractCreator
{
public:

	AbstractRole* factoryMethod() override;
};

class SellerRole : public AbstractRole
{
public:

	void showRights() override;
};

class Seller : public AbstractCreator
{
public:

	AbstractRole* factoryMethod() override;
};

class AdminRole : public AbstractRole
{
public:

	void showRights() override;
};

class Admin : public AbstractCreator
{
public:

	AbstractRole* factoryMethod() override;
};
