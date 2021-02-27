task 01
  #include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

struct Product{
    char description[32];
    int partNum;
    double cost;
};

int main(){
    //a)
    Product prod1, prod2;

    //Initialize product 1
    strcpy(prod1.description, "screw-driver");
    prod1.partNum = 456;
    prod1.cost = 5.50;

    //Initialize product 2
    strcpy(prod2.description, "hammer");
    prod2.partNum = 324;
    prod2.cost = 8.20;


    //а) Second variant
    Product p1 = {"screw-driver", 456, 5.50},
            p2 = {"hammer", 324, 8.20};

    //б)
    cout << setiosflags(ios::fixed) << setprecision(2);

    cout << "Product 1: " << endl;
    cout << "name: " << prod1.description << endl;
    cout << "partNum: " << prod1.partNum << endl;
    cout << "cost: " << prod1.cost << endl;

    cout << endl;

    cout << "Product 2: " << endl;
    cout << "name: " << prod2.description << endl;
    cout << "partNum: " << prod2.partNum << endl;
    cout << "cost: " << prod2.cost << endl;

    //в)
    Product P[10];

    //г)
    for(int i = 0; i < 10; i++){
        strcpy(P[i].description, " ");
        P[i].partNum = 0;
        P[i].cost = 0.0;
    }

    //д)
    Product Q[5] = { {"screw-driver", 456, 5.50},
                     {"hammer", 324, 8.20},
                     {"socket", 458, 5.75},
                     {"plier", 929, 10.50},
                     {"hand-saw", 536, 7.45}
                    };

    //e)
    for(int i = 0; i < 5; i++){
        cout << "Product[" << i << "]: " << endl;
        cout << Q[i].description << endl;
        cout << Q[i].partNum << endl;
        cout << Q[i].cost << endl;
    }

    return 0;
}

task 02
  
 #include<iostream>
using namespace std;

const int SIZE = 16;
const int SIZE_MAX = 20;

//declaring structure Person
struct Person{
    char firstName[SIZE];
    char lastName[SIZE];
};


//Input data for Person
void readPerson(Person& P){
    cout << "First name: \n" ;
    cin >> P.firstName;

    cout << "Last name: \n";
    cin >> P.lastName;
}

//Output data for Person
void printPerson(const Person& P){
    cout << "First name: " << P.firstName << endl;
    cout << "Last name: " << P.lastName << endl;
}


//declaring structure Client
struct Client{
    Person name;
    double ammount;
};

//Input data for Client
void readClient(Client& C){
    cout << "Name of the client: " << endl;
    readPerson(C.name);

    cout << "Ammount of client: " << endl;
    cin >> C.ammount;
}

//Output data for Client
void printClient(const Client& C){
    cout << "Client name: " << endl;
    printPerson(C.name);

    cout << "Ammount of Client: " << C.ammount << endl;
}

int main(){
    //a)
    // Entering the names and bank accounts of all clients
    int n;
    cout << "Enter n[1 - 10]: \n";
    cin >> n;

    Client allClients[SIZE_MAX];

    for(int i = 0; i < n; i++){
        readClient(allClients[i]);
    }

    //б)
    //Printing the names and the bank accounts of all clients
    cout << "Bank clients: " << endl;
    for(int i = 0; i < n; i++){
        printClient(allClients[i]);
    }

    //в)
    //Finding the sum of all clients ammounts
    double sum = 0;
    for(int i = 0; i < n; i++){
        if(allClients[i].ammount < 0){
            sum += allClients[i].ammount;
        }
    }

    cout << "The sum is " << sum << endl;

    return 0;
}
