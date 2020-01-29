#include <iostream>
#include <string>
#include <cstdlib>
#include <cstddef>

struct elem
{
    int dane;
    elem* nast = nullptr;
};

/*
See push.cpp
*/
void push(elem* &stos, int x)
{
    elem* nowy = new elem;
    nowy->dane = x;
    nowy->nast = stos;
    stos = nowy;
}

/*
See pop.cpp
*/
int pop(elem* &stos)
{
    if (stos!=NULL)
    {
        elem* stary = stos;
        int wynik = stos->dane;
        stos = stos->nast;
        delete stary;
        return wynik;
    }
    else
        throw "Empty stack";
}

/*
See push.cpp
*/

bool isEmpty(elem* stos)
{
    if (stos==NULL)
      	return true;
    else
        return false;
}

/*
See showLast.cpp
*/
int topEl(elem* &stos)
{
    if (stos!=NULL)
    {
        int wynik = stos->dane;
        return wynik;
    }
    else
        throw "Empty stack";
}

/*
See show.cpp
*/
void print(elem* stos)
{
    elem* tmp = stos;
    while (tmp != 0)
    {
        if (tmp != stos)
        {
            std::cout << " <- ";
        }
        std::cout << tmp->dane;
        tmp = tmp->nast;
    }
    std::cout << std::endl;
}

/*
Example with all functions
*/
int main()
{
    elem* stack_try = new elem; //creating stack stack[0] -> random because of memory set.
    std::cout << "Stack memory random set [0]: ";
	print(stack_try);
    delete stack_try;

    elem* stack = new elem(); //creating stack. stack[0] -> 0
    std::cout << "Stack set (0): ";
	print(stack);

    //stack->dane = 0; //insert 0 -> [0]

    std::cout<< "Is stack is empty ? : " << isEmpty(stack)<<std::endl;

    pop(stack);
    std::cout<< "Pop stack.\nNow is empty ? : " << isEmpty(stack)<<std::endl;

    std::cout<< "Push to stack 1,...,10."<<std::endl;
    for(int i = 1 ; i <= 10; i++)
    {
        push(stack, i);
    }
    std::cout<< "Print stack: ";
	print(stack);

    std::cout<< "Last element : "<< topEl(stack) << std::endl;

    std::cout<< "Pop stack."<<std::endl;
    pop(stack);

    std::cout<< "Print stack: ";
    print(stack);

	std::cout<< "Last element : "<< topEl(stack) << std::endl;
    return 0;
}
