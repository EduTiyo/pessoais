#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int maxrow = 10;

string empName[maxrow] = {};
string empID[maxrow] = {};

void openFile(){
    string line;
    ifstream myfile("/home/eduardo-tiyo/Documentos/pessoais/aulaCRUD/employee.txt");
    if(myfile.is_open()){
        int i = 0;
        while(getline(myfile, line)){
            empID[i] = line.substr(0,3);
            empName[i] = line.substr(4, 1 - 4);
            i++;
        }
    }else{
        cout << "Enable to open the file" << endl;
    }
}

void saveToFile(){
    ofstream myfile;
    myfile.open("/home/eduardo-tiyo/Documentos/pessoais/aulaCRUD/employee.txt");
    for(int i = 0; i < maxrow; i++){
        if(empID[i] == "\0"){
            break;
        }
        else{
            myfile << empID[i] + ", " + empName[i] << endl;
        }
    }
}

void addRecord(){ 
    char name[50];
    char empno[5];

    cin.ignore();

    cout << "Employee ID: ";
    cin.getline(empno, 5);
    for(int i = 0; i < maxrow; i++){
        if (empID[i] == empno){
            cout << "ID already exists!\n";
            system("pause");
            return;
        }
    }
    cout << "Employee name: ";
    cin.getline(name, 50);

    for(int i = 0; i < maxrow; ++i){
        if(empID[i] == "\0"){
            empID[i] = empno;
            empName[i] = name;
            break;
        }
    }

}

void listRecord(){
    system("clear");
    cout << "Current records" << endl;
    cout << "===================================" << endl;
    int counter = 0;
    cout << " No. |   ID   |      NAME      " << endl << "-----------------------------------\n";
    
    for(int i = 0; i < maxrow; i++){
        if(empID[i] != "\0"){
            counter++;
            cout << "  " << counter << "      " << empID[i] << "         " << empName[i] << endl;
        }
    }
    if (counter == 0){
        cout << "No record found!" << endl;
    }
    cout << "===================================\n" << endl;
    
}

void searchRecord(string search){
    system("clear");
    cout << "Current Record(s)" << endl;
    cout << "===================================" << endl;
    cout << " No. |   ID   |      NAME      " << endl << "-----------------------------------\n";
    int counter = 0;

    for(int i = 0; i < maxrow; i++){
        if(empID[i] == search){
            counter++;
            cout << "  " << counter << "      " << empID[i] << "         " << empName[i] << endl;
        }
    }
    if(counter == 0){
        cout << "No record found!" << endl;    
    }
    cout << "===================================" << endl;
}

void updateRecord(string search){
    
    char name[50];
    char empno[5];

    int counter = 0;

    for(int i = 0; i < maxrow; ++i){
        if(empID[i] == search){
            counter++;
            cout << "Employee name: ";
            cin.getline(name, 50);

            empName[i] = name;

            cout << "\nUpdate Successfull!\n" << endl;
            break;
        }
    }
    if (counter == 0){
        cout << "ID does not exist" << endl;
    }
}

void deleteRecord(string search){
    int counter = 0;
    for(int i = 0; i < maxrow; i++){
       
        if(empID[i] == search){
            counter++;
            empID[i] = "";
            empName[i] = "";
            
            cout << "Successfully deleted" << endl;
            break;
        }
    }
    if (counter == 0){
        cout << "ID does not exist" << endl;
    }
}


int main(){

    cout << "MENU\n";
    int option;
    string empID;
    openFile();
    system("clear");

    do{
        cout << "1 - Create records" << endl;
        cout << "2 - Update records" << endl;
        cout << "3 - Delete records" << endl;
        cout << "4 - Search records" << endl;
        cout << "5 - Display all records" << endl;
        cout << "6 - Exit and Save to Textfile" << endl;
        cout << "-----------------------------------" << endl;

        cout << "Select option >> ";
        cin >> option;

        switch(option){
            case 1:
                addRecord();
                system("clear");
                break;
            case 2:
                cin.ignore();
                cout << "Search by ID >> ";
                getline(cin, empID);
                updateRecord(empID);
                system("clear");
                break;
            case 3:
                cin.ignore();
                cout << "Search by ID >> ";
                getline(cin, empID);
                deleteRecord(empID);
                system("clear");
                break;
            case 4:
                cin.ignore();
                cout << "Search by ID >> ";
                getline(cin, empID);
                searchRecord(empID);
                break;
            case 5:
                listRecord();
                break;
        }

    } while (option != 6);

    cout << "Exit... Saving to File!" << endl;
    saveToFile();

    return 0;
}

