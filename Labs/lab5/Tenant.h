#ifndef __TENANT_H
#define __TENANT_H

#include <iostream>
#include "property.h"
#include "Tenant.h"

class Tenant{
	private:
		int agreeability;
		int budget;
	public:
		Tenant();
		~Tenant();
		Tenant(const Tenant& copy);
		const Tenant& operator = (const Tenant& copy);

		int get_agreeability()const;
		void set_agreeability(int A);
		
		int get_budget()const;
		void set_budget(int B);
};
#endif
