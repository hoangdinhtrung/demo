#include <iostream>
using namespace std;
class lop_sv
{
    static int so_sv;
public:
   lop_sv() {so_sv++;}
   ~lop_sv() {so_sv--;}
   static void in_so_sv()
    {cout<<"\nSo sinh vien hien tai la:"<< so_sv;}

};
int lop_sv::so_sv = 0;
main()
{   lop_sv a[5],b,c;
    a[0].in_so_sv();
    lop_sv *d = new lop_sv;
    a[1].in_so_sv(); d -> in_so_sv();
    b.~lop_sv(); c.~lop_sv(); a[4].~lop_sv();
    a[2].in_so_sv();
    }