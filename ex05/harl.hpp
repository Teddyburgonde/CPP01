/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:03:35 by tebandam          #+#    #+#             */
/*   Updated: 2024/08/29 19:10:25 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP


class Harl
{
    public:
    Harl();
    ~Harl();
    // void complain(std::string level); ???
    
    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};


#endif