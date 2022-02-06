#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>

class Span {
	public :
		Span();
		Span(unsigned int max);
		~Span();
		Span(Span const &src);
		Span &operator=(Span const &src);

		void			addNumber(const int n);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();

		template<class it>
		void addNumbers(const it start, const it end) {
			if (std::distance(start, end) + _numbers.size() > _max)
				throw std::out_of_range("too many values");
			std::copy(start, end, std::back_inserter(_numbers));
		}

	private :
		unsigned int _max;
		std::vector<int> _numbers;
};


#endif
