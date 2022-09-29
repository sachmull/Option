# Option
An optional datatype written in C++ 98

## Example
```
Option<int>	some(10);

if (*some)
	std::cout << "this is some" << std::endl;
else
	std::cout << "this is none" << std::endl;

std::cout << some << std::endl;


Option<int>	none;

if (*none)
	std::cout << "this is some" << std::endl;
else
	std::cout << "this is none" << std::endl;

std::cout << none << std::endl;
```

#### Output

```
this is some
10
this is none
Assertion failed: ("Option is None" && is_some == true), function
operator int, file Option.hpp, line 21.
zsh: abort      ./a.out
```