 //header File For Matrix Class
#ifndef matrix
#define matrix
#include<iostream>
#include<vector>
using std::vector;
class matrix{
public:
     //matrix();
     //matrix(vector<vector<int> >&);
     //matrix(unsigned,unsigned,vector<vector<int> > & );
     //matrix(const matrix&);
    friend std::istream& read(std::istream &,matrix &);
    friend std::ostream& print(std::ostream&,matrix&);
    friend matrix& adj( matrix);
    friend matrix& inverse( matrix);
    matrix& operator=(const matrix&);
    matrix& operator+=(const matriix&);
    friend matrix operator+(const matrix&,const matrix&);
    friend matrix operator-(const matrix&,const matrix&);
    friend matrix operator*(const matrix&,const matrix&);
    friend bool operator==(const matrix&,const matrix&);
    friend bool operator!=(const matrix&,const matrix&);
    friend matrix operator/(const matrix&,int n);



private:
    unsigned rows=0,columns=0;
     vector<vector<int> > elements;
};
std::istream& read(std::istream&,matrix);
std::ostream& print(std::ostream&,matrix);
matrix& adj( matrix);
matrix& inverse( matrix);

#endif // Matrix

