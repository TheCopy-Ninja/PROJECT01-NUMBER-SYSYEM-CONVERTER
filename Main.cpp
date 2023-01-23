//PROJECT01: NUMBER SYSTEM CONVERTER

#include<iostream>
#include<math.h>

using namespace std;

//Function for Decimal To Binary Conversion
void Decimal_Binary(int n){
    int Binary_Array[32];
    int i=0;
    while (n>0)
    {   
         
        Binary_Array[i]=n%2;
        n/=2;
        i++;
    }
    for (int j=i-1; j >=0 ;j-- )
    {
        cout<<Binary_Array[j];
    }
     
}

//Function for Decimal To Octal Conversion
void Decimal_Octal(int n){
    int Octal_Array[32];
    int i=0;
    while (n>0)
    {   
         
        Octal_Array[i]=n%8;
        n/=8;
        i++;
    }
    for (int j=i-1; j >=0 ;j-- )
    {
        cout<<Octal_Array[j];
    }
     
}

//Function for Decimal To Hexadecimal Conversion
void Decimal_Hexadecimal(int n){
    
    int i=0,rem=0;
    char Hexadecimal_Array[32];
    while (n!=0)
    {   
        rem=n%16;
        if (rem<10)
        {
            Hexadecimal_Array[i]=rem+48;
            i++;
        }
        else{
            Hexadecimal_Array[i]=rem+55;
            i++;

        }
        n/=16;
        
    }
    for (int j =i-1; j >=0; j--)
    {
        cout<<Hexadecimal_Array[j];
    }  
}

//Function for Binary To Decimal Conversion
int Binary_Decimal(int n){
    int bit=0,decimal=0;
    double power=0,base=2;
    while (n!=0)
    {
        bit=n%10;
        decimal+=bit* pow(base,power);
        power++;
        n=n/10;
    }
    return decimal;
}

//Function for Octal To Decimal Conversion
int Octal_Decimal(int n){
    int bit=0,decimal=0;
    double power=0,base=8;
    while (n!=0)
    {
        bit=n%10;
        decimal+=bit* pow(base,power);
        power++;
        n=n/10;
    }
    return decimal;
}

//Function for HexaDecimal To Decimal Conversion
int HexaDecimal_Decimal(string num)
{
    int len = num.size();
    int dec = 0, index = 0;
    
    for(int i = len - 1; i >= 0; i--)
    {
        // Here we check if current array char is between (0-9)
        if (num[i] >= '0' && num[i] <= '9') 
        {
            // whenever current num[i] is in range '0' - '9' 
            // ascii int value can be fetched 
            // by subtracting 48 (Refer Ascii table) as ASCII val 0 : 48 
            int digit = int(num[i]) - 48; 
            dec += digit * pow(16, index); 
            index++; 
        } 

        // Here we check if current array char is between (A-F) 
        else if (num[i] >= 'A' && num[i] <= 'F') 
        { 
            // whenever current num[i] is in range 'A' - 'F' 
            // ascii int value can be fetched 
            // by subtracting 55 (Refer Ascii table) as 
            // ASCII val A : 65 and A must result 10 as value 
            int digit = int(num[i]) - 55; 
            dec += digit * pow(16, index); 
            index++; 
        } 
    } 
    return dec; 
} 

