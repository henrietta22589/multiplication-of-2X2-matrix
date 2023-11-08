/*πολλάπλασιασμός δύο πινάκων*/
/*******************************************************************************************************
Multiplication of two arrays, base in Algebra in order two arrays to be able to 
be multiplied the columns of the first array has to be equal to the numbers of
lines of the second array. Be careful again based on Algebra in the Multiplication
of two arrays if you want to multiply a[i][j]Xb[i][j] you can't multiply b[i][j] X a[i][j] it is forbiden
********************************************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    /*Καθορισμός μεταβλήτων*/
    int i,j,k,option,num_lines_1,num_columns_1,num_lines_2,num_columns_2;
    /*Ζητάω απο τον χρήστη να μου πεί πόσες γραμμές και στήλες θέλει να έχει για τους δύο πίνακες*/
   /*Δημίουργω μία λούπα μέσω της do-while έτσι ώστε αν ο χρήστης μου δίνει έναν αριθμό στηλών για τον πρώτο
   πίνακα διαφορέτικο απο τον αριθμό γραμμών του δευτέρου πίνακα να μην μπορεί να προχωρήσει στον 
   πολλάπλασιασμό των πινάκων μέχρι να μου δώσει ορθώς τα στοιχεία, δηλαδή στηλές(1ου)=γραμμές(2ου)*/
    do
    {
        /*Ζητάω για τον πρώτο πίνακα*/
        cout<<"Give me the number of lines you would like the first array to have ";
        cin>>num_lines_1;
        cout<<endl<<"Give me the number of columns the first array you would like to have ";
        cin>>num_columns_1;
        /*Ζητάω για τον δευτέρο πίνακα*/
        cout<<endl<<"Give me the number of lines you would like the second array to have ";
        cin>>num_lines_2;
        cout<<endl<<"Give me the number of columns the second array you would like to have ";
        cin>>num_columns_2;
    }while(num_columns_1!=num_lines_2);
    /*Δήλωση των πινάκων που θα χρησιμοποιήθουνε*/
    float array_1[num_lines_1][num_columns_1],array_2[num_lines_2][num_columns_2];
    float number,multiplication[num_lines_1][num_columns_2]={{1}};
    /*Δημιουργία του πρώτου πίνακα*/
    cout<<endl<<"Give me the values you would like for the first array ";
    for(i=0;i<num_lines_1;i++)
    {
        for(j=0;j<num_columns_1;j++)
        {
            cout<<endl<<"The elemt of the array "<<"("<<i<<","<<j<<") is ";
            cin>>array_1[i][j];
        }
    }
    /*Πάμε να εκτυπώσουμε τα στοιχεία του πίνακα που δημιουργήσαμε*/
    for(i=0;i<num_lines_1;i++)
    {
        for(j=0;j<num_columns_1;j++)
        {
            cout<<array_1[i][j];
            cout<<" ";/*Για να δημιουργείται ένα κενό αναμέσα στα στοιχεία του πίνακα*/
        }
        cout<<endl;
    }
    cout<<"would you like your array to be multiplied by an another array?"<<endl<<"or by a single number?";
    cout<<endl<<"press 1 if you would like to be multiplied by a single number and zero if you want" ;
    cout<<endl<<"to be multiplied by a second array ";
    cin>>option;
    cout<<"you gave us an option "<<option;
    if(option==1)
    {
        cout<<endl<<"Give me the number you would like to be multiplied with your array  ";
        cin>>number;
        for(i=0;i<num_lines_1;i++)
        {
            for(j=0;j<num_columns_1;j++)
            {
                multiplication[i][j]=array_1[i][j]*number;
                cout<<endl<<"The element ("<<i<<","<<j<<") is multiplied by the number "<<number;
                cout<<"and the result is "<<multiplication[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        /*Δημιουργία του 2ου πίνακα*/
        cout<<endl<<"Give me the elements you would like this array to have  ";
        for(i=0;i<num_lines_2;i++)
        {
            for(j=0;j<num_columns_2;j++)
            {
                cout<<endl<<"The elemt of the array "<<"("<<i<<","<<j<<") is ";
                cin>>array_2[i][j];
            }
        }
        /*Eκτύπωση των στοιχείων του πίνακα*/
        for(i=0;i<num_lines_2;i++)
        {
            for(j=0;j<num_columns_2;j++)
            {
                cout<<array_2[i][j];
                cout<<"      ";
            }
            cout<<endl;
        }
        /*Πολλαπλασιασμός των δύο πινάκων*/
    int multiplication[num_lines_1][num_columns_2];

    // Perform matrix multiplication
    for (int i = 0; i < num_lines_1; i++) {
        for (int j = 0; j < num_columns_2; j++) {
            multiplication[i][j] = 0; // Initialize the result element to 0
            for (int k = 0; k < num_columns_1; k++) {
                multiplication[i][j] += array_1[i][k] * array_2[k][j];
            }
        }
    }

    /*Eμφάνιση των αποτελεσμάτων του πολλαπλασιασμού */
    cout << "Result of matrix multiplication:\n";
    for (int i = 0; i < num_lines_1; i++) {
        for (int j = 0; j < num_columns_2; j++) {
            cout << multiplication[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
    }

