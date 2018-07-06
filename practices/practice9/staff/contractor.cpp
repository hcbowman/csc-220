#include<iostream>
#include"contractor.hpp"

int Contractor::pay() {
	if(hours > 40) {
		return ((payrate * hours) + ( (hours - 40) * (payrate * 1.5) ));
	} else {
		return (payrate * hours);
	}

void Contractor::setHours(int h) {
	if (h < max_hours)
		hours = h;
	else
		hours = max_hours;

	}
}
