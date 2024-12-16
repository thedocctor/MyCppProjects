#include <iostream>

int main()
{

char jobcode;
int expyear;
int English_grade;
double gpa;
double score;

    std::cout << "What is your Job Code?: ";
    std::cin >> jobcode;

if(jobcode != 'E' && jobcode != 'e' && jobcode != 'T' && jobcode != 't'){
     std::cout << "The job code is not valid.";
     return 0;
}

    std::cout << "Enter your experience year: ";
    std::cin >> expyear;
    
    std::cout << "Enter your English Grade: ";
    std::cin >> English_grade;

    std::cout << "Enter your GPA: ";
    std::cin >> gpa;    

if(jobcode == 'E' || jobcode == 'e'){

    if(expyear >= 5){
        score = English_grade * 0.4 + (gpa * 100/4) * 0.6 + 20;
    }
    else{
    score = English_grade * 0.4 + (gpa * 100/4) * 0.6;
    }

}
else if(jobcode == 'T' || jobcode == 't'){

    if(expyear >= 5){
        score = English_grade * 0.3 + (gpa * 100/4) * 0.7 + 25;
    }
    else{
        score = English_grade * 0.3 + (gpa * 100/4) * 0.7;
    }

}

else{

    std::cout << "The job code is not valid.";
    
}

    std::cout << "Score of the candidate is " << score;

return 0;
}