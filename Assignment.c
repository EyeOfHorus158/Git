include <stdio.h>

// function declarations
void printInstituteName(char name[]);
void addTwoNum();
void multiplyTwoNum();
void sumOfSquare();
void uniqueNum();


// prints name with institute's name
void printInstituteName(char name[]){
    printf("%s IIITDMJ \n",name);
}

// add 2 integers
void addTwoNum(){
    int a,b;
    printf("input first number\n");
    scanf("%d",&a);
    
    printf("input second number\n");
    scanf("%d",&b);
    
    printf("The sum is %d\n",a+b);
}

// multiply 2 integers
void multiplyTwoNum(){
    int a,b;
    printf("input first number\n");
    scanf("%d",&a);
    
    printf("input second number\n");
    scanf("%d",&b);
    
    printf("The product is %d\n",a*b);
}

// sum of square of 2 integers
void sumOfSquare(){
    int a,b;
    printf("input first number\n");
    scanf("%d",&a);
    
    printf("input second number\n");
    scanf("%d",&b);
    
    printf("The result is %d\n",a*a+b*b);
}

// checks whether the inputs are unique
void uniqueNum(){
    int a,b,c;
    printf("input first number\n");
    scanf("%d",&a);
    
    printf("input second number\n");
    scanf("%d",&b);
    
    printf("input third number\n");
    scanf("%d",&c);
    
    if(a==b || b==c || c==a){
        printf("0");
    }else {
        printf("1");
    }
}


int main(){
    printInstituteName("Aksh Bansal");
    
    //addTwoNum();
    
    //multiplyTwoNum();
    
    //sumOfSquare();
    
    //uniqueNum();
    return 0;
} 