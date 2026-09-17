# Debug

## Q1 - Volation of ODR

*file1.cpp* -> Defines Calculator::compute() -> prints 50
*file2.cpp* -> Degines Calculator::compute() -> prints 20
*shared.hpp* -> declares the struct and method

We declare a struct with an inline method. 
Both files will see this structure, but we will trick the compiler into generating two completely different versions of
the function body (uisng inline). The build and link works but at runtime the ABI/funciton points to different memry
thus the result is U.B

If you remove the inline from the methods then linker will throw an error. This happens because of how modern g++ linker
manages namespaces.
*Without inline*: The function symbol is marked as a `strong symbol`, and when the linker see two strong symbols with the
same name (even mangled name) it throws an error

*With inline*: The function symbol is marked as a `weak symbol`, adn when the linker sees two weak symbols it thinks
`"The C++ standard promises that these two weak-symbols with same name are inface functionally same too"`, and just
links the first weak symbol it encounters.

> NOTE:
> Symbol types are stored in the object file along with the manged name.
> In both cases (above mentioned) the mangled names are the same, only different is how they are marked (weak/strong symbol)
>
> inline gives the compiler permission to paster function's code directly into every file that includes it.
> However, if the function is too comples to be pasted everyhwere or the address is taken, the compiler must still
> generate a fallback in the background.
> Thus the compiler marks these as weak symbols, and when teh linker see two weak symbols it assumes that they are both
> are actually the same.
