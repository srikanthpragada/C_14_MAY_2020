
// User-defined data type
struct student
{
   // members
   char name[20];
   int english, maths;
};

main()
{
  struct student s1;

    s1.english = 90;
    s1.maths = 95;
    strcpy(s1.name,"Bill");



}
