#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

int main()
{
	FILE * fp;
	// Change the second parameter to either w(for write/create), a(for append/add text), r(for read the file)
	// w, a, r got modes e.g. w+
	fp = fopen("test.txt", "w+");

	// w+ mode - writing adding text, at a certain place in file.
	//fputs("I ate somehting really bad today!", fp);
	//fseek(fp, 23, SEEK_SET);
	//fputs("good yesterday", fp);

	// Write code (w)
	//fprintf(fp, "Test Message\n\nHello my name is blank and i love blank.");

	// Append Code (a)
	//fprintf(fp, "\nTest Message2\n\nI just added this text...\n YOLO!\nKnock knock... who's there?... Daisy... Daisy who?.... Daisy Me Rollin!");

	// Read Code (r)
	//char readLine[150];

	//while(!feof(fp))
	//{
	//    fgets(readLine, 150, fp);
	//    puts(readLine);
	//}


	fclose(fp);

	return 0;
}
