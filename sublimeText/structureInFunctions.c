#include <stdio.h>

struct Person{
	char name[40];
	int age;
};


//func prototype
struct Person ageOne(struct Person a , struct Person *b);


int main(void){

	struct Person myFriend = {"Martin", 27};
	struct Person myOtherFriend = {"Michelle", 57};

	myFriend = ageOne(myFriend, &myOtherFriend);

	printf("hello my name is %s and I'm %d years old\n", myFriend.name, myFriend.age);
	printf("hi!, my name is %s and I'm %d years old\n", myOtherFriend.name, myOtherFriend.age);

}

//fun dec
struct Person ageOne(struct Person a, struct Person *b){
	a.age += 1;
	b->age += 10;
	return a;
}
