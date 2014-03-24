set r / 
r9
/; 

set j / 
Q 
j12
j13
j14
j15
j16
j17
j18
j19
j20
S 
/; 

set t /t0*t33/; 

VN(h,j)=no; 
VN('Q','j12')=yes;
VN('j12','S')=yes;
VN('Q','j13')=yes;
VN('j13','S')=yes;
VN('Q','j14')=yes;
VN('j14','S')=yes;
VN('Q','j15')=yes;
VN('j15','S')=yes;
VN('Q','j16')=yes;
VN('j16','S')=yes;
VN('Q','j17')=yes;
VN('j17','S')=yes;
VN('Q','j18')=yes;
VN('j18','S')=yes;
VN('Q','j19')=yes;
VN('j19','S')=yes;
VN('Q','j20')=yes;
VN('j20','S')=yes;

VN('j12','j13')=yes; 
VN('j12','j14')=yes; 
VN('j13','j15')=yes; 
VN('j14','j18')=yes; 
VN('j15','j16')=yes; 
VN('j15','j17')=yes; 
VN('j16','j19')=yes; 
VN('j16','j20')=yes; 
VN('j17','j18')=yes; 
VN('j18','j20')=yes; 

parameter 
d(j) / 
Q   0
S   0
j12   2
j13   4
j14   3
j15   7
j16   2
j17   1
j18   5
j19   2
j20   7
/
FEZ(j) /
Q   0
S   0
j12   2
j13   6
j14   5
j15   13
j16   15
j17   14
j18   19
j19   17
j20   26
/
SEZ(j) /
Q   0
S 33
j12   2
j13   6
j14   14
j15   13
j16   19
j17   14
j18   19
j19   26
j20   26
/
Kap(r) /
r9   9
/;

k(j,r)=0;
k('j12','r9')=1;
k('j13','r9')=2;
k('j14','r9')=6;
k('j15','r9')=1;
k('j16','r9')=1;
k('j17','r9')=2;
k('j18','r9')=2;
k('j19','r9')=1;
k('j20','r9')=8;
