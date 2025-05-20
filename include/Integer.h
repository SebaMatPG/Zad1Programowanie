#ifndef INTEGER_H
#define INTEGER_H

class Integer
{
    public:
        Integer();
        int getLiczba() const;
        void setLiczba(int nowaLiczba);
        void subtract(int odejmnik);
        void multiply(int czynnik);

    protected:

    private:
        int liczba = 1;
        friend void add(Integer& obiekt, int skladnik);
};

#endif // INTEGER_H
