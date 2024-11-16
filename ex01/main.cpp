/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpeter <jpeter@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:24:07 by jpeter            #+#    #+#             */
/*   Updated: 2024/11/16 10:35:06 by jpeter           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void zero(int const& i)
{
	std::cout << i << " - 0" << std::endl;
}

template <typename T>
void zeroTmp(T const& t)
{
	std::cout << t << " - 0" << std::endl;
}

int main(void)
{
	int tab[4] = {1, 2, 3, 4};
	iter(tab, 4, zero);
    std::cout << std::endl;
	iter(tab, 4, zeroTmp);
    std::cout << std::endl;
	std::string str_tab[3] = {"Hello", "World", "!!!"};
	iter(str_tab, 3, zeroTmp);
}
