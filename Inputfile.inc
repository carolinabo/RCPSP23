set r / 
r2
/; 

set j / 
Q 
j10
j11
j12
j13
j14
j15
j16
j17
j18
S 
/; 

set t /t0*t33/; 

VN(h,j)=no; 
VN('Q','j10')=yes;
VN('j10','S')=yes;
VN('Q','j11')=yes;
VN('j11','S')=yes;
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

VN('j10','j11')=yes; 
VN('j10','j12')=yes; 
VN('j11','j13')=yes; 
VN('j12','j16')=yes; 
VN('j13','j14')=yes; 
VN('j13','j15')=yes; 
VN('j14','j17')=yes; 
VN('j14','j18')=yes; 
VN('j15','j16')=yes; 
VN('j16','j18')=yes; 

parameter 
d(j) / 
Q   0
S   0
j10   2
j11   4
j12   3
j13   7
j14   2
j15   1
j16   5
j17   2
j18   7
/
FEZ(j) /
Q   0
S   0
j10   2
j11   6
j12   5
j13   13
j14   15
j15   14
j16   19
j17   17
j18   26
/
SEZ(j) /
Q   0
S 33
j10   2
j11   6
j12   14
j13   13
j14   19
j15   14
j16   19
j17   26
j18   26
/
Kap(r) /
r2   9
/;

k(j,r)=0;
k('j10','r2')=1;
k('j11','r2')=2;
k('j12','r2')=6;
k('j13','r2')=1;
k('j14','r2')=1;
k('j15','r2')=2;
k('j16','r2')=2;
k('j17','r2')=1;
k('j18','r2')=8;
