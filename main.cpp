include<bits/stdc++.h>
using namespace std;
public class Flight_Details
{
    protected: 
        int fli_no;
        char airline_name[20];
        int capacity;
        int model;
        
    public: 
        static int Serial_No=0;
        void get_flight_details() //Used for setting values by scanning from user 
        {
            this.Serial_No++;
            cout<<"Enter Flight Number";
            cin>>this.fli_no;
            cout<<"Enter Flight Name";
            cin>>this.airline_name;
            cout<<"Enter Passenge Capaciy of the Flight";
            cin>>this.capacity;
            cout<<"Enter Flight Model";
            cin>>this.model;
             ofstream file; //opening a output stream to file 
  try 
  {
    file.open ("AirPlane_Info.txt"); //Trying to opn the ile if file not found Exception Printed
    file<<this.Serial_No<<this.fli_no<<this.airline_name<<this.capacity<<this.model;  //Writing Data to file
    file<<endl;
    file.close(); //Closing the file after writing the data
  }
  catch (const ofstream::failure& e) {
    cout << "Exception Ocuured while OPENING AirPlane_Info file";
  }
        }
        void set_flight_details(int fno, char fname, int fcap, int fmodel)  //Values could also be set using function instead of scanning fom user
        {
            fli_no=fno;
            strcpy(fname,fli_name);
            capacity=fcap;
            model=fmodel;
            Serial_No++;
 try 
  {
    file.open ("AirPlane_Info.txt"); //Trying to opn the ile if file not found Exception Printed
    file<<this.Serial_No<<this.fli_no<<this.airline_name<<this.capacity<<this.model;  //Writing Data to file
    fil<<endl;
    file.close(); //Closing the file after writing the data
  }
  catch (const ofstream::failure& e) {
    cout << "Exception Ocuured while OPENING AirPlane_Info file";
  }
        }
        void print_flight_details()
        {
            cout<<"Details of Flight"<<" :- "<<Serial_No<<endl;
            cout<<"Flight Number"<<" :- "<<fli_no<<endl<<"Flight Name"<<" :- "<<fli_name<<endl<<"Flight Capaciy"<<" :- "<<capacity<<endl<<"Model"<<" :- "model;
            // Alternatively This could be done by opening a file and reading the values also, but here we are using array of class objects
        }
}
public class Flight_Schedule : public Flight_Details
{
    protected:
      int dd; /* Flight Time and Flight_Schedule Parameters*/
      int mm;
      int yyyy;
      int dep_hh;
      int dep_min;
      int arr_hh;
      int arr_min;
      int j_hrs;// Journey Hours
      char dep_city[25];
      char des_city[25];
    public:
      void get_schedule()
      {
          cout<<"Enter Flight DD MM YYYY"
          cin>>this.dd>>this.mm>>this.yyyy;
          cout<<"Enter Source City and Destination City";
          cin>>this.dep_city>>des_city;
          cout<<"Enter Flight Deparure Time hh mm";
          cin>>this.dep_hh>>this.dep_min;
          cout<<"Enter Journey Hours";
          cin>>this.j_hrs;
          cout<<"Enter Fligth Arrival TIme hh mm";
          cin>>this.arr_hh>>arr_min;
         try 
  {
    file.open ("Airline_Info.txt"); //Trying to opn the ile if file not found Exception Printed
    file<<this.dd<<this.mm<<this.yyyy<<this.dep_hh<<this.dep_min<<this.arr_hh<<this.arr_min<<this.dep_city<<this.des_city;  //Writing Data to file
    file.close(); //Closing the file after writing the data
  }
  catch (const ofstream::failure& e) {
    cout << "Exception Ocuured while OPENING Airline_Info file";
  }
      }
      void set_schedule(int a,int b,int c, int d,int e,int f,int g, int h, char i[], char j[])
      {
          dd=a;
          mm=b;
          yyyy=c;
          dep_hh=d;
          dep_min=e;
          arr_hh=f;
          arr_min=g;
          j_hrs=h
          strcpy(dep_city,i);
          strcpy(des_city,j);
              try 
  {
    file.open ("Airline_Info.txt"); //Trying to opn the ile if file not found Exception Printed
    file<<this.dd<<this.mm<<this.yyyy<<this.dep_hh<<this.dep_min<<this.arr_hh<<this.arr_min<<this.dep_city<<this.des_city;  //Writing Data to file
    file.close(); //Closing the file after writing the data
  }
  catch (const ofstream::failure& e) {
    cout << "Exception Ocuured while OPENING Airline_Info file";
  }
      }
      void print_schedule()
      {
          cout<<"Schedule of Flight"<<" :- "<<Serial_No<<endl;
          cout<<"Souce/Departure City"<< " :- "<<this.dep_city<<endl<<"Time of Departure"<<this.dep_hh<<":"<<this.dep_min<<"hrs"<<"Arival City"<<this.des_city<<endl<<"Arival TIme"<<this.arr_hh<<":"<<this.arr_min<<endl;
          cout<<"Journey Hours"<<this.j_hrs;
          // Alternatively This could be done by opening a file and reading the values also, but here we are using array of class objects to save time
      }
     
}
public class Price : public Flight_Schedule
{
    private:
        float cost;
        char class[15]; //Sore the class of the flight i.e. Economy, Pmium, Buisiness etc.
    public:
        void get_cost()//Ofice use only (to be set by company)
    {
        cout<<"Enter Cost";
        cin>>this.cost;
try 
  {
    file.open ("Airline_Info.txt"); //Trying to opn the ile if file not found Exception Printed
    file<<this.cost;  //Writing Data to file
    file<< endl; //After appending all the details of a flight in single line, newline in file printed
    file.close(); //Closing the file after writing the data
  }
  catch (const ofstream::failure& e) {
    cout << "Exception Ocuured while OPENING Airline_Info file";
  }
    }
    void show_cost()
    {
        cout<<"Cost is"<<" :- "<<this.cost; // Alternatively This could be done by opening a file and reading the values also, but here we are using array of class objects
    }
    
    
}
protected class Show
{
    void Show_All_Flights()  //Method To Show Details(Date,Depatue Time,Arrival Time,Depatue City, Desiation City, of all the flight i te Database
    {
         ifstream file;
         file.exceptions ( ifstream::badbit ); // No need to check failbit
         try 
         {
           file.open ("Airline_Info.txt");
           char ch;
           while (getline (file,line))) 
           {
               cout<<"Date Departue Time Arrival Time Depature City Destination City ";
               cout<<line;
           }
        }
        catch (const ifstream::failure& e) 
            {
                cout << "Exception OPENING Airline_Info file";
            }
    }
}
int main()
{
   
}






{
     ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
  
  
  
   ifstream file;
  file.exceptions ( ifstream::badbit ); // No need to check failbit
  try {
    file.open ("test.txt");
    char ch;
    while (file.get(ch)) do_something_with(ch);
    // for line-oriented input use file.getline(s)
  }
  catch (const ifstream::failure& e) {
    cout << "Exception opening/reading file";
  }

  file.close();
}
