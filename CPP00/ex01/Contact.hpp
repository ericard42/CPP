#ifndef	CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact {
	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		bool		_isEmpty;

	public:
		Contact(void);
		~Contact(void);
		
		bool	check_isEmpty();
		void	add_contact();
};

#endif