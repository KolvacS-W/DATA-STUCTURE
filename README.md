


2.85 
                 E            M             f                 V
A               2            1.11        0.11           1.11*2^2
B               n           1
.111···    0.111····      1.111···*2^n
C        2^(k-1)-2           1              0           2^(k-1)-2  



2.87
                                        hex          M              E                  V                       D
-0                            0x8000          0                -15                -0                     -0.0
最小的>2的值         0x4001    1025/1024           1                M*2                  2.00195         
512                         0x 6000            1                9                  512                    512.0
最大的非规格化数   0x03ff       1023/1024       -14              1023*2^(-24)      0.000060975516
—∞                          0xfc00
十六进制表示                            59/64              -1                 59/128               0.4609375                        
为3BB0的数



2.88                      A                                    B
           101110001      -9/8              ---------------------

   010110 011      208            0 1110 1010     208   

   1 00111 010     -5/512         1 0000 1000      -5/512               

   0 00000 111     15/2^(17)      0 0000 0000         0

   1 11100 000      -2^13         1 1111 0000        -∞     

   0 10111 100              3/2^8         0 0000 1100       3/2^8
   
           
   
2.95
float_bits float_half(float_bits f)
{   unsigned s=f>>31;
    unsigned exp=f&0x7f800000;
    unsigned frac=f&0x007fffff;
    unsigned x=(frac&0x3==0x3);
    
    
    if(!(exp^0x7f800000))  //exp全1
    { if(!frac)
         return inf;
         else
         return f;
    
    }
    
    else if(!exp)     //exp全为0
        {  frac>>=1;
           if(x)
           frac=frac+1;
           return  (s<<31)|exp|frac;
          
        }
          
      else if((exp>>23)==1)  //exp为00000001
        {    exp=0;
             frac>>=1;
             if(x)
             frac=frac+1;
             return  (s<<31)|exp|frac;
        }
      
          else                 //规范化的值
          {  exp=(exp>>1)&0x7f800000;
             return  (s<<31)|exp|frac;
          }
         
         


}
           
          



3.58
long decode2(long x,long y,long z)
{    long decode2(long x,long y,long z)
{
    int ret;
    y=y-z;
    x=x*y;
    answer=y;
    ret<<=63;
    ret>>=63;
    return answer^x;
}



3.59
//xl,yl 表示x,y的高64位


movq %rdx,%rax      //%rax=y

cqto                 //  是把%rax中的符号位扩展到%rdx中
                              yl=%rdx

movq %rsi,%rcx    // %rcx=x

sarq $63,%rcx         //%rcx右移63位，xl=%rcx

imulq %rax,%rcx         //xl=xl * y

imulq %rsi,%rdx          //yl=yl * x

addq %rdx,%rcx         //xl=xl + yl=yl * x + xl * y//得到ph

mulq %rsi                  //%rax * %rsi=y*x。 //得到pl

addq %rcx,%rdx        

movq %rax,(%rdi)   

movq %rdx,8(%rdi)  


3.60.
A  x：%rdi,     n:%esi,  result:  %rax,  mask:  rdx%
B  初始值：result  x   mask 1
C mask为真
Dmask=mask<<n
E  long loop(long x, int n) {
    long result = 0;
    long mask;
    for (mask = 1; mask != 0; mask = mask << n) {
        result |= (x & mask);
    }
    return result;
}



          
          
           
          
          
          
           
          
          
          
           
          
          
          
           
          
          
          
        
    
     
    
     
           
   
           
   
           
          
          
          
           
          
          
          
           
          
          
          
           
          
          
          
           
          
          
          
