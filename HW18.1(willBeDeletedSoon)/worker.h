using namespace std;

struct Worker{
    char surname[30];
    int birthYear;
    char position[30];
    float salary;
    char education[30];
    
    void printInfo(){
        cout<<"Surname: "<<surname<<"\n"
        <<"Birth year: "<<birthYear<<"\n"
        <<"Position: "<<position<<"\n"
        <<"Salary: "<<salary<<"\n"
        <<"Education: "<<education<<"\n";
    }
};
