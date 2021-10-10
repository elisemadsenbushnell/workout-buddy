/*
 * workoutLog.c
 *
 *  Created on: Sep 26, 2021
 *      Author: elisebushnell
 */
#include "workoutLog.h"

#ifndef WORKOUTLOG_C_
#define WORKOUTLOG_C_

int main(int argc, char **argv) {;
	int length;
	int r_flag = 0;
	int p_flag = 0;
	int err_opt = 0;
	int opt;

	fprint("Welcome to WorkoutBuddy! Would you like to 1. Create"
			"a new workout routine or 2. track workout progress?"
			"Please enter 1 or 2\n");

	while ((opt = getopt(argc, argv, "1:2:")) != -1) {
		switch(opt) {
		case '1':
			r_flag = 1;
			break;
		case '2':
			p_flag = 1;
			break;
		default:
			err_opt = 1;
			break;
		}
	}

	if (r_flag == 1) {
		printf("What kind of a routine are you looking for?\n");
		printf("1. Cardio\n");
		printf("2. Weights\n");
		printf("3. Yoga\n");
		printf("4. Abs\n");
		printf("5. Butt\n");
		printf("6. Back\n");
		printf("7. Legs\n");
		printf("8. Arms\n");
		printf("Please enter a number 1-8\n");
		int num = getchar();
		routine(num);
	}

	if (p_flag == 1) {
		printf("How many weeks of progress would you like to track?\n");
		printf("Please enter a number from 1-9\n");
		int weekNum = getchar();
		progress(weekNum);
	}
}

void routine(int number) {
	if (number == 1) {
		printf("Cardio\n");
		printf("1. One minute of jogging in place\n");
		printf("2. One minute of burpees\n");
		printf("3. One minute of jump rope (or mimic movement without rope)\n");
		printf("4. One minute of jogging in place\n");
		printf("5. One minute of jumping jacks\n");
		printf("Repeat three times\n");
	}
	if (number == 2) {
		printf("Weights\n");
		printf("1. Overhead press, six reps, four sets\n");
		printf("2. Back squat, five sets\n");
		printf("3. Dumbbell bench press, ten reps, three sets\n");
		printf("4. Diamond press-up, six reps, four sets\n");
		printf("5. Incline bench press, six reps, four sets\n");
	}
	if (number == 3) {
		printf("Yoga\n");
		printf("1. Downward dog\n");
		printf("2. Low lunge\n");
		printf("3. Toes pose\n");
		printf("4. Reclining  hand to big toe\n");
		printf("5. Reclining pigeon\n");
		printf("6. Reclining cow face\n");
		printf("7. Reclining spinal twist\n");
		printf("8. Legs up the wall\n");
		printf("Repeat four times\n");
	}
	if (number == 4) {
		printf("Abs\n");
		printf("1. Ten sit-ups\n");
		printf("2. Ten flutter kicks\n");
		printf("3. Ten second crunch hold\n");
		printf("4. Ten sit-ups\n");
		printf("5. Ten flutter kicks\n");
		printf("6. Ten second raised leg hold\n");
		printf("7. Ten sit-ups\n");
		printf("8. Ten sitting twists\n");
		printf("9. Ten count hollow hold\n");
		printf("Repeat twice\n");
	}
	if (number == 5) {
		printf("Butt\n");
		printf("1. Straight leg deadlift, fifteen reps\n");
		printf("2. Squat with medicine ball, fifteen reps\n");
		printf("3. Reverse lunge, fifteen reps\n");
		printf("4. Plank with leg raise, fifteen reps each side\n");
		printf("Repeat three times\n");
	}
	if (number == 6) {
		printf("Back\n");
		printf("1. Deadlift, 10  reps\n");
		printf("2. Bent-over row, fifteen reps\n");
		printf("3. Pull-up, twenty reps\n");
		printf("4. Lat  pull-down, fifteen reps\n");
		printf("Repeat three times\n");
	}
	if (number == 7) {
		printf("Legs\n");
		printf("1. Leg press, eight reps, four sets\n");
		printf("2. Standing calf raises, ten reps, four sets\n");
		printf("3. Barbell squat, ten reps, four sets\n");
		printf("4. Leg extensions, twelve reps, four sets\n");
	}
	if (number == 8) {
		printf("Arms\n");
		printf("1. Hammer curls, twelve reps, three sets\n");
		printf("2. Dips, twelve reps, three sets\n");
		printf("3. Barbell curl, ten reps, three sets\n");
		printf("4. Concentration curls, twelve reps, three sets\n");
		printf("5. Reverse curl, twelve reps, three sets\n");
	}
}

void progress(int weeks) {
	char **buf[weeks];
	if (weeks <= 1) {
		char *weekBufOne[7];
		*buf[0] = *weekBufOne;
	}
	if (weeks <= 2) {
		char *weekBufTwo[7];
		*buf[1] = *weekBufTwo;
	}
	if (weeks <= 3) {
		char *weekBufThree[7];
		*buf[2] = *weekBufThree;
	}
	if (weeks <= 4) {
		char *weekBufFour[7];
		*buf[3] = *weekBufFour;
	}
	if (weeks <= 5) {
		char *weekBufFive[7];
		*buf[4] = *weekBufFive;
	}
	if (weeks <= 6) {
		char *weekBufSix[7];
		*buf[5] = *weekBufSix;
	}
	if (weeks <= 7) {
		char *weekBufSeven[7];
		*buf[6] = *weekBufSeven;
	}
	if (weeks <= 8) {
		char *weekBufEight[7];
		*buf[7] = *weekBufEight;
	}
	if (weeks <= 9) {
		char *weekBufNine[7];
		*buf[8] = *weekBufNine;
	}
	if (weeks <= 10) {
		char *weekBufTen[7];
		*buf[9] = *weekBufTen;
	}
	for(int i = 0; i < weeks; i++) {
		printf("How many days do you want to track from week %d\n", i);
		int dayNum = getchar();
		for(int j = 0; j < dayNum; j++) {
			printf("Which day from this week would you like to track first?\n");
			printf("Please enter your response as a number. (0 for Sunday, 1 for Monday, and so on.)\n");
			int dayNumber = getchar();
			buf[i][dayNumber] = 1;
			printf("Your exercise on week %d day %d has been recorded\n", i, dayNum);
		}
	}
}

#endif /* WORKOUTLOG_C_ */
