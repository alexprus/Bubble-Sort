#include <iostream>
#include <cstring> // required for string manipulation
#include <iomanip> // required for tabular output

using namespace std; 

int main()
{
    // Provided arrays and constants
    const int NUM_PATIENTS = 10; // 10 patients will be included, this value cannot be modified
    const int MAX_NAME_LENGTH = 10; // no names longer than 10 characters, this value cannot be modified
    const int ID_LENGTH = 8;
    unsigned int age[NUM_PATIENTS] = {50, 22, 22, 89, 15, 16, 22, 32, 15, 66}; // 1D int array age of each patient
    char id[NUM_PATIENTS][ID_LENGTH + 1] = {"10854893", "10983922", "98333894", "57290888", "14899822", "79278282", "44293822", "62911023", "28399020", "33212322"}; // 1D int array identification #
    char firstName[NUM_PATIENTS][MAX_NAME_LENGTH] = {"allison", "michael", "michael", "johnny", "sabrina", "helen", "ignacio", "melissa", "hassan", "melody"}; // 2D char array: first names for patients
    char lastName[NUM_PATIENTS][MAX_NAME_LENGTH] = {"pratt","xiao", "barkley", "wu", "sappal", "mcdonald", "garza", "tran", "nahas", "baker"}; // 2D char array: last names for patients
    char sex[NUM_PATIENTS] = {'f','m','m','m','f','f','m','f','m','f'}; // 1D char array sex of the patient


    // PART 1: Select a primary sorting category from user input

char string1[5];{};
char inputstring[5];{};
char agestring[] = {"age"};
char IDstring[] = {"id"};
char firststring[] = {"first"};
char laststring[] = {"last"};
char sexstring[] = {"sex"};
bool error = true;
//int minAge = age[0];
//int maxAge = age[9];

cout << "Please enter the sorting category (Age, ID, First, Last, Sex): ";
cin >> inputstring;

do{ 

error = false;

for (int i = 0; i < strlen(inputstring); i++){

    if (inputstring[i] >= 65 && inputstring[i] <= 90){
        inputstring[i] = inputstring[i]+32;
    
    }

}
    if (strcmp(inputstring, agestring) == 0){

        cout << "Case 1, sorting by Age. " << endl;
        break; // If input is valid, break the loop
    }

    if (strcmp(inputstring, IDstring) == 0){

        cout << "Case 2, sorting by ID. " << endl;
        break;
    }

    if (strcmp(inputstring, firststring) == 0){

        cout << "Case 3, sorting by first name. " << endl;
        break;
    }

    if (strcmp(inputstring, laststring) == 0){

        cout << "Case 4, sorting by last name. " << endl;
        break;
    }

    if (strcmp(inputstring, sexstring) == 0){

        cout << "Case 5, sorting by sex. " << endl;
        break;
    }

    else {

        cout << "Unexpected input. Please input either Age, ID, First, Last, or Sex: ";
        cin >> inputstring;
        error = true; // Error is true because input is invalid

    }

} while (error == true);




// PART 3/4: Sorting patient records

//Age Sort

for ( int i = 0; i < 10; i++){

    for(int subi = 0; subi < 10-i-1; subi++){

        if (strcmp(inputstring, agestring) == 0){

        if (age[subi] > age[subi+1]){

            int temp = age[subi+1];

            age[subi+1] = age[subi];

            age[subi] = temp;
        }

    }
}
}

//ID Sort

for ( int i = 0; i < 10; i++){

    for(int subi = 0; subi < 10-i-1; subi++){

    char tempid;

    if (strcmp(inputstring, IDstring) == 0){

        //int ID = atoi(id[i]);
    
    if (atoi(id[subi]) > atoi(id[subi + 1])){

        char tempid = subi+1;
        strcpy(id[subi], id[subi+1]);
        strcpy(id[subi +1], id[subi]);


    }

    }
}
}


    // PART 2: Outputting patient records to terminal in tabular form

//Age 

cout << setw (12) << "Age: " << setw(10) << age[0] << setw(10) << age[1] << setw(10) << age[2] << setw(10) << age[3] << setw(10) << age[4] << setw(10) << age[5] << setw(10) << age[6] << setw(10) << age[7] << setw(10) << age[8] << setw(10) << age[9] << endl;

//ID

cout << setw (12) << "ID: " << setw(10) << id[0] << setw(10) << id[1] << setw(10) << id[2] << setw(10) << id[3] << setw(10) << id[4] << setw(10) << id[5] << setw(10) << id[6] << setw(10) << id[7] << setw(10) << id[8] << setw(10) << id[9] << endl;

//First Name 

cout << setw (10) << "First Name: " << setw(10) << firstName[0] << setw(10) << firstName[1] << setw(10) << firstName[2] << setw(10) << firstName[3] << setw(10) << firstName[4] << setw(10) << firstName[5] << setw(10) << firstName[6] << setw(10) << firstName[7] << setw(10) << firstName[8] << setw(10) << firstName[9] << endl;

//Last Name

cout << setw (12) << "Last Name: " << setw(10) << lastName[0] << setw(10) << lastName[1] << setw(10) << lastName[2] << setw(10) << lastName[3] << setw(10) << lastName[4] << setw(10) << lastName[5] << setw(10) << lastName[6] << setw(10) << lastName[7] << setw(10) << lastName[8] << setw(10) << lastName[9] << endl;

//Sex

cout << setw (12) << "Sex: " << setw(10) << sex[0] << setw(10) << sex[1] << setw(10) << sex[2] << setw(10) << sex[3] << setw(10) << sex[4] << setw(10) << sex[5] << setw(10) << sex[6] << setw(10) << sex[7] << setw(10) << sex[8] << setw(10) << sex[9] << endl;


    return 0;
}