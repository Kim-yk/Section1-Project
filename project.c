#include<stdio.h>
#include<stdlib.h>

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


void makelist(){ //initialize strcut 

struct imdb *node=NULL;
node = (struct imbd*)malloc(sizeof(struct imdb));
imdb->duration=0;
imdb->director_facebook_likes=0;
imdb->actor_3_facebook_likes=0;
imdb->actor_1_facebook_likes=0;
imdb->gross=0;
imdb->num_voted_users=0;
imdb->cast_total_facebook_likes=0;
imdb->facenumber_in_poster=0;
imdb->num_user_for_reviews=0;
imdb->budget=0;
imdb->title_year=0;
imdb->actor_2_facebook_likes=0;
imdb->imdb_score=0;
imdb->aspect_ratio=0;
imdb->movie_facebook_likes=0;
}


int main(int argc, char*argv[]){

if(argc<=1){
printf("error\n");
return 1;
}

char str[100]; int count=0; int i; int size=6000;

struct imdb* list[size]; //array of structs

while(scanf("%s", &str) !=EOF){

if(count==0){ //first row of table: column names
printf("column names");
count=0;
continue;
}



list[count] = malloc(sizeof(struct imdb)); //initializng struct

list[count]->color;
list[count]->director_name;
list[count]->actor_2_name;
list[count]->genres;
list[count]->actor_1_name;
list[count]->movie_title;
list[count]->actor_3_name;
list[count]->plot_keywords;
list[count]->movie_imdb_link;
list[count]->language;
list[count]->country;
list[count]->content_rating;

list[count]->num_critic_for_reviews;
list[count]->duration;
list[count]->director_facebook_likes;
list[count]->actor_3_facebook_likes;
list[count]->actor_1_facebook_likes;
list[count]->gross;
list[count]->num_voted_users;
list[count]->cast_total_facebook_likes;
list[count]->facenumber_in_poster;
list[count]->num_user_for_reviews; 
list[count]->budget;
list[count]->title_year;
list[count]->actor_2_facebook_likes;
list[count]->imdb_score;
list[count]->aspect_ratio;
list[count]->movie_facebook_likes;
}

count++;

}

return 0;

}
