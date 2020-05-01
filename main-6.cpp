#include <iostream>
#include <map>


struct Student {
std::string name;
int aNumber;
float currentGrade;
std::string letterGrade;

void CalculateLetterGrade()
{
    if (currentGrade >= 90)
    {
        letterGrade = "A";
    }

    else if (currentGrade >= 80)
    {
        letterGrade = "B";
    }

    else if (currentGrade >= 70)
    {
        letterGrade = "C";
    }
    else if (currentGrade >= 60)
    {
        letterGrade = "D";
    }
    else 
    {
        letterGrade = "F";
    }
}
};


int main(){
std::map<std::string, Student> student_map;
 Student s[5];

s[0].name ="John";
s[0].aNumber = 1;
s[0].currentGrade = 100;

s[1].name ="Jacob";
s[1].aNumber = 2 ;
s[1].currentGrade = 89 ;

s[2].name ="Jingleheimer";
s[2].aNumber = 3;
s[2].currentGrade = 79 ;

s[3].name ="Schmidt";
s[3].aNumber = 4;
s[3].currentGrade = 69;

s[4].name ="Mike";
s[4].aNumber = 5;
s[4].currentGrade = 90;

for (int i = 0; i <5; i++)
{
    student_map[s[i].name] = s[i];
}

for (auto & kv :student_map)
{
kv.second.CalculateLetterGrade();
}

std::cout<<student_map.find("Mike")->second.letterGrade<<std::endl;

    return 0;
}