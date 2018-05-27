 //header File For Matrix Class
#ifndef matrix
#define matrix
#include<vector>
class matrix{
public:
     matrix();
     matrix(std::vector<std::vector<int> >&);
     matrix(unsigned,unsigned,std::vector<std::vector<int> >& );
     matrix(const matrix&);
    friend istream& read(istream&,matrix);
    friend ostream& print(ostream&,matrix);
    friend matrix& adj( matrix);
    friend matrix& inverse( matrix);

private:
    unsigned rows=0,columns=0;
     std::vector<std::vector<int> > elements;
};
istream& read(istream&,matrix);
ostream& print(ostream&,matrix);
matrix& adj( matrix);
matrix& inverse( matrix);

#endif // Matrix

