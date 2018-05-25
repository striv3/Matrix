 //header File For Matrix Class
#ifndef matrix
#define matrix
#include<vector>
class matrix{
public:
     matrix()=default;
     matrix(const std::vector<const std::vector<int> >);
     matrix(unsigned,unsigned,const std::vector<const std::vector<int> >);
    friend std::istream& read(std::istream&,matrix);
    friend std::ostream& print(std::ostream&,const matrix);
    friend matrix& adj( matrix);
    friend matrix& inverse( matrix);

private:
    unsigned rows=0,columns=0;
    std::vector<std::vector<int> > elements;
};
#endif // Matrix
