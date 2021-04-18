#include <stdio.h>

int main()
{
    char patient;
    int  pno, rmcode; 
    float dfee, mfee, tbill;
    
    
        printf ("Patient No: ");
        scanf ("%i",&pno);
	    printf ("EMPLOYEE NAME: ");
        scanf ("%s",&patient);
	    printf ("Doctor's Fee': ");
        scanf ("%f",&dfee);
	    printf ("Miscellaneous Fee ");
        scanf ("%f",&mfee);
	    printf ("Room Code: ");
        scanf ("%i",&rmcode);

        switch (rmcode)
        {
        case 1:
            printf ("ROOM: Ward");
            break;
        case 2:
            printf ("ROOM: Semi-ward");
            break;
        case 3:
            printf ("ROOM: Private");
            break;   
        case 4:
            printf ("ROOM: Out-Patient");
            break; 
        default: 
            printf ("INVALID INPUT");
            break;
        }
        

		tbill = dfee + mfee;            
            
	    printf ("\nTotal Bill: %.2f", tbill);
	       
	       
	    return 0;
}
