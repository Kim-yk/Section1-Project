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
char* num_critic_for_reviews;
char* duration;
char* director_facebook_likes;
char* actor_3_facebook_likes;
char* actor_1_facebook_likes;
char* gross;
char* num_voted_users;
char* cast_total_facebook_likes;
char* facenumber_in_poster;
char* num_user_for_reviews; 
char* budget;
char* title_year;
char* actor_2_facebook_likes;
char* imdb_score;
char* aspect_ratio;
char* movie_facebook_likes;
};


char *final[5000]; //global array

void tokenizer(char str[1000]){ 
 
char delim[2]=",";
char *arr;

arr=(strtok(str,delim));

int i=0;

while(arr!=NULL){
 final[i]=arr;
 ++i;
 arr=strtok(NULL,delim);
}
/*int j;
for(j=0; j<i; ++j){
 printf("%s\n", final[j]);
}*/
}

int main(int argc, char*argv[]){

if(argc<=1){
printf("error\n");
return 1;
}

char str[1000]; int count=0; int i; int size=6000; int j;

struct imdb* list[size]; //array of structs

while(scanf("%[^\n]%*c", &str) !=EOF){

if(count==0){ //first row of table: column names
printf("column names");
printf("\n");
count++;
continue;
}


tokenizer(str);

list[count] = malloc(sizeof(struct imdb)); //initializng struct

list[count]->color = final[0];
list[count]->director_name = final[1];
list[count]->num_critic_for_reviews = final[2];
list[count]->duration = final[3];
list[count]->director_facebook_likes = final[4];
list[count]->actor_3_facebook_likes= final[5];
list[count]->actor_2_name= final[6];
list[count]->actor_1_facebook_likes= final[7];
list[count]->gross= final[8];
list[count]->genres= final[9];
list[count]->actor_1_name= final[10];
list[count]->movie_title= final[11];
list[count]->num_voted_users= final[12];
list[count]->cast_total_facebook_likes= final[13];
list[count]->actor_3_name= final[14];
list[count]->facenumber_in_poster= final[15];
list[count]->plot_keywords= final[16];
list[count]->movie_imdb_link= final[17];
list[count]->num_user_for_reviews= final[18];
list[count]->language= final[19];
list[count]->country= final[20];
list[count]->content_rating= final[21];
list[count]->budget= final[22];
list[count]->title_year= final[23];
list[count]->actor_2_facebook_likes= final[24];
list[count]->imdb_score= final[25];
list[count]->aspect_ratio= final[26];
list[count]->movie_facebook_likes= final[27];

for(j=0; j<28; ++j){
 printf("%s\n", final[j]);
}

printf("\n");
printf("\n");

count++;

}

// printf("%s",list[2]->budget); //testing out structs

return 0;

}
