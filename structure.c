#include <stdio.h>
#include <string.h>
struct employee
{
	char empnum[50];
	char empname[50];
	char deptname[50];
	char empsalary[50];
	};
	void main()
	{
		struct employee c;
		strcpy(c.empnum,"112,113,114,115\n");
		strcpy(c.empname,"suraj,rahul,Jash,ahana\n");
		strcpy(c.deptname,"Java,python,c++,Dbms\n");
		strcpy(c.empsalary,"10,000\n");
		printf("empnum:%s\n",c.empnum);
		printf("empname:%s\n",c.empname);
		printf("deptname:%s\n",c.deptname);
		printf("empsalary:%s\n",c.empsalary);
		}
	
		
	
	
	
 
