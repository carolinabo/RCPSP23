set r / 
r1
/; 

set j / 
Q 
j1
j2
j3
j4
j5
j6
j7
j8
j9
S 
/; 

set t /t0*t33/; 

VN(h,j)=no; 
VN('Q','j1')=yes;
VN('j1','S')=yes;
VN('Q','j2')=yes;
VN('j2','S')=yes;
VN('Q','j3')=yes;
VN('j3','S')=yes;
VN('Q','j4')=yes;
VN('j4','S')=yes;
VN('Q','j5')=yes;
VN('j5','S')=yes;
VN('Q','j6')=yes;
VN('j6','S')=yes;
VN('Q','j7')=yes;
VN('j7','S')=yes;
VN('Q','j8')=yes;
VN('j8','S')=yes;
VN('Q','j9')=yes;
VN('j9','S')=yes;

VN('j1','j2')=yes; 
VN('j1','j3')=yes; 
VN('j2','j4')=yes; 
VN('j3','j7')=yes; 
VN('j4','j5')=yes; 
VN('j4','j6')=yes; 
VN('j5','j8')=yes; 
VN('j5','j9')=yes; 
VN('j6','j7')=yes; 
VN('j7','j9')=yes; 

parameter 
d(j) / 
Q   0
S   0
j1   2
j2   4
j3   3
j4   7
j5   2
j6   1
j7   5
j8   2
j9   7
/
FEZ(j) /
Q   0
S   0
j1   2
j2   6
j3   5
j4   13
j5   15
j6   14
j7   19
j8   17
j9   26
/
SEZ(j) /
Q   0
S 33
j1   2
j2   6
j3   14
j4   13
j5   19
j6   14
j7   19
j8   26
j9   26
/
Kap(r) /
r1   9
/;

k(j,r)=0;
k('j1','r1')=1;
k('j2','r1')=2;
k('j3','r1')=6;
k('j4','r1')=1;
k('j5','r1')=1;
k('j6','r1')=2;
k('j7','r1')=2;
k('j8','r1')=1;
k('j9','r1')=8;