//Driver Code   
int main()
{   
    int ChoiceIn=0,ChoiceOut=0,NumIn=0;
    string HexNumIn;
    cout<<"---------------------------------------------" << endl;
    cout<<"           NUMBER SYSTEM CONVERTER           " << endl;
    cout<<"---------------------------------------------" << endl;
    cout<<"<<<<<<<<<<<< Select Input System >>>>>>>>>>>>" << endl;
    cout<<"---------------------------------------------" << endl;
    cout<<"           # Enter 1 for Decimal             " << endl;
    cout<<"           # Enter 2 for Binary              " << endl;
    cout<<"           # Enter 3 for Octal               " << endl;
    cout<<"           # Enter 4 for HexaDecimal         " << endl;
    cout<<"---------------------------------------------" << endl;
    cout<<"           Enter Your Choice Here:_" ; cin>>ChoiceIn;
    cout<<"---------------------------------------------" << endl;

    if (ChoiceIn>0 && ChoiceIn <5)
    {
       switch (ChoiceIn)
        {
            case 1:{
                cout<<">>>>>>>>>>>> Enter The Input in Decimal: "; cin>>NumIn;
            break;  
            }
            case 2:{
                cout<<">>>>>>>>>>>> Enter The Input in Binary: "; cin>>NumIn;
            break;  
            }
            case 3:{
                cout<<">>>>>>>>>>>> Enter The Input in Octal: "; cin>>NumIn;
            break;  
            }
            case 4:{
                cout<<">>>>>>>>>>>> Enter The Input in HexaDecimal: "; cin>>HexNumIn;
            break;  
            }
        default:
            break;
        }
            cout<<"---------------------------------------------" << endl;
            cout<<"<<<<<<<<<<< Select Output System >>>>>>>>>>>>" << endl;
            cout<<"---------------------------------------------" << endl;
            cout<<"           # Enter 1 for Decimal             " << endl;
            cout<<"           # Enter 2 for Binary              " << endl;
            cout<<"           # Enter 3 for Octal               " << endl;
            cout<<"           # Enter 4 for HexaDecimal         " << endl;
            cout<<"---------------------------------------------" << endl;
            cout<<"           Enter Your Choice Here: "; cin>>ChoiceOut; 
            cout<<"---------------------------------------------" << endl;

            if (ChoiceOut>0 && ChoiceOut <5)
            {   
                int DualSwitcher=(ChoiceIn*10)+ChoiceOut;

                switch (DualSwitcher){
                    case 11:{
                        NumIn;
                        cout<<"Decimal Equivalent of Decimal Number " <<NumIn<< " is: "<< NumIn <<endl;
                    break;  
            }
                    case 12:{
                        
                        cout<<"Binary Equivalent of Decimal Number " <<NumIn<< " is: ";
                        Decimal_Binary(NumIn);
                    break;  
            }
                    case 13:{
                        cout<<"Octal Equivalent of Decimal Number " <<NumIn<< " is: ";
                        Decimal_Octal(NumIn);
                    break;  
            }
                    case 14:{
                        cout<<"HexaDecimal Equivalent of Decimal Number " <<NumIn<< " is: ";
                        Decimal_Hexadecimal(NumIn);
                    break;  
            }       
                    case 21:{
                        cout<<"Decimal Equivalent of Binary Number " <<NumIn<< " is: ";
                        Binary_Decimal(NumIn);
                    break; 
            }
                    case 22:{
                        cout<<"Binary Equivalent of Binary Number " <<NumIn<< " is: "<< NumIn;
                    break; 
            }
                    case 23:{
                        int DecimalDigit1=Binary_Decimal(NumIn);
                        cout<<"Octal Equivalent of Binary Number " <<NumIn<< " is:  ";
                        Decimal_Octal(DecimalDigit1);
                    break; 
            }
                    case 24:{
                        int DecimalDigit2=Binary_Decimal(NumIn);
                        cout<<"HexaDecimal Equivalent of Binary Number " <<NumIn<< " is: ";
                        Decimal_Hexadecimal(DecimalDigit2);
                    break; 
            }
                    case 31:{
                        cout<<"Decimal Equivalent of Octal Number " <<NumIn<< " is: ";
                        Octal_Decimal(NumIn);
                    break; 
            }
                    case 32:{
                        int DecimalDigit3=Octal_Decimal(NumIn);
                        cout<<"Binary Equivalent of Octal Number " <<NumIn<< " is: ";
                        Decimal_Binary(DecimalDigit3);
                    break; 
            }
                    case 33:{
                        cout<<"Octal Equivalent of Octal Number " <<NumIn<< " is: "<< NumIn;
                    break; 
            }
                    case 34:{
                        int DecimalDigit4=Octal_Decimal(NumIn);
                        cout<<"HexaDecimal Equivalent of Octal Number " <<NumIn<< " is: ";
                        Decimal_Hexadecimal(DecimalDigit4);
                    break; 
            }
                    case 41:{
                        cout<<"Decimal Equivalent of HexaDecimal Number " <<HexNumIn<< " is: ";
                        HexaDecimal_Decimal(HexNumIn);
                        
                    break; 
            }
                    case 42:{
                        int DecimalDigit5=HexaDecimal_Decimal(HexNumIn);
                        cout<<"Binary Equivalent of HexaDecimal Number " <<HexNumIn<< " is: ";
                        Decimal_Binary(DecimalDigit5);
                    break; 
            }
                    case 43:{
                        int DecimalDigit6=HexaDecimal_Decimal(HexNumIn);
                        cout<<"Octal Equivalent of HexaDecimal Number " <<HexNumIn<< " is: "; 
                        Decimal_Octal(DecimalDigit6);                  
                    break; 
            }
                    case 44:{
                        cout<<"HexaDecimal Equivalent of HexaDecimal Number " <<HexNumIn<< " is:"<<HexNumIn;
                    break; 
            }
                    
                default:
                    break;
        }
            }
            else{
                cout<<"..........Wrong Choice! Try Again!..........." << endl;
            }
            
    }

    else{
        cout<<"..........Wrong Choice! Try Again!..........." << endl;
    }
    cout <<""<<endl;
    cout<<"---------------------------------------------" << endl;    
    return 0;
}