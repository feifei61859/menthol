// Run.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Menthol.h"

int _tmain(int argc, char* argv[])
{
	if(argc<2)return 0;
	char* p1=0,*p2=0;
	if(argc>2){
		p1 = argv[2];
	}
	if(argc>3){
		p2 = argv[3];
	}
	Run(argv[1],p1,p2);
	return 0;
}

