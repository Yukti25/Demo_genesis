#include"../inc/Employee.h"
#include<malloc.h>
#include<stdlib.h>
int newatt(info *emp,int empid,int noofdatt)
 {
 	 info *new_att;
     new_att=(info *)malloc(sizeof(info));
     new_att->e_id =empid;
     //new_att->noofdatt = noofdatt;
 	/*if(att==NULL)
    {
        return 0;
    } */
      
      if(noofdatt>=27)
      {
      	return 0;
	  }
      int r= (noofdatt)*100;
      int k= r/26;
      return k;
      //printf("Attendance report: ");
    //}
 }
  int newlea(info *emp,int empid,int noofleaves)
 {
 	info *new_att;
     new_att=(info *)malloc(sizeof(info));
     new_att->e_id =empid;
     //new_att->no_leaves = noofleaves;
    /*if(att==NULL)
    {
        return 0;
    }
    else
    { */
    if(noofleaves>=24)
    {
    	return 0;
	}
		
      int s=24-(noofleaves);	
      return s;
      //printf("Number of leaves left: ");
    //}
     
 }
