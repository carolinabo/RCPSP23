set r / 
r5
/; 

set j / 
Q 
j37
j38
j39
j40
j41
j42
j43
j44
j45
S 
/; 

set t /t0*t33/; 

VN(h,j)=no; 
VN('Q','j37')=yes;
VN('j37','S')=yes;
VN('Q','j38')=yes;
VN('j38','S')=yes;
VN('Q','j39')=yes;
VN('j39','S')=yes;
VN('Q','j40')=yes;
VN('j40','S')=yes;
VN('Q','j41')=yes;
VN('j41','S')=yes;
VN('Q','j42')=yes;
VN('j42','S')=yes;
VN('Q','j43')=yes;
VN('j43','S')=yes;
VN('Q','j44')=yes;
VN('j44','S')=yes;
VN('Q','j45')=yes;
VN('j45','S')=yes;

VN('j37','j38')=yes; 
VN('j37','j39')=yes; 
VN('j38','j40')=yes; 
VN('j39','j43')=yes; 
VN('j40','j41')=yes; 
VN('j40','j42')=yes; 
VN('j41','j44')=yes; 
VN('j41','j45')=yes; 
VN('j42','j43')=yes; 
VN('j43','j45')=yes; 

parameter 
d(j) / 
Q   0
S   0
j37   2
j38   4
j39   3
j40   7
j41   2
j42   1
j43   5
j44   2
j45   7
/
FEZ(j) /
Q   0
S   0
j37   2
j38   6
j39   5
j40   13
j41   15
j42   14
j43   19
j44   17
j45   26
/
SEZ(j) /
Q   0
S 33
j37   2
j38   6
j39   14
j40   13
j41   19
j42   14
j43   19
j44   26
j45   26
/
Kap(r) /
r5   9
/;

k(j,r)=0;
k('j37','r5')=1;
k('j38','r5')=2;
k('j39','r5')=6;
k('j40','r5')=1;
k('j41','r5')=1;
k('j42','r5')=2;
k('j43','r5')=2;
k('j44','r5')=1;
k('j45','r5')=8;
