#ifndef POINTER_WRAPPER_H
#define POINTER_WRAPPER_H

/// <summary>
/// PointerWrapper class 
/// </summary>
class pointerWrapper {
public:
    /// <summary>
    /// Constructor for pointerWrapper, with explicit keyword so that  the constructor can only construct a pointerWrapper object.
    /// </summary>
    /// <param name="value"></param>
    explicit pointerWrapper(int value);

    /// <summary>
    /// Destructor responsible for releasing allocated memory
    /// </summary>
    ~pointerWrapper();

   
    void print(void);

private:
    /// <summary>
    /// The pointer
    /// </summary>
    int* p;
};

#endif
