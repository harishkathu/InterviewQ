# Ask to code

- Write a class and show how RAII is used
- How will u create an interface
- Create two empty classes (how much memory will each object take ?)
- Create these two classes as a base and chile and implement a print function
- Caste Base to a child and and what happens
- Caste  Child to base and what happens
- Ans this code 
```cpp
My_Class obj;
MyCalss boj = MyClass();
MyClass obj{};
MyClass obj = new MyClass()
```
- Ans Qestions in this repo
- Now create a graph data structure or linked list (you can choose) and add few vertexs and nodes to it
    - Create a new branch and start working, and also write doc strings on the go
    - Now do a breadth first search on this
    - Feel free to use standard libray documentations (No AI and No copy paste code), cpp-reference and other sources
    - Use stl

# Cpp

- RAII
- Rule of Zero/Five
- OOPS and Compositions
    - Which is better
    - Runtime polymorphism (virtual)
    - Initializer list
    - What is an interface and why use it
- Smart pointers types and uses
- Copy Elision
- Pass by vaue and pass by reference
    - lvalue and rvalues
- Move Schematics
- Return type deduction
- Templates
    - Can variables be templated
- Meta programing
    - Type traits
- Diff between map and unordered map
    - What happens when there are hash collisions ?
- constexpr, inline and extern
    - How do these affect the compilation and linkin phase
- optional, variants, expected, array, set, map.
- Lambdas
- strong vs weak types ?

# General programming

- What does a strong programing language mean ?
    - Why does a Python / Java code not compile ?
- Is RUST compeletely safe language ?
    - How does it ensure safety ?
    - Why do you think RUST does not have classes
- Python everything is an object what does that mean ?
- What does syntatic sugar mean ? any examples in cpp ?

# Build system (cpp)

- How does code get compiled (explain the whole process)
    -  Pre-processing, Tokenization, AST, CST, Paring,and linking ?
- What is a build system
    - What is CMake and Bazel what do they really do ?
- Dev container and docker ?
    - Why use them, how different are they from VM's
- 

# DSA

- Graphs
    - DAG
    - Cyclic Graphs
    - Breath and depth first search

# Git

- How does git do what it does ?
- Can you delete commits in git ?
- Difference between pull and fetch
- Difference between merge and rebase
- What is a remote in git (is git a centrally managed system ?)
- What is git and github ?

# Testing (Gtest and generic)

- Types of testing in GTest
    - Fixtures
    - Parameterised
    - Typed
- ASSERT vs EXPECT
- Monkey patching what is it ?
- How do we use depedency injection in test ?
- ASPICE angeneral types of testing
    - **Ans*
        - Unit
        - Integration
        - System
        - Regression
        - Smoke test
- What does profile mean and why do it
    - Load and performance test
    - Memory usage

# Design patterns

- State (state machines)
    - What is a state machine
    - draw a state machine for a traffic light/or game character/ vending machine/ or an OS application (;) basically how os handles and schedules)
- Builder pattern
- Command pattern
- Depedency Injection ?
    - Where do you think this is used in Automotive (ans could be for dataset and parameters)
- Factory
- Singleton
- Adapter pattern (provides wrapper between two/more incompatible code)
- Composite
- Strategy pattern (pass strategy to apply to data)
- Observer/Event based
- Visitor (basically if you have a complex data structure you use visitor pattern to visit these and perform task based on what data they hold)

# System

- How can two applictions communicate between each other ? (answer could be Shared memory, Pipes, sockets)
    - What is an Deamon process ?
- Pub-Sub architecture
    - Heard of ROS ?
- What are threading, multi-processing and async/co-routines programing
    - *Ans:* 
        - threading use multiple threads managed by OS, Asyn uses one thread and does co-operative context switches with yied and await
        - Asyn is lower memory overhead and avoids race condition between threads. Threads managed by OS thus memory and performance overheads
    - What is yield and await ?
        - await placed inside async function to wait for a slow process to finish without blocking
        - await uses yield to return execution and return a promise (this promise is what tells us if the slow process is done or now)
        - await event loop basically keeps checking on these promises if they are done and anything that is done, the execution is returned back to await call
- RTOS what is it and how does it differ from other OS's 
- What does OS scheduler do actually ?
- Diff between kernel and an OS
    - In Linux what does the /dev directory contain ?
    - Why linux treats all devices as a file ?
    - Is stdout and stdin and device, is no why is it placed there?
- What is x86, arm and all. Why do I have different installers for an application for the same OS ?
    - Linux applications typically come as an x86 installer and arm installer

# Must ask

- Why the switch ?
- Explain the previous project (architecture and chalanges faced)
- Ask about debuging done in previous projects
- 
