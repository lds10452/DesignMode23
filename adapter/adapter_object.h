#ifndef _ADAPTER_OBJECT_H_
#define _ADAPTER_OBJECT_H_
#ifdef ADAPTER_OBJECT

class Target
{
public:
    Target();
    virtual ~Target();
    virtual void Request();
protected:
private:
};

class Adaptee
{
public:
    Adaptee();
    ~Adaptee();
    void SpecificRequest();
protected:
private:
};

class Adapter : public Target
{
public:
    Adapter(Adaptee* ade);
    ~Adapter();
    void Request();
protected:
private:
    Adaptee* _ade;
};

#endif // ADAPTER_OBJECT
#endif