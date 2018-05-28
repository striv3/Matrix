#include"matrix_Class1.hpp"
#include<vector>
#include<iostream>

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
matrix::std::istream& read(std::istream& is,matrix &A)
{
    is>>A.rows>>A.columns;
    for(auto i=0;i!=A.rows;++i)
        elements.push_back(vector<int>());
    int temp;
    for(auto i=0;i!=A.rows;++i)
        for(auto j=0;j!=A.columns;++j)
            {
                is>>temp;
                A.elements[i].push_back(temp);
            }
return is;
}
matrix::std::ostream& print(std::ostream &os,matrix &A)
{
    for(auto i=0;i!=A.rows;++i)
        {

        for(auto j=0;j!=A.columns;++j)
            os<<A.elements[i][j];
        os<<"\n";
        }
}
matrix& operator=(const matrix&obj)
{
    rows=obj.rows;
    columns=obj.columns;
     for(auto i=0;i!=rows;++i)
        elements.push_back(vector<int>(columns));
    elements=obj.elements;
    return *this;
}
matrix& operator+=(const matrix&B)
{
    elements+=B.elements;
    return *this;
}
matrix operator+(const matrix&A,const matrix&B)
{
    matrix sum=A;
    sum+=B;
    return sum;

}
matrix operator*(const matrix&A,const matrix&B)
{
    matrix C;
    unsigned a=A.rows,b=A.columns,c=B.columns;
    for(unsigned i=0,j=0;i!=a && j!=c;j==c-1?j=0,++i:++j)
        for(unsigned k=0;k!=b;++k)
            C[i][j]=A[i][k]+B[k][j];
    return C;
}
    bool operator==(const matrix&A,const matrix&B)
    {
        return (A.rows==B.rows&& A.columns==B.columns && (A.elements==B.elements) );
    }
    bool operator!=(const matrix&,const matrix&)
    {
        return !(A==B);
    }
    matrix operator/(const matrix&,int n)
    {
        matrix C;
        unsigned a=A.rows,b=A.columns,c=B.columns;
        for(unsigned i=0,j=0;i!=a && j!=c;j==c-1?j=0,++i:++j)
            C[i][j]=A[i][j]/n;
        return C;
    }
