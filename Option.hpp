#ifndef OPTION_HPP
#define OPTION_HPP

#include <cassert>
#define assertm(exp, msg) assert(((void)msg, exp))

template <class T>
class Option
{
	public:
		bool	is_some;
		T		some;

		bool operator *()
		{
			return is_some;
		}

		operator T() const
		{
			assert("Option is None" && is_some == true);
			return some;
		}

		void	wrap(T some)
		{
			this->some = some;
			is_some = true;
		}

		T		unwrap()
		{
			assert("Option is None" && is_some == true);
			is_some = false;
			return some;
		}

		Option(T some)
		: some(some), is_some(true)
		{}

		Option()
		: is_some(false)
		{}
};

#endif
