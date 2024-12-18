/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:03:35 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/30 11:02:53 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    public:
    Harl();
    ~Harl();
    
    public:
    void complain(std::string level);
    
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};


#endif