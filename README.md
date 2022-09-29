# Option
An optional datatype written in C++ 98

## Usage
When creating a new Option object give a paremeter to the constructor if you want to represent something, or don't if you want to represent nothing.<br>
Or use the methods `void wrap(T)` and `T unwrap()` later to change the Options state.<br>
You can use the `*` operator to access a `bool` that indicates wether something is stored or not.<br>
The Option object can be implicitly converted to the template type.<br>

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