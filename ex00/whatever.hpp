
#pragma once

#include <iostream>
#include <string>

template <typename Tmp>
void	swap(Tmp& a, Tmp& b) {
	Tmp t;
	t = b;
	b = a;
	a = t;
}

template <typename Tmp>
Tmp		min(Tmp const& a, Tmp const& b) {
	if (a < b)
		return a;
	else
		return b;
}

template <typename Tmp>
Tmp		max(Tmp const& a, Tmp const& b) {
	if (a > b)
		return a;
	else
		return b;
}
