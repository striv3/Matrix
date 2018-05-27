#include"matrix_Class1.hpp"
#include<vector>

matrix::matrix():rows(0),columns(0),elements(vector<vector<int>(0) >(0));{}

matrix::matrix(const  std::vector< std::vector<int> > &v):rows(v.size()),columns(v[0].size())//Cannot do Direct Initialization
{
    for(auto i=0;i!=rows;++i)
        elements.push_back(vector<int>());
    for(auto i=0;i!=rows;++i)
        for(auto j=0;j!=columns;++j)
            elements[i].push_back(v[i][j]);
}
matrix::matrix(unsigned r,unsigned c,const std::vector<const std::vector<int> > &v):rows(r),columns(c)
{
     for(auto i=0;i!=rows;++i)
        elements.push_back(vector<int>());
    for(auto i=0;i!=rows;++i)
        for(auto j=0;j!=columns;++j)
            elements[i].push_back(v[i][j]);

}
matrix::matrix(const matrix&obj):rows(obj.rows),columns(obj.columns),elements(obj.elements);
matrix::istream& read(istream& is,matrix &A)
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
matrix::ostream& print(ostream &os,matrix &A)
{
    for(auto i=0;i!=A.rows;++i)
        {

        for(auto j=0;j!=A.columns;++j)
            os>>A.elements[i][j];
        os>>"\n";
        }
}

