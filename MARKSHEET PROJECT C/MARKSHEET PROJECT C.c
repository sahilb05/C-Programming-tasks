#include <stdio.h>
 
int main()
{
    char name[30],mot[10],med[10];
    int pr ;
    int i,rollno,subject,marks,obtained,EP,EC,BEE,BCE,M1,EG;
    int pr_EP,pr_EC,pr_BEE,pr_EG,pr_CMS,pr_CPS;
    int a,b,c,d,e,f,g,h;
    int Total;
    float per;
   
    printf("\nEnter student name :");
    gets(name);
    printf("\nEnter Roll no. of student :");
    scanf("%d",&rollno);
    printf("\nEnter Mother's Name :");
    scanf("%s",&mot);
    printf("\nEnter Medium :");
    scanf("%s",&med);
    printf("\nEnter marks of Applied Mathematics out of 100:");
    scanf("%d",&M1);
     if(M1>100)
   {
                   printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&M1);
   }
     
    printf("\nEnter marks of Engineering Physics out of 50:");
    scanf("%d",&EP);
    if(EP>50)  
   {
                      printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&EP);
   }
    printf("\nEnter marks of Engineering Chemistry out of 50:");
    scanf("%d",&EC);
    if(EC>50)
   {   
        printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&EC);
   }
    printf("\nEnter marks of Basic Civil Eng. out of 50:");
    scanf("%d",&BCE);
    if(BCE>50)
   { 
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&BCE);
   }
    printf("\nEnter marks of Basic Electrical Eng. out of 50:");
    scanf("%d",&BEE);
    if(BEE>50)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&BEE);
   }
    printf("\nEnter marks of Engineering Graphics out of 50:");
    scanf("%d",&EG);
    if(EG>50)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&EG);
   }
    printf("\nEnter marks of Engineering Physics (PR) out of 50:");
    scanf("%d",&pr_EP);
    if(pr_EP>50)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&pr_EP);
   }
    printf("\nEnter marks of Engineering Chemistry (PR) out of 50:");
    scanf("%d",&pr_EC);
    if(pr_EC>50)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&pr_EC);
   }
    
    printf("\nEnter marks of Basic Electrical Eng. (PR) out of 50:");
    scanf("%d",&pr_BEE);
    if(pr_BEE>50)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&pr_BEE);
   }
    printf("\nEnter marks of Engineering Graphics (PR) out of 50:");
    scanf("%d",&pr_EG);
    if(pr_EG>50)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&pr_EG);
   }
    printf("\nEnter marks of Communication Skills (PR) out of 50:");
    scanf("%d",&pr_CMS);
    if(pr_CMS>50)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&pr_CMS);
   }
    printf("\nEnter marks of Computational Skills (PR) out of 25:");
    scanf("%d",&pr_CPS);
    if(pr_CPS>25)
   {
   	    printf("\nInvalid marks ");
        printf("\nPleaase enter your correct marks :");
        scanf("%d",&pr_CPS);
   }
    obtained=M1+EP+EC+BEE+BCE+EG+pr_EP+pr_EC+pr_BEE+pr_EG+pr_CMS+pr_CPS;
    per=obtained*100/625;
    printf("\nObtained marks is %d",obtained);
    printf("\nPercentage is %.2f",per);
        if(per>=80)
        printf("\nGrade = A+");
        else  if(per>=70)
        printf("\nGrade = A");
        else  if(per>=60)
        printf("\nGrade = B");
        else  if(per>=50)
        printf("\nGrade = C");
        else  if(per>=40)
        printf("\nGrade = D");
        else  if(per>=30)
        printf("\nGrade = E");
        else
        printf("\nGrade = FAIL");
         
        int sub=0;
        if(M1<35)
        {
            sub++;
        }
        if(EP<20)
        {
            sub++;
        }
        if(EC<20)
        {
            sub++;
        }
        if(BCE<20)
        {
            sub++;
        }
        if(BEE<20)
        {
            sub++;
        }
        if(EG<20)
        {
            sub++;
        }
        printf("\nYou are fail in %d subject",sub);
        
        int pra=0;
         
        if(pr_EP<20)
        {
            pra++;
        }
        if(pr_EC<20)
        {
            pra++;
        }
        if(pr_BEE<20)
        {
            pra++;
        }
        if(EG<20)
        {
            pra++;
        }
         if(pr_CMS<20)
        {
            pra++;
        }
         if(pr_CPS<10)
        {
            pra++;
        }
        printf("\nYou are fail in %d Practical subject",pra);
        printf("\n****************************************************************************");
        printf("\n\tRASHTRASANT TUKDOJI MAHARAJ NAGPUR UNIVERSITY,NAGPUR");
        printf("\n****************************************************************************");
        printf("\n\tFIRST SEMESTER OF BACHELOR OF ENGINEERING,WINTER-19");
        printf("\n");
        printf("\n\t\t\t\tMARKSHEET");
        printf("\n****************************************************************************");
        printf("\n\t\t\t\tB.E.FIRST YEAR");
        printf("\n............................................................................");
        printf("\n NAME OF STUDENT:%s",name );       
        printf("\t\t\tROLL NO.:%d",rollno);
        printf("\n MOTHER'S NAME':%s",mot);
        printf("\t\t\t\t MEDIUM:%s",med);
        printf("\n............................................................................");
        printf("\nSubjects");   
        printf("\t\t  | Marks"); 
        printf("\t|Practical Marks "); 
        printf("\t|Total Marks");
        printf("\n----------------------------------------------------------------------------");
        a=M1;
        printf("\nApplied Mathematics: ");
        printf("\t  | %d",M1);
        printf("\t\t|  --");
        printf("\t\t\t|  %d",a);
        b=EP+pr_EP;
        printf("\nEngineering Physics: ");
        printf("\t  | %d",EP);
        printf("\t\t|  %d",pr_EP);
        printf("\t\t\t|  %d",b);
        c=EC+pr_EC;
        printf("\nEngineering Chemistry: ");
        printf("\t  | %d",EC);
        printf("\t\t|  %d",pr_EC);
        printf("\t\t\t|  %d",c);
        d=BCE;
        printf("\nBasic Civil Eng.: ");
        printf("\t  | %d",BCE);
        printf("\t\t|  --");
        printf("\t\t\t|  %d",d);
        e=BEE+pr_BEE;
        printf("\nBasic Electrical Eng.: ");
        printf("\t  | %d",BEE);
        printf("\t\t|  %d",pr_BEE);
        printf("\t\t\t|  %d",e);
        f=EG+pr_EG;
        printf("\nEngineering Graphics: ");
        printf("\t  | %d",EG);
        printf("\t\t|  %d",pr_EG);
        printf("\t\t\t|  %d",f);
        g=pr_CMS;
        printf("\nCommunication Skills (PR):");
        printf("| --");
        printf("\t\t|  %d",pr_CMS);
        printf("\t\t\t|  %d",g);
        h=pr_CPS;
        printf("\nComputational Skills (PR):");
        printf("| --");
        printf("\t\t|  %d",pr_CPS);
        printf("\t\t\t|  %d",h);
        printf("\n............................................................................");
        Total =a+b+c+d+e+f+g+h; 
        printf("\nTotal Marks  : ");
        printf("   \t\t\t\t\t\t|  %d",Total );
        printf("\n............................................................................");
        printf("\nPERCENTAGE  : %f",per);
        
        if(per>=80)
        printf("\t\t Grade = A+");
        else  if(per>=70)
        printf("\t\t Grade = A");
        else  if(per>=60)
        printf("\t\t Grade = B");
        else  if(per>=50)
        printf("\t\t Grade = C");
        else  if(per>=40)
        printf("\t\t Grade = D");
        else  if(per>=30)
        printf("\t\t Grade = E");
        else
        printf("\t\t Grade = FAIL");
        printf("\n............................................................................");
        
        printf("\n\t\t\t\tMADE BY SAHIL BHURE");
        printf("\n\t\t\t\t      THANK YOU");
       
        printf("\n****************************************************************************");
    return 0;
}


