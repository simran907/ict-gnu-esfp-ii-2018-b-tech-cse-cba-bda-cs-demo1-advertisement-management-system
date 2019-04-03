#include"iostream"
#include"fstream"
#include"cstring"
#include"iomanip"
#include<string.h>
#include<stdlib.h>
using namespace std;
ofstream fout("PROJECT.txt",ios::out|ios::binary);
ifstream fin("PROJECT.txt",ios::in);
class AMS
{
public:
    int add_id,add_type,no_of_times_played,no_of_actors,add_duration;
    char props_used[50];
    char add_shooting_places[1000],add_actor[100];
    long eye_balls_collected;
    void getadd()
    {
        cout<<"Enter Ad ID:";
        cin>>add_id;
        fout<<"Enter Ad ID:";
        fout<<add_id<<endl;
        cout<<"Enter Ad Type(1.Emotional 2.Humorous 3.Musical 4.Educational):";
        cin>>add_type;
        fout<<"Enter Ad Type(1.Emotional 2.Humorous 3.Musical 4.Educational):";
        fout<<add_type<<endl;
        cout<<"Enter Total Viewers:";
        cin>>eye_balls_collected;
        fout<<"Enter Total Viewers:";
        fout<<eye_balls_collected<<endl;
        cout<<"Enter Number of Times Played:";
        cin>>no_of_times_played;
        fout<<"Enter Number of Times Played:";
        fout<<no_of_times_played<<endl;
        cout<<"Enter Number of Actors:";
        cin>>no_of_actors;
        fout<<"Enter Number of Actors:";
        fout<<no_of_actors<<endl;
        cout<<"Enter Ad Duration:";
        cin>>add_duration;
        fout<<"Enter Ad Duration:";
        fout<<add_duration<<endl;
        cout<<"Enter Props Used:";
        cin>>props_used;
        fout<<"Enter Props Used:";
        fout<<props_used<<endl;
          fflush(stdin);
        cout<<"Enter Shoot Location:";
        cin.getline(add_shooting_places,100);
        fout<<"Enter Shoot Location:";
        fout<<add_shooting_places<<endl;
        cout<<"Enter Actor Name:";
        cin.getline(add_actor,100);
        fout<<"Enter Actor Name:";
        fout<<add_actor<<endl;
        cout<<endl<<endl;
        fout<<endl<<endl;
    }
}add1[5];
class Director:public virtual AMS
{
public:
    int D_id;
    char D_name[25];
    long long int D_contact;
    float D_charge;
    void getdir()
    {
        cout<<"Enter Director ID:";
        cin>>D_id;
        fout<<"Enter Director ID:";
        fout<<D_id<<endl;
        cout<<"Enter Director Name:";
        cin>>D_name;
        fout<<"Enter Director Name:";
        fout<<D_name<<endl;
        cout<<"Enter Director Contact:";
        cin>>D_contact;
        fout<<"Enter Director Contact:";
        fout<<D_contact<<endl;
        cout<<"Enter Director Charge:";
        cin>>D_charge;
        fout<<"Enter Director Charge:";
        fout<<D_charge<<endl;
        cout<<endl<<endl;
        fout<<endl<<endl;
    }
}dir1[5];
class Company:public Director,virtual public AMS
{
public:
    long long int Co_contact;
    char Co_name[25];
    int Co_id,Co_establishment_year;
    void getcomp()
    {
        cout<<"Enter Company ID:";
        cin>>Co_id;
        fout<<"Enter Company ID:";
        fout<<Co_id<<endl;
        cout<<"Enter Company Name:";
        cin>>Co_name;
        fout<<"Enter Company Name:";
        fout<<Co_name<<endl;
        cout<<"Enter Company Establishment Year:";
        cin>>Co_establishment_year;
        fout<<"Enter Company Establishment Year:";
        fout<<Co_establishment_year<<endl;
        cout<<"Enter Company Contact:";
        cin>>Co_contact;
        fout<<"Enter Company Contact:";
        fout<<Co_contact<<endl;

    }
}comp1[5];
int main()
{
    int i=0;
    for(i=0;i<5;i++)
    {
        add1[i].getadd();
    }
    for(i=0;i<5;i++)
    {
        dir1[i].getdir();
    }
    for(i=0;i<5;i++)
    {
        comp1[i].getcomp();
    }
    int x,m;
    m:
    cout<<setw(50)<<"Task Member-1 \n";
    cout<<"******************************************************************************\n";
    cout<<"1) Display all the adds which are having type as 'humourous' or 'emotional'.\n";
    cout<<"2) Display the list of adds which are played more than 5 times and whose duration is less than 40 sec.\n";
    cout<<"3) Display all the adds whose actor is 'Mr. Mohan' and shooting location is 'Mumbai Film Studio'.\n";
    cout<<"------------------------------------------------------------------------------\n\n\n";
    cout<<setw(50)<<"Task Group Member-2\n";
    cout<<"******************************************************************************\n";
    cout<<"4) Display the list of adds directed by the director 'Mr.Shetty' and add type is 'Educational'.\n";
    cout<<"5) Display the complete list of adds which are of the type'Musical' and directed by 'Mr Johar'\n";
    cout<<"------------------------------------------------------------------------------\n\n\n";
    cout<<setw(50)<<"Task Group Member-3\n";
    cout<<"******************************************************************************\n";
    cout<<"6) Display all the adds which are having duration more than 50 sec and no of actors between 3 to 7.\n";
    cout<<"7) Display all the adds along with director name in alphabetical order.\n";
    cout<<"8) Exit:";
    cout<<"------------------------------------------------------------------------------\n\n\n";
    cout<<"Enter the Task Number that you want to Display:";
    cin>>x;
    switch(x)
	{
	       case 1:
            {
                for(i=0;i<5;i++)
                {
                    if(add1[i].add_type==1||add1[i].add_type==2)
                    {
                        cout<<"Entered Ad ID:";
                        cout<<add1[i].add_id<<endl;
                        cout<<"Entered Ad type is:";
						cout<<add1[i].add_type<<endl;
						if(add1[i].add_type==1)
                        {
                            cout<<"Emotional";
                        }
                        else if(add1[i].add_type==2)
                        {
                            cout<<"Humorous";
                        }
                        else if(add1[i].add_type==3)
                        {
                            cout<<"Musical";
                        }
                        else if(add1[i].add_type==4)
                        {
                            cout<<"Educational";
                        }
						cout<<"Entered Total Viewer:";
						cout<<add1[i].eye_balls_collected<<endl;
						cout<<"Entered Number of Times Played:";
						cout<<add1[i].no_of_times_played<<endl;
						cout<<"Entered Number of actor is:";
						cout<<add1[i].no_of_actors<<endl;
						cout<<"Entered Ad Duration is:";
						cout<<add1[i].add_duration<<endl;
						cout<<"Entered Ad Shooting Place:";
						cout<<add1[i].add_shooting_places<<endl;
						cout<<"Entered Ad props is:";
						cout<<add1[i].props_used<<endl;
						cout<<"Enter Actor Name:";
						cout<<add1[i].add_actor<<endl;
						cout<<endl;
                    }
                }
            }
                break;

        case 2:
            {
                for(i=0;i<5;i++)
                {
                    if(add1[i].no_of_times_played >= 5&& add1[i].add_duration<=40)
                    {
                      cout<<"Entered Ad ID:";
                        cout<<add1[i].add_id<<endl;
                        cout<<"Entered Ad type is:";
						cout<<add1[i].add_type<<endl;
						if(add1[i].add_type==1)
                        {
                            cout<<"Emotional";
                        }
                        else if(add1[i].add_type==2)
                        {
                            cout<<"Humorous";
                        }
                        else if(add1[i].add_type==3)
                        {
                            cout<<"Musical";
                        }
                        else if(add1[i].add_type==4)
                        {
                            cout<<"Educational";
                        }
						cout<<"Entered Total Viewer:";
						cout<<add1[i].eye_balls_collected<<endl;
						cout<<"Entered Number of Times Played:";
						cout<<add1[i].no_of_times_played<<endl;
						cout<<"Entered Number of actor is:";
						cout<<add1[i].no_of_actors<<endl;
						cout<<"Entered Ad Duration is:";
						cout<<add1[i].add_duration<<endl;
						cout<<"Entered Ad Shooting Place:";
						cout<<add1[i].add_shooting_places<<endl;
						cout<<"Entered Ad props is:";
						cout<<add1[i].props_used<<endl;
						cout<<"Enter Actor Name:";
						cout<<add1[i].add_actor<<endl;
						cout<<endl;
                    }
                }
            }
              break;
        case 3:
            {
                for(i=0;i<5;i++)
                {
                if(strcmp(add1[i].add_shooting_places,"Mumbai Film Studio")==0||strcmp(add1[i].add_shooting_places,"mumbai film studio")==0&&strcmp(add1[i].add_actor,"mr.mohan")==0)
                {
                     cout<<i<<endl;
                     cout<<"Entered Ad ID:";
                        cout<<add1[i].add_id<<endl;
                        cout<<"Entered Ad type is:";
						cout<<add1[i].add_type<<endl;
						if(add1[i].add_type==1)
                        {
                            cout<<"Emotional";
                        }
                        else if(add1[i].add_type==2)
                        {
                            cout<<"Humorous";
                        }
                        else if(add1[i].add_type==3)
                        {
                            cout<<"Musical";
                        }
                        else if(add1[i].add_type==4)
                        {
                            cout<<"Educational";
                        }
						cout<<"Entered Total Viewer:";
						cout<<add1[i].eye_balls_collected<<endl;
						cout<<"Entered Number of Times Played:";
						cout<<add1[i].no_of_times_played<<endl;
						cout<<"Entered Number of actor is:";
						cout<<add1[i].no_of_actors<<endl;
						cout<<"Entered Ad Duration is:";
						cout<<add1[i].add_duration<<endl;
						cout<<"Entered Ad Shooting Place:";
						cout<<add1[i].add_shooting_places<<endl;
						cout<<"Entered Ad props is:";
						cout<<add1[i].props_used<<endl;
						cout<<"Enter Actor Name:";
						cout<<add1[i].add_actor<<endl;
						cout<<endl;
                }
            }
        }
        break;

       case 4:
            {
                for(i=0;i<5;i++)
                {
                if(strcmp(dir1[i].D_name,"Mr. Shetty")==0||  add1[i].add_type==4)
                {
                     cout<<"Entered Ad ID:";
                        cout<<add1[i].add_id<<endl;
                        cout<<"Entered Ad type is:";
						cout<<add1[i].add_type<<endl;
						if(add1[i].add_type==1)
                        {
                            cout<<"Emotional";
                        }
                        else if(add1[i].add_type==2)
                        {
                            cout<<"Humorous";
                        }
                        else if(add1[i].add_type==3)
                        {
                            cout<<"Musical";
                        }
                        else if(add1[i].add_type==4)
                        {
                            cout<<"Educational";
                        }
						cout<<"Entered Total Viewer:";
						cout<<add1[i].eye_balls_collected<<endl;
						cout<<"Entered Number of Times Played:";
						cout<<add1[i].no_of_times_played<<endl;
						cout<<"Entered Number of actor is:";
						cout<<add1[i].no_of_actors<<endl;
						cout<<"Entered Ad Duration is:";
						cout<<add1[i].add_duration<<endl;
						cout<<"Entered Ad Shooting Place";
						cout<<add1[i].add_shooting_places<<endl;
						cout<<"Entered Ad props is:";
						cout<<add1[i].props_used<<endl;
						cout<<"Enter Actor Name:";
						cout<<add1[i].add_actor<<endl;
						cout<<endl;
                }
            }
            break;
        }

        case 5:
            {
                for(i=0;i<5;i++)
                {
                if(strcmp(dir1[i].D_name,"Mr. Johar")==0||  add1[i].add_type==3)
                {
                     cout<<"Entered Ad ID:";
                        cout<<add1[i].add_id<<endl;
                        cout<<"Entered Ad type is:";
						cout<<add1[i].add_type<<endl;
						if(add1[i].add_type==1)
                        {
                            cout<<"Emotional";
                        }
                        else if(add1[i].add_type==2)
                        {
                            cout<<"Humorous";
                        }
                        else if(add1[i].add_type==3)
                        {
                            cout<<"Musical";
                        }
                        else if(add1[i].add_type==4)
                        {
                            cout<<"Educational";
                        }
						cout<<"Entered Total Viewer:";
						cout<<add1[i].eye_balls_collected<<endl;
						cout<<"Entered Number of Times Played:";
						cout<<add1[i].no_of_times_played<<endl;
						cout<<"Entered Number of actor is:";
						cout<<add1[i].no_of_actors<<endl;
						cout<<"Entered Ad Duration is:";
						cout<<add1[i].add_duration<<endl;
						cout<<"Entered Ad Shooting Place";
						cout<<add1[i].add_shooting_places<<endl;
						cout<<"Entered Ad props is:";
						cout<<add1[i].props_used<<endl;
						cout<<endl;
                }
            }
            break;
        }
		case 6:
  			{
				for(i=0;i<5;i++)
				{
				if(add1[i].no_of_actors>=3&&add1[i].no_of_actors<=7)
				{
					if(add1[i].add_duration>=50)
					{
					    cout<<"Entered Ad ID : ";
						cout<<add1[i].add_id<<endl;
						cout<<"Entered Ad type is : ";
						cout<<add1[i].add_type<<endl;
                        cout<<"Entered Total Viewer : ";
						cout<<add1[i].eye_balls_collected<<endl;
                        cout<<"Entered Number of Times Played : ";
						cout<<add1[i].no_of_times_played<<endl;
                        cout<<"Entered Number of actor is : ";
						cout<<add1[i].no_of_actors<<endl;
						cout<<"Entered Ad Duration is : ";
						cout<<add1[i].add_duration<<endl;
						cout<<"Entered Ad Shooting Place : ";
						cout<<add1[i].add_shooting_places<<endl;
						cout<<"Entered Ad props is : ";
						cout<<add1[i].props_used<<endl;
						cout<<"Enter Actor Name:";
						cout<<add1[i].add_actor<<endl;
						cout<<endl;
						}
					}
				}
				break;
			}
		case 7:
  			{
				for(i=0;i<5;i++)
                {
                cout<<"Entered Ad ID : ";
				cout<<add1[i].add_id<<endl;
				cout<<"Entered Ad type is : ";
				cout<<add1[i].add_type<<endl;
                cout<<"Entered Total Viewer : ";
				cout<<add1[i].eye_balls_collected<<endl;
                cout<<"Entered Number of Times Played : ";
				cout<<add1[i].no_of_times_played<<endl;
				cout<<"Entered Number of actor is : ";
				cout<<add1[i].no_of_actors<<endl;
				cout<<"Entered Ad Duration is : ";
				cout<<add1[i].add_duration<<endl;
				cout<<"Entered Ad Shooting Place : ";
				cout<<add1[i].add_shooting_places<<endl;
				cout<<"Entered Ad props is : ";
				cout<<add1[i].props_used<<endl;
				cout<<"Enter Actor Name:";
                cout<<add1[i].add_actor<<endl;
                cout<<endl;
                cout<<endl;
				}
				char t[30];
				int i,j;
				for(i=0;i<5;i++)
				{
					for(j=0;j<5;j++)
					{
						if(strcmp(dir1[i].D_name,dir1[j].D_name)>0)
						{
							strcpy(t,dir1[i].D_name);
							strcpy(dir1[i].D_name,dir1[j].D_name);
							strcpy(dir1[j].D_name,t);
						}
					}
				}
				for(i=0;i<5;i++)
				{
				    cout<<"Entered Director Name : ";
					cout<<dir1[i].D_name<<"\n";
				}
				break;
			}

        case 8:
            {
               return 0;
            }
            break;
	}
         goto m;
    return 0;
}
