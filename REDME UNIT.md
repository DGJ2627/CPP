># <u>Unit-1</u> 

<h1>1. INTRO TO C++</h1>
            
    Two type of programing language.
            1.POP -> Procedurel Oriented Programming.
            2.OOP -> Object Oriented Programming.

    History of C++ :
            -> Developed by Bjarne Stroustrup.
            -> In bell laboratories.
            -> IN 1980.

># <u>Unit-2</u>  

<h1>2. EXPRESSIONS AND FUNCTIONS </h1>

        Special Assigenment Oprators.
            -> Chained Assigenment Oprators.
            -> Embedded Assigenment Oprators.
            -> Compond Assigenment Oprators.

># <u>Unit-3</u> 

<h1>3. OOP CONCEPT </h1>

        -> Definition OOP :

            -> It is one type of concept.
            -> it is a concept in which code becomes well               
            structrized , well organized and in creases it's
            resusability.
            -> every process will be done using Object. 
       
        -> 4 Principles of OOP :-

            1.Encapsulation (To combine).
            2.Inheritence (to share).
            3.Ploymorphsim.
            4.Data abstraction.

># <u>Unit-4</u>

<h1>4. GitHub </h1>

                -> Upload your all program in github with output screen shot.

># <u>Unit-5</u>

<h1>5. Data Encapulation  </h1>

                -> What is Data Encapulation :-
                        To wrap the code into resuablr methods of class   
                        convert UDFs into, Data member function and convert 
                        variables into data members is calles encapulation.
                        -Wrap every logic into the class.

                -> Setter & Getter :-
                        Setter : A method to take input of all or specific  
                        attributes.
                        Getter :- Amethod to give output of all or specific 
                        attributes.
                -> This keyword :- 
                        it defferenciates the class level varriable from 
                        function level variables.
                -> Static :- 
                        common method for all objects, which is can be  
                        accessed by name using scope  resultion.   
                -> Static Member :- 
                        Common member for all objects which takes the single 
                        memory all0cation.
                        - for all the objects, static member will common  
                        and only one.    
                -> Friend Funcation :- 
                        -it is mainly used to access private attributes of class.
                        -we have to declare friend in class's body.
                        -it must be defind in global area.
                -> Two type of Friend Funcation :-
                        1.Default
                        2.parameterized.

                -> Constructor & Destructor 
                        Constructor : it is block of code which is 
                        automatlically invoked(Run) when class is instaniated.
                -> Rule to create Constructor : 
                        - it's name must be same as class's name.
                        - it must not have any return dat type.
                        - it must not return any value.
                -> Type of Constructor :
                        1.Default
                        2.Parameterized
                        3.Copy :
                                1.Implict 
                                2.Explict

                        Destructor : A block of code which is automatically 
                        invoked when object is destoyed or deleted. 
                        
># <u>Unit-6</u>

<h1>6. Inheritance  </h1>

                Inheritance :- 
                        Share attributes and methodes from one class to a
                        nother class.

                        - Super class == Base Class    == Parent Class.
                        - Sub  class  == Derived class == Child class.

                -> Type Of Inheritance :-
                        1.Single level 
                        2.Multi level 
                        3.Hierarchical
                        4.Multiple
                        5.Hybrid.

                -> Ambiguity :-
                        - it occcures when we tries to access some data from 
                        two different source which are not directly 
                        connected to each other.
                        - it mainly occures in multiple and Hireachical 
                        Inheritence.
                        - there are two different ways to reslove the ambiguity.
                        
                        - Temperory solution :
                                using scope resolution operataor.
                        - perement Solution :
                                using virtual function.
                                
# <u>Unit-7</u>

<h1>7. Polymorphism  </h1>

        What is Polymorphism ? 
                Polymorphism is a method where we can creat multiple 
                formation or structure of single method.

        -> polymorphism is combinaition of two greek word:
                -Poly   = multiple
                -Morphs =structure,behaviour,forms.

        -> Two type :- 
                        1. Run time:
                                (i) method overriding.
                                (ii) Virtuel function.
                        2. Compile time:
                                (i) method overloading.
                                (ii) oprator overloading.

        Method Overloading : 
                - When we creat same method with multiple parameters in 
                same class , it's called method overloading.

        Run :- 
                1.class must be same.
                2.name must be same of all method.
                3.parameters must be different of all methos.

        Method overriding :
                - When we recreat the same method in derived (child) class 
                with same parameters it's called method overriding.
        Run :-
                1.class must be derived.
                2.name must be same of all methods.
                3.parameters must be same of all methods.  
        
        -> Different between Method Overloading & Method Overridng :- 
                                        Class      Name    Parameters
                                        ========|=========|===========
                Method Overloading :    same    |   same  |  diffrent
                                        ========|=========|===========
                Method Overridng   :    derived |   same  |  same
                                        ========|=========|===========

        -> Signature :- 
                        Name :
                        Parameters :
                        Return data type :

        -> Opertor Overloading : 
                        - it is concpt in which we can performs 
                        mathemethical or logical oprations between objects 
                        of same class.
                
                Two types :- 
                             1.Unary opertor.
                             2.Bianry oprator.                                
                                