#ifndef _ADAPTER_CLASS_H_
#define _ADAPTER_CLASS_H_
#ifndef ADAPTER_OBJECT
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

class Adapter : public Target, public Adaptee
{
public:
    Adapter();
    ~Adapter();
    void Request();
protected:
private:
};

#endif // ADAPTER_OBJECT
#endif