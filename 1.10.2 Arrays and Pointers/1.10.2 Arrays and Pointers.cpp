
int main() 
{
    //pointer to a character
    char a = 'a';
    char* pa = &a;



    //array of 10 integers
    int ar[10];
    
    for (int i = 0; i < 10; ++i) 
    {
        ar[i] = i;
    }



    //pointer to an array of 10 integers
    int(*par)[10];
    
    par = &ar;


    //pointer to an array of character strings
    char* ps[3];

    char saying[10] = { 'e', 'n', 'd', '\0' };
    
    ps[0] = saying;


    //pointer to pointer to a character
    char** ppa = &pa;

    **ppa = a;


    //integer constant
    const int cint = 0;
    
    //pointer to an integer constant
    const int* pic = &cint;

    //constant pointer to an integer
    int b = 5;
    int* const cpi = &b;

    return 0;
}