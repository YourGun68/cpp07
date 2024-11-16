
#pragma once

#include <iostream>
#include <string>

template <typename Tmp>
void	iter(Tmp *tab, int length, void(*f)(Tmp const&))
{
	for (int i = 0; i < length; i++)
		f(tab[i]);
}