a)unsigned int values[SIZE]={2,4,6,8,10};
b)unsigned int *vPtr;
c)for(size_t i=0;i<SIZE;++i)
cout<<"values["<<i<<"]="<<values[i]<<'\n';
d)vPtr=values;
  vPtr=&values[0];
e)for(size_t j=0;j<SIZE;++j)
cout<<"*vPtr+"<<j<<")="<<*(bPtr+j)<<'\n';
f)for(size_t k=0;k<SIZE;++k)
cout<<"*(values+"<<k<<")="<<*(values+k)<<'\n';
g)for(size_t m=0;m<SIZE;++m)
cout<<"vPtr["<<m<<"]="<<vPtr[m]<<'\n';
h)values[4];
*(values+4);
vPtr[4];
*(vPtr+4);
i)1002500+2*3=1002506;
  存储的值是8；
j)1002500;
  存储的值是2;
