#include<stdio.h>
//global variable

void bookMyShow(int reqTicket){
	static int ticketAvailable=20;
	ticketAvailable -= reqTicket;
	printf("Dear user, tickets booked successfully.\n");
	printf("Available tickets are %d",ticketAvailable);

}

int main(){
	int x;
	printf("Welcome to Ticket booking portal");
	for(int i=0; i<3; i++){
		printf("Enter the  number of seats to be booked:-");
		scanf("%d",&x);
		bookMyShow(x);
		}
	return 0;
}
