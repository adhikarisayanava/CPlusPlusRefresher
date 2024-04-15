/*
Special member functions are member functions that are implicitly defined as member of classes under certain circumstances.

Default Constructor : If a class definition has no constructors, the compiler assumes the class to have an implicitly defined default constructor.
But as soon as a class has some constructor taking any number of parameters explicitly declared, the compiler no longer provides an implicit default constructor, and no longer allows the declaration of new objects of that class without arguments.
    C::C();

Default Destructor :A destructor is a member function very similar to a default constructor: it takes no arguments and returns nothing, not even void. 
    C::~C();

Copy Constructor : See copy_constructor.cpp
    C::C(const C&);

Copy Assignment : See copyconstructorvsassignment.cpp
    C& operator= (const C&); 
/home/sayanava/Pictures/Screenshots/Screenshot from 2024-04-15 15-49-47.png

//below two moves the ownership of the given data to the destination object without making any additional copies.
Move Constructor //creating new object
    C::C(C&&);
Move Assignment //for already initialized object
    C& operator=(C&&);
*/