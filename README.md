# pa9
Working together with my teammates: Cole, Danny and Will to replicate a Tetris game using the sfml library in C++ 
CptS 122 Lab section 3

Link to game demonstration:
//add link here!!!


Inheritance in our code:
We applied inheritance by creating a ParentShape class from which all 7 different shapes inherited properties from.

Polymorphism in our code:
We set out to apply polymorphism with the rotate function within the ParentShape class and all 7 child classes. The way our program works is that we have an object of ParentShape which we use to manipulate our current block. We do this by setting that object to one of the 7 different shapes, then manipulating from there. We attempted to use the rotate function on that object, but for reasons we weren't sure of the rotate function within the parent class was called whenever we attempted to rotate the shape, even when the object was set as one of the 7 shapes. We worked around this by creating a temporary shape matching the type of shape the current block was, rotating it, then setting the current objects coordinates to those of the temporary shape. Because of time constraints, we decided to leave it how it is and work on other parts of the program. In the future we will take a look at how to make that function apply polymorphism, but it would most likely take hours of debugging/problem solving that we don't have at the moment.
