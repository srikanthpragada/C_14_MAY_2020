
struct time
{
 int hours, mins, secs;
};

int compare_times(struct time t1, struct time t2)
{
   return t1.hours == t2.hours && t1.mins == t2.mins && t1.secs == t2.secs;
}

main()
{
 struct time t1 = {17,30,5};  // Initialize structure variable
 struct time t2;

   t2 = t1; // assignment between two variables

   if (compare_times(t1,t2))
        printf("Same!\n");

   printf("%02d:%02d:%02d", t1.hours, t1.mins, t1.secs);

}

