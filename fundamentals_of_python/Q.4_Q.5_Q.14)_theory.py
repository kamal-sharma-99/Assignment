'''
    Q.1) How memory is managed in Python?
    Answer : Memory management in Python is handled by the Python memory manager,
             which is responsible for allocating and deallocating memory as needed.
             Python uses a combination of automatic memory management and a garbage collection
             mechanism to manage memory efficiently. Here are some key aspects of memory management in Python:

    a.) Object Allocation:

        Whenever you create an object in Python, the memory manager allocates space for that object in the heap.
        Python objects contain a header that includes information about the object's type and other details.
    
    b.) Reference Counting:

        Python uses a simple and lightweight mechanism called reference counting to keep track of the number of references to an object.
        Each object has a reference count, and when the count drops to zero, it means there are no references to the object,
        and the memory can be freed.
    
    c.) Garbage Collection:

        In addition to reference counting, Python uses a cyclic garbage collector to identify and collect objects that are no longer reachable.
        The garbage collector can detect and collect objects involved in reference cycles (mutual references) that reference counting alone might not handle.
        
    d.) Memory Pools:

        Python uses a system of memory pools for small objects to reduce memory fragmentation and improve allocation efficiency.
        The memory manager maintains separate pools for small, medium, and large objects.
    
    e.) Memory Deallocation:

        When an object is no longer needed, either because its reference count drops to zero or it becomes unreachable due to cyclic garbage collection, the memory manager deallocates the memory occupied by that object.
        The __del__ method in Python allows objects to define custom cleanup actions before they are destroyed, but it is not a guaranteed destructor.
    
    f.) Memory Profiling:

        Python provides tools for memory profiling, such as the gc module, which allows you to manually run the garbage collector and inspect memory usage.
    
    g.) Memory Optimization Techniques:

        Techniques like object pooling, using efficient data structures, and minimizing the use of global variables can help optimize memory usage in Python.
'''


'''
    Q.2) What is the purpose continue statement in python?
    Answer : In Python, the continue statement is used to skip the rest of the code inside a loop for the current iteration and move on to the next iteration.
            It is often used in conjunction with conditional statements to control the flow of the loop. When the continue statement is encountered,
            the remaining code within the loop for the current iteration is skipped, and the loop proceeds to the next iteration. 
'''


'''
Q.3) 
Answer : In Python, negative indexes are used to access elements from the end of a sequence, such as a list, tuple, or string.
         The last element of the sequence is denoted by index -1, the second-to-last element by index -2, and so on.
         Negative indexing provides a convenient way to access elements from the end of a sequence without needing to know its length explicitly.
'''