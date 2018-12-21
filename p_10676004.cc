
#include<iostream>
#include<stdlib.h>
#include<iomanip>


using namespace std;


int main()
{ 

int edStaffL=0,stdMenu=0,editS,editS1,p=0,m,mm=0,h=0,e,del,z=0,x=0, i=0,j=0,r=0,c=0,cNo[10],print,addStaff=0,v0=0,v=0, eSLoop=0;


char addStd, stdToMain;


string editS1L,bk, staffIntro, intro,stdIntro;

class student
{ public:
  string name[10];
  string LName[10];
  string dob[10];
  string ID[10];
  string sex[10];
  string courses[10][10];
  double gpt[10][10];
  double score[10][10];
  string gpa[10][10];
};


class staff
{ public:
    string FName[10];
    string LName[10];
    int age[10];
    string courses[10][10];
    string ID[10];
    string sex[10];
    int CNum[10];
};
 
 
 staff t;
 student k;
 
 while(p<=100)
     {
cout<<"###############_WElCOME_###############"<<endl;
cout<<"Pick an Option by entering it's corresponding number"<<endl;     	
cout<<"1.Student section.\n";
cout<<"2.Staff section.\n";
cout<<"Enter: ";
cin>>intro;
if(intro=="1")
 {   while(stdMenu<=10)
     {
     system("cls");
  cout<<"1. Add a new student and assign him or her to courses.\n";
  cout<<"2. Edit a student and his or her courses.\n";
  cout<<"3. Delete a student from the records.\n";
  cout<<"4. Print the Academic record of a particular student.\n";
  cout<<"Enter any other key to go back.\n";
  cout<<"Enter: ";	
  cin>>stdIntro;
  if(stdIntro=="1")
    {while (z<=10)
        {
    system("cls");
    i++;
   	
    cout<<"Student 1\n";
    cout<<"Enter student's "<<i<<"'s first name\n";
    cin>>k.name[i-1];
    cout<<"Enter student's "<<i<<"'s last name\n";
    cin>>k.LName[i-1];
    cout<<"Enter student's "<<i<<"'s date of birth(format:dd/mm/yy)\n";
    cin>>k.dob[i-1];
    cout<<"Enter student's "<<i<<"'s ID number\n";
    cin>>k.ID[i-1];
    
	cout<<"Enter student' "<<i<<"'s Gender(  1. male or   2. for female)\n";
    cin>>k.sex[i-1];
    if((k.sex[i-1])=="1")
        k.sex[i-1]="MALE";
    else if ((k.sex[i-1])=="2")
        k.sex[i-1]="FEMALE";
    
	
	cout<<"Enter the number of courses  #NB-max is 7\n";
    cin>>cNo[i-1];
    cout<<"Enter the course Names/codes.  (after each course, press the enter key)\n";
    for(r=0;r<cNo[i-1];r++)
      cin>>k.courses[r][i-1];
    for(int v=0;v<cNo[i-1];v++)
      {
   
    cout<<"Enter the exam score for "<<k.courses[v][i-1]<<endl;
    cin>>k.score[v][i-1];
    
	if((k.score[v][i-1])>=80)
     {(k.gpa[v][i-1])= "A";}
     
    else if((k.score[v][i-1])>=75&&(k.score[v][i-1])<80)
          {(k.gpa[v][i-1])="B+";}
          
    else if((k.score[v][i-1])>=70&&(k.score[v][i-1])<75)
           {(k.gpa[v][i-1])="B";}
           
    else if((k.score[v][i-1])>=65&&(k.score[v][i-1])<70)
           {(k.gpa[v][i-1])="C+";}
           
    else if((k.score[v][i-1])>=60&&(k.score[v][i-1])<65)
           {(k.gpa[v][i-1])="C";}
           
    else if((k.score[v][i-1])>=55&&(k.score[v][i-1])<60)
           {(k.gpa[v][i-1])="D";}
           
    else if((k.score[v][i-1])>=50&&(k.score[v][i-1])<55)
            {(k.gpa[v][i-1])="E";}
        
    else if((k.score[v][i-1])>=45&&(k.score[v][i-1])<50)
            {(k.gpa[v][i-1])="F";}
            
      }
      GPA[i-1]=totGpt[i-1]/totCredit[i-1];
    cout<<"Data of "<<k.name[i-1]<<" stored successfully\n";
    cout<<"Do you want to add another student or print "<<k.name[i-1]<<"'s academic record?\n";
    cout<<"Enter \'1\', for add or \'2\' for printing of academic record\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='2')
     {   system("cls");
         cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student  ID-number: "<<k.ID[i-1]<<endl; 
cout<<"DOB: "<<k.dob[i-1]<<endl;
cout<<"Sex: "<<k.sex[i-1]<<endl;
cout<<"Name: "<<k.name[i-1]<<" "<<k.LName[i-1]<<endl;

cout<<"Academic year:2018/2019          First semester                                   \n"<<endl;
cout<<"COURSE                                                             Score          GRADE                             \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][i-1]<<"                                                    \t            "<<k.score[r][i-1]<<"  \t   "<<k.gpa[r][i-1]<<"  \t   "<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     }
    else if(addStd=='1')
          {continue;}
    else
    {   system("cls");
        break;
    }
       z++;
        }
    }
    else if(stdIntro=="2")
    { while(x<=10)
          { system("cls");
           cout<<"Enter the number of the student whose details you want to edit( eg. (1,2,3))\n";
           cout<<"Note not all details can be edited.\n";
           cout<<"Enter 0 to go back\n";
           cin>>editS;
           if (editS==0)
            break;
           else
           { system("cls");
             cout<<"What details of student "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=10)
                    {cout<<"Enter student "<<editS<<"'s new first name\n";
                     cin>>k.name[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>k.LName[editS-1];
                     cout<<"Name edit success, the student is now referred to as "<<k.name[editS-1]<<" "<<k.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } 

             }
             else if(editS1==2)
                   { system("cls");
                    cout<<"Note evrything must be entered from scratch again.\n";
    				cout<<"How many courses will you be doing?(maximum is 7)\n";
    cin>>cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<cNo[i-1];r++)
      {cin>>k.courses[r][editS-1];
      }
    for(int v=0;v<cNo[i-1];v++)
      {
    
    cout<<"Enter the exam score for "<<k.courses[v][editS-1]<<endl;
    cin>>k.score[v][editS-1];
    if((k.score[v][editS-1])>=80)
     {(k.gpa[v][editS-1])= "A";}
     
    else if((k.score[v][editS-1])>=75&&(k.score[v][editS-1])<80)
          {(k.gpa[v][editS-1])="B+";}
          
    else if((k.score[v][editS-1])>=70&&(k.score[v][editS-1])<75)
           {(k.gpa[v][editS-1])="B";}
           
    else if((k.score[v][editS-1])>=65&&(k.score[v][editS-1])<70)
           {(k.gpa[v][editS-1])="C+";}
           
    else if((k.score[v][editS-1])>=60&&(k.score[v][editS-1])<65)
           {(k.gpa[v][editS-1])="C";}
           
    else if((k.score[v][editS-1])>=55&&(k.score[v][editS-1])<60)
           {(k.gpa[v][editS-1])="D";}
           
    else if((k.score[v][editS-1])>=50&&(k.score[v][editS-1])<55)
            {(k.gpa[v][editS-1])="E";}
            
    else if((k.score[v][editS-1])>=45&&(k.score[v][editS-1])<50)
            {(k.gpa[v][editS-1])="F";}
           
      }
      
      cout<<"Data of "<<k.name[editS-1]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }
          }

          x++;
          }
    } 
     else if(stdIntro=="3")
    { while(e<=10)
          { system("cls");
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           
           GPA[del-1]=0;
           k.name[del-1]=" ";
           k.LName[del-1]=" ";
           k.dob[del-1]=" ";
           k.ID[del-1]=" ";
           k.sex[del-1]=" ";
           for(int d=0;d<cNo[del-1];d++)
             {k.courses[d][del-1]=" ";
              k.gpt[d][del-1]=0;
              k.credit[d][del-1]=0;
              k.score[d][del-1]=0;
              k.gpa[d][del-1]=" ";
              cout<<"student's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             }
             e++;
            } //end stdIntro 3 loop
          }//end stdIntro 3 if
          else if(stdIntro=="4")
           {system("cls");
           while(h<=10)
                {
            cout<<"Enter the student number of the student whose Academic record you wish to print\n";
            cin>>print;
            cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student  ID-number: "<<k.ID[i-1]<<endl; 
cout<<"DOB: "<<k.dob[i-1]<<endl;
cout<<"Sex: "<<k.sex[i-1]<<endl;
cout<<"Name: "<<k.name[i-1]<<" "<<k.LName[i-1]<<endl;

cout<<"Academic year:2018/2019          First semester                                   \n"<<endl;
cout<<"COURSE                                                             Score          GRADE                             \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][i-1]<<"                                                    \t            "<<k.score[r][i-1]<<"  \t   "<<k.gpa[r][i-1]<<"  \t   "<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
           else
            { system("cls");
                break;
            }
            stdMenu++;}
   }//end stdMenu if
   else if(intro=="2")
         {

          while(mm<=10)
        {system("cls");
         cout<<"To make a choice enter number corresponding to the option"<<endl;
		   
         cout<<"1. Add staff\n";
         cout<<"2. Edit staff\n";
         cout<<"3. Delete staff\n";
         cout<<"4. Print the details of a particular staff member\n";
         cout<<"Enter any other key to go back\n";
         cout<<"NOTE! you can't go for option 2 or 3 if you haven't added any staff member\n";
         cin>>staffIntro;
         if (staffIntro=="1")
            { while(addStaff<=10)
                { system("cls");
                    v0++;
   
    cout<<"Enter staff "<<v0<<"'s first name\n";
    cin>>t.FName[v0-1];
    cout<<"Enter staff "<<v0<<"'s last name\n";
    cin>>t.LName[v0-1];
    cout<<"Enter staff "<<v0<<"'s age\n";
    cin>>t.age[v0-1];
    cout<<"Enter staff "<<v0<<"'s ID number\n";
    cin>>t.ID[v0-1];
    cout<<"Enter staff "<<v0<<"'s sex(1. for male  or 2. for female)\n";
    cin>>t.sex[v0-1];
    if((t.sex[v0-1])=="1")
        t.sex[v0-1]="MALE";
    else if ((t.sex[v0-1])=="2")
        t.sex[v0-1]="FEMALE";
    cout<<"How many courses will you be lecturing?(max is 5)\n";
    cin>>t.CNum[v0-1];
    cout<<"Enter the course codes/names after each course and press the enter key)\n";
    for(r=0;r<t.CNum[v0-1];r++)
      cin>>t.courses[r][v0-1];
        system("cls");
       cout<<"Your data has been stored successfully\n";
    cout<<"Do you want to add another staff member or print "<<t.FName[v0-1]<<"'s details?\n";
    cout<<"Enter '1.', for add or '2.' for printing of details\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='2')
     {   system("cls");
         
         cout<<"Name: "<<t.FName[v0-1]<<" "<<t.LName[v0-1]<<endl;
         cout<<"Age: "<<t.age[v0-1]<<endl;
         cout<<"Courses: ";
          for(r=0;r<t.CNum[v0-1];r++)
      cout<<t.courses[r][v0-1]<<",";
      cout<<endl;
      cout<<"ID: "<<t.ID[v0-1]<<endl;
      cout<<"Sex: "<<t.sex[v0-1]<<endl;
     cout<<"Enter any key to return to staff menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     }
    else if(addStd=='1')
          continue;
    else
    {   system("cls");
        break;
    }
       addStaff++;
        } 
            } 
            else if(staffIntro=="2")
            {
            while(edStaffL<=10)
          { system("cls");
           cout<<"Enter the number of the staff member whose details you want to edit( eg.(1,2,3))\n";
           cout<<"Note not all details can be changed.\n";
           cout<<"Enter 0 to go back\n";
           cin>>editS;
           if (editS==0)
            break;
           else
           { system("cls");
             cout<<"What details of staff "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=100)
                    {cout<<"Enter staff "<<editS<<"'s new first name\n";
                     cin>>t.FName[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>t.LName[editS-1];
                     cout<<"Name edit success, the staff member is now referred to as "<<t.FName[editS-1]<<" "<<t.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } 

             }
             else if(editS1==2)
                   { system("cls");
                    cout<<"Note your are to enter the staff's details from scratch again.\n";
                    cout<<"How many courses will You be lecturing now?(maximum is 5)\n";
    cin>>t.CNum[v0-1];
    cout<<"Enter the course codes/names after each course and press the enter key)\n";
    for(r=0;r<t.CNum[i-1];r++)
      {cin>>t.courses[r][editS-1];
      }

      cout<<"Your Data has been altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }
          }

          x++;
          }

            }
            else if(staffIntro=="3")
            { while(e<=10)
          { system("cls");
           cout<<"Enter the number of the staff whose records you want to delete(eg.(1,2,3))\n";
           cout<<"Enter: ";
           
		   cin>>del;
           t.FName[del-1]=" ";
           t.LName[del-1]=" ";
           t.ID[del-1]=" ";
           t.sex[del-1]=" ";
           t.age[del-1]=0;
           for(int d=0;d<t.CNum[del-1];d++)
             t.courses[d][del-1]=" ";

              cout<<"staff member's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             e++;
            } 
          }
          else if (staffIntro=="4")
            {system("cls");
           while(h<=10)
                {
            cout<<"Enter the number of the staff member whose details you wish to print\n";
            cout<<"Enter: "<<endl;
            cin>>print;
           system("cls");
         
         cout<<"Name: "<<t.FName[print-1]<<" "<<t.LName[print-1]<<endl;
         cout<<"Age: "<<t.age[print-1]<<endl;
         cout<<"Courses: ";
          for(r=0;r<t.CNum[print-1];r++)
      cout<<t.courses[r][print-1]<<",";
      cout<<endl;
      cout<<"ID: "<<t.ID[print-1]<<endl;
      cout<<"Sex: "<<t.sex[print-1]<<endl;
     cout<<"Enter any key to return to student menu\n";
     cin>>stdToMain;
     system("cls");
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
            else
            { system("cls");
                break;}
         mm++;
        }//end staff intro loop
      }//end staffIntro if

 p++;}//end main menu loop
}//main prog
