/*												
												
												Structure vs Union :-
										
	Structures in C is a user-defined data type available in C that allows to combining of data items of different kinds.
	
	Structures are used to represent a record.

	Defining a structure: To define a structure, you must use the struct statement.
	
	The struct statement defines a new data type, with more than or equal to one member. The format of the struct statement is as follows:


struct [structure name]
   {
       member definition;
       member definition;
       ...
       member definition;
   };
   
   (OR)

   struct [structure name]
   {
       member definition;
       member definition;
       ...
       member definition;
   }structure variable declaration;
   
   
   
   
	Union in C is a special data type available in C that allows storing different data types in the same memory location. 
	You can define a union with many members, but only one member can contain a value at any given time. 
	Unions provide an efficient way of using the same memory location for multiple purposes. 

	Defining a Union: To define a union, you must use the union statement in the same way as you did while defining a structure. 
	The union statement defines a new data type with more than one member for your program. The format of the union statement is as follows: 


union [union name]
    {
       member definition;
       member definition;
       ...
       member definition;
    };
   
    (OR) 

    union [union name]
    {
       member definition;
       member definition;
       ...
       member definition;
    }union variable declaration;
    
    
    
    
						Similarities Between Structure and Union
						
	1) Both are user-defined data types used to store data of different types as a single unit.
	2) Their members can be objects of any type, including other structures and unions or arrays.
	3) A member can also consist of a bit field.
	4) Both structures and unions support only assignment = and sizeof operators.
	5) The two structures or unions in the assignment must have the same members and member types.
	6) A structure or a union can be passed by value to functions and returned by value by functions. 
	7) The argument must have the same type as the function parameter. 
	8) A structure or union is passed by value just like a scalar variable as a corresponding parameter.
	9) ‘.’ operator or selection operator, which has one of the highest precedences, 
	   is used for accessing member variables inside both the user-defined datatypes.
	   
*/ 