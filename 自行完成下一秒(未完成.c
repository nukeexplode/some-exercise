 #include <stdio.h>
struct time{
	int hour;
	int mins;
	int secs;
};
int main()
{
	struct time testtimes[5] = {
		{11,59,59}, {12,0,0}, {1,29,59}, {23,59,59}, {19,12,27}
	};
	int i;
	
	for ( i=0; i<5; ++i ) {
		printf("%.2i %.2i %.2i"
			, testtimes[i].hour, testtimes[i].mins, testtimes[i].secs);
	}
	
	testtimes[i] = timeupdates(testtime[i]);
	
	printf("%.2i %.2i %.2i", testtimes[i].hour, testtimes[i].mins, testtimes[i].secs);
	
	system("pause");
	return 0;
}

struct time timeupdates(struct time now)
{
	++secs;
	if( secs == 60 && mins == 59) {
		
	}else{
		secs++;
	}
}