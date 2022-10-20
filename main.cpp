// Author Darshil Shah
// Tech Aspect Hiring Challenge Dated 20/08/2018
//Airplane Ticketing System
// Language C++ (gcc 6.3)

//Propse few changes in the current PR


#include<bits/stdc++.h>
using namespace std;
public class Flight_Details // Class holds the declarations and definations to store and retreive flight details
{
    private: //Variable should br private as these are cred variables
        int fli_no;
        char airline_name[20];
        int capacity;
        int model;
        int make,
        int size,
        int capacity,
        int global_components
        int fli_no2;
        char airline_name2[20];
        int capacity2;
        int model2;
        int make2,
        int size2,
        int capacity2,
        int global_components2;
        
    public: //Should be public
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
     // open the file
      
      
      
     try 
  {
     // open the file
        try 
  {
     // open the file
         
      
    file.open ("AirPlane_Info.txt"); //Trying to opn the ile if file not found Exception Printed
    file<<this.Serial_No<<this.fli_no<<this.airline_name<<this.capacity<<this.model;  //Writing Data to file
    file<<endl;
    file.close(); //Closing the file after writing the data
     if (file.notFound())
          cout<<"This file does not exists"; //Check if the file exist or not to avoid the exceptions
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
public class Flight_Schedule : public Flight_Details  //class has declarations and definations to store and access the schedule of flights
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
    char dateTime[30[; //To store the global time.
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
public class Price : public Flight_Schedule  //Class holds te declarations and definations of FLight Prices
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
protected class Show //Class declares and defins the methods to filter all records according to Desination CIty, Source City and Cost
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
               cout<<"Date Departue Time Arrival Time Depature City Destination City Cost";
               cout<<line;
           }
        }
        catch (const ifstream::failure& e) 
            {
                cout << "Exception OPENING Airline_Info file";
            }
    }
    void Filter_Destination(char Des[]) /* Method to filter the results based on desinaion city */
    {
        try 
         {
           file.open ("Airline_Info.txt");
           char ch;
           while (getch (file,line))) //Read a line from the Airline_Info File
           {
               char s[25]; //Hold the destination in the file
               for(int i=17,k=0;line[i]!=" ";i++) //The Desinaion City Starts on the 17th charecte in file (detrmined by counting the dates and time charecter coming befoe the destination city)
               s[k++]=line[i];
               if(strcmp(s,Des)==0) //If the inputed value of destination city matches with th destination city in the record then print all the details corresponding to that record
               {
                  cout<<"Date Departue Time Arrival Time Depature City Destination City Cost";
               cout<<line;
               }
           }
        }
        catch (const ifstream::failure& e) 
            {
                cout << "Exception OPENING Airline_Info file";
            }
    }
    
    void Filter_Source(char Sou[]) /* Method to filter the results based on desinaion city */
    {
        try 
         {
           file.open ("Airline_Info.txt");
           while (getch (file,line))) //Read a line from the Airline_Info File
           {
               char s[25]; //Hold the source in the file
               for(int i=26,k=0;line[i]!=" ";i++) //The Source City Starts on the 26th charecte in file (detrmined by counting the dates and time charecter coming before the source city)
               s[k++]=line[i];
               if(strcmp(s,Sou)==0) //If the inputed value of Source city matches with th source city in the record then print all the details corresponding to that record
               {
                  cout<<"Date Departue Time Arrival Time Depature City Destination City Cost";
               cout<<line;
               }
           }
        }
        catch (const ifstream::failure& e) 
            {
                cout << "Exception OPENING Airline_Info file";
            }
    }
    
    void Filter_Cost(int cost) /* Method to filter the results based on desinaion city */
    {
        try 
         {
           file.open ("Airline_Info.txt");
           while (getch (file,line))) //Read a line from the Airline_Info File
           {
              string val; //Hold the cost in the file
               for(int i=35,k=0;line[i]!=" ";i++) //The Cost Starts om the 35th charecte in file (detrmined by counting the dates and time charecter coming befoe the destination city)
               s[k++]=line[i];
               if(atoi(s)-cost<=0) //If the inputed value of cost matches with the icket price in the record then print all the details corresponding to that record
               {
                  cout<<"Date Departue Time Arrival Time Depature City Destination City Cost";
               cout<<line;
               }
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
   Flight_Details fd[100]; //100 flight details objects each object storing flight details of a flight
   Flight_Schedule fs[100]; //100 flight schedule objcts each objct storing flight schdule of a flight
   Price ps[100] //100 flight objects that stores price of each flight each sector
       
   //We can use this objects to call their paticular Methods to scan the data from console.   

   //We can use this objects to call their paticular Methods to store/show the data on console.
   
   Show sh;//This object ca be used to access the filter methods based on destination city, source city and cost.
   sh.Filter_Destination("Chennai");//All the details of fights having destination city as Chenai will be displayed.
   sh.Filter_Source("Hyderabad"); //All the detais of flights having source city as Hyderabad will be shown.
   sh.Filter_Cost(5550) //Records having ticket fares lesser than 5550 will be displayed.
   
   return 0;
   
   
}

