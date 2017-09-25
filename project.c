#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct imdb{ //struct declaration 
char* color;
char* director_name;
char* actor_2_name;
char*genres;
char* actor_1_name;
char* movie_title;
char* actor_3_name;
char* plot_keywords;
char* movie_imdb_link;
char* language;
char* country;
char* content_rating;
int num_critic_for_reviews;
int duration;
int director_facebook_likes;
int actor_3_facebook_likes;
int actor_1_facebook_likes;
int gross;
int num_voted_users;
int cast_total_facebook_likes;
int facenumber_in_poster;
int num_user_for_reviews; 
int budget;
int title_year;
int actor_2_facebook_likes;
int imdb_score;
int aspect_ratio;
int movie_facebook_likes;
};

char *final[5000]; //array of strings w/o commmas

char *finals[1000]; //global array of strings

int finali[100]; //global array of ints

char *dummy[6000]; 

void tokenizer(char str[1000]){ 
 
char delim[2]=",";
char *arr;

arr=(strtok(str,delim));

int i=0; int j;

while(arr!=NULL){
 final[i]=arr;
 ++i;
 arr=strtok(NULL,delim);
}

//for(j=0; j<28; ++j){
//printf("%s\n", final[j]);
//}

}

void token1(){

int i;
int ic=0;
int sc=0;
int newi;
char* temp;
char t; 

for(i=0; i<sizeof(final); i++){

	if(final[i]==NULL){
	break;
	}

	temp= final[i];
	t = temp[0];

 	if(isdigit(t)){

     	newi=atoi(temp);

     	finali[ic]=newi;

     	ic++;
	}

 	else{

	//printf("CHECK before: %s\n", temp);
	finals[sc]=temp;
	//printf("CHECK after: %s\n", finals[sc]);
   	sc++;
	}

} // end for*/ 

}

void initialize1(struct imdb *list[],int count){
list[count]->color = finals[0];
list[count]->director_name = finals[1];
list[count]->actor_2_name= finals[2];
list[count]->genres= finals[3];
list[count]->actor_1_name= finals[4];
list[count]->movie_title= finals[5];
list[count]->actor_3_name= finals[6];
list[count]->plot_keywords= finals[7];
list[count]->movie_imdb_link= finals[8];;
list[count]->language= finals[9];
list[count]->country= finals[10];
list[count]->content_rating= finals[11];

}

void initialize2(struct imdb* list[],int count){
list[count]->num_critic_for_reviews = finali[0];
list[count]->duration = finali[1];
list[count]->director_facebook_likes = finali[2];
list[count]->actor_3_facebook_likes= finali[3];
list[count]->actor_1_facebook_likes= finali[4];
list[count]->gross= finali[5];
list[count]->num_voted_users= finali[6];
list[count]->cast_total_facebook_likes= finali[7];
list[count]->facenumber_in_poster= finali[8];
list[count]->num_user_for_reviews= finali[9];
list[count]->budget= finali[10];
list[count]->title_year= finali[11];
list[count]->actor_2_facebook_likes= finali[12];
list[count]->imdb_score= finali[13];
list[count]->aspect_ratio= finali[14];
list[count]->movie_facebook_likes= finali[15];

}

void printlist(struct imdb *list[],int count){

printf("%s\n",list[count]->color);
printf("%s\n",list[count]->director_name);
printf("%s\n",list[count]->actor_2_name);
printf("%s\n",list[count]->genres);
printf("%s\n",list[count]->actor_1_name);
printf("%s\n",list[count]->movie_title);
printf("%s\n",list[count]->actor_3_name);
printf("%s\n",list[count]->plot_keywords);
printf("%s\n",list[count]->movie_imdb_link);
printf("%s\n",list[count]->language);
printf("%s\n",list[count]->country);
printf("%s\n",list[count]->content_rating);

printf("%d\n",list[count]->num_critic_for_reviews);
printf("%d\n",list[count]->duration);
printf("%d\n",list[count]->director_facebook_likes);
printf("%d\n",list[count]->actor_3_facebook_likes);
printf("%d\n",list[count]->actor_1_facebook_likes);
printf("%d\n",list[count]->gross);
printf("%d\n",list[count]->num_voted_users);
printf("%d\n",list[count]->cast_total_facebook_likes);
printf("%d\n",list[count]->facenumber_in_poster);
printf("%d\n",list[count]->num_user_for_reviews);
printf("%d\n",list[count]->budget);
printf("%d\n",list[count]->title_year);
printf("%d\n",list[count]->actor_2_facebook_likes);
printf("%d\n",list[count]->imdb_score);
printf("%d\n",list[count]->aspect_ratio);
printf("%d\n",list[count]->movie_facebook_likes);


}

//main function// 

int main(int argc, char*argv[]){

if(argc<=1){
printf("error\n");
return 1;
}

char str[1000];  int count=0; int i; int j; int ii; int k;
int ss;

while(scanf("%[^\n]%*c", &str) !=EOF){

if(count==0){ //first row of table: column names
printf("column names");
printf("\n");
count++;
continue;
}


dummy[count] = strdup(str);
printf("%d count rn: \n",count);
printf("%s\n",dummy[count]);

count++;

printf("\n");
printf("\n");

} //end of while loop


count=count-1; //lines in an array
printf("%d",count); 
printf("%s\n",dummy[1]);

struct imdb* list[count]; //create array of structs


char*temp;

for(k=1; k <= count; k++){

temp = dummy[k];

tokenizer(temp);
token1();

list[k] = malloc(sizeof(struct imdb));
initialize1(list,k);
initialize2(list,k);
printlist(list,k);

}
/*
printf("hello");
token1();

//printf("string list: \n");
for(ss=0; ss<13; ss++){
if(finals[ss]==NULL){
break;
}
//printf("%s\n", finals[ss]);
}

//printf("integer list: \n");
for(ii=0; ii<16; ii++){

//printf("%d\n",finali[ii]);

}

list[count] = malloc(sizeof(struct imdb)); //initializng struct

initialize1(count);
initialize2(count);
printf("HELLLLOOOOO FRIENDDDDD");
printlist(count);*/




return 0;

}
