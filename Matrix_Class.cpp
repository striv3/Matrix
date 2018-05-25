#include"matrix_Class"
#include<vector>


/*#ifndef matrix
#define matrix
#include<vector>
class matrix{
public:
     matrix()=default;
     matrix(const std::vector<std::vector<int> >);
     matrix(rows,columns,const std::vector<std::vector<int> >);
    friend std::istream& read(std::istream&,matrix);
    friend std::ostream& print(std::ostream&,const matrix);
    friend matrix& adj(const matrix);
    friend matrix& inverse(const matrix);

private:
    unsigned rows=0,columns=0;
    std::vector<std::vector<int> > elements;
};
#endif // Matrix
*/
matrix(const  std::vector<const std::vector<int> > &v)::rows(v.size()),columns(v[0].size())//Cannot do Direct Initialization
{
    for(auto i=0;i!=rows;++i)
        elements.push_back(vector<int>());
    for(auto i=0;i!=rows;++i)
        for(auto j=0;j!=columns;++j)
            elements[i].push_back(v[i][j]);
}
matrix(unsigned r,unsigned c,const std::vector<const std::vector<int> > &v)::rows(r),columns(c)
{
     for(auto i=0;i!=rows;++i)
        elements.push_back(vector<int>());
    for(auto i=0;i!=rows;++i)
        for(auto j=0;j!=columns;++j)
            elements[i].push_back(v[i][j]);
}
std::istream& read(std::istream& is,matrix &A)
{
    is>>A.rows>>A.columns;
    for(auto i=0;i!=A.rows;++i)
        elements.push_back(vector<int>());
    for(auto i=0;i!=A.rows;++i)
        for(auto j=0;j!=A.columns;++j)
            {
                is>>temp;
                A.elements[i].push_back(temp);
            }
return is;
}
std::ostream& print(std::ostream &os,matrix &A)
{
    for(auto i=0;i!=A.rows;++i)
        {

        for(auto j=0;j!=A.columns;++j)
            os>>A.elements[i][j];
        os>>"\n";
        }
}
