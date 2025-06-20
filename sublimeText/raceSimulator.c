#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//code by rcasio

// Structures section
  struct Race{
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[20];
    char firstPlaceRaceCarColor[20];
  };
  struct RaceCar{
    char driverName[30];
    char raceCarColor[20];
    int totalLapTime;
  };
// Print functions section
void printIntro(void);
void printCountDown(void);
void printFirstPlaceAfterLap(struct Race a);
void printCongratulation(struct Race a);
int calculateTimeToCompleteLap(void);
void updateRaceCar(struct RaceCar *raceCar);
void updateFirstPlace(struct Race *a, struct RaceCar *raceCar1, struct RaceCar *raceCar2);
//start fun
void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2);

int main() {
	srand(time(0));

  struct RaceCar raceCar1 = {"Casio", "Black", 0}; //add 0 for laptimes
  struct RaceCar raceCar2 = {"Verstappen", "Red", 0}; // add 0 for laptimes
  printIntro();
  printCountDown();
  startRace(&raceCar1, &raceCar2);
  
  

  return 0;
}


void printIntro(void){
  printf("\n\t***** Welcome to our main event digital race fans!! ******\n");
  printf("\"I hope everybody has a their snacks because we are about to begin!\"\n");
}

void printCountDown(void){
  printf("\nRacers Ready! In..\n5...\n4...\n3...\n2...\n1...\nRace!!!!\n\n");
}

void printFirstPlaceAfterLap(struct Race a){
  printf("After lap number %d\n", a.currentLap);
  printf("First Place Is: %s in the %s race car!\n\n", a.firstPlaceDriverName, a.firstPlaceRaceCarColor);
}

void printCongratulation(struct Race a){
  printf("\"Let's all congratulate %s in the %s race car\nfor an amazing performance!\"\n\n", a.firstPlaceDriverName, a.firstPlaceRaceCarColor);
  printf("\"It truly was a great race! and everybody\nhave a goodnight!\"\n");
}

int calculateTimeToCompleteLap(void){
  //generate a random number between 1-3
  int speed = (rand() % 3) + 1;
  int acceleration = (rand() % 3) + 1;
  int nerves = (rand() % 3) + 1;
  return(speed + acceleration + nerves);
}

void updateRaceCar(struct RaceCar *raceCar){
  raceCar->totalLapTime += calculateTimeToCompleteLap();
  printf("-- %s TIME : %ds ---\n", raceCar->driverName, raceCar->totalLapTime);
}

void updateFirstPlace(struct Race *a, struct RaceCar *raceCar1, struct RaceCar *raceCar2){

  if(raceCar1->totalLapTime < raceCar2->totalLapTime){
    strcpy(a->firstPlaceDriverName, raceCar1->driverName);
    strcpy(a->firstPlaceRaceCarColor, raceCar1->raceCarColor);
  }
  else if(raceCar1->totalLapTime > raceCar2->totalLapTime){
    strcpy(a->firstPlaceDriverName, raceCar2->driverName);
    strcpy(a->firstPlaceRaceCarColor, raceCar2->raceCarColor);
  }
}

void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2){
  struct Race race = {.numberOfLaps = 5,
                      .currentLap = 1,
                      .firstPlaceDriverName = "",
                      .firstPlaceRaceCarColor = ""};
  for(int i = 0; i < race.numberOfLaps; i++){
    updateRaceCar(raceCar1);
    updateRaceCar(raceCar2);
  
    updateFirstPlace(&race, raceCar1, raceCar2);

    printFirstPlaceAfterLap(race);
    race.currentLap++;
  }

  printCongratulation(race);

}
