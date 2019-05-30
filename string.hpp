#ifndef __STRING__
#define __STRING__

class String(){

    private:
    //declare data members
    char * array;
    int length;

    public:
    //constructors 
    String(); // default constructor
    String(const char*);
    ~String(); //destructor

    unsigned int length();
    void reverse ();
    void append (const char);
};

#endif