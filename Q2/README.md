# q2

## Project setup
```
npm install
```

### Compiles and hot-reloads for development
```
npm run serve
```

### Compiles and minifies for production
```
npm run build
```

### Program Explanation
```
First there is flaw in the original json source that there is an object called "articles:" which is the ":" in the end of it make error so i remove the ":". 
- Number one is searching name that doesn't have phone number, for this i check if "phones" length is zero which mean the user doesn't have phone number and it's name i add it in var name. 
- Number two is searching name that having articles, same as number one but what i check is if "articles" length is more than 0. 
- Number three i use function to search if there is user name that has "annis" or "Annis" in it's name using function search. 
- Number four after i get the "published_at" string, i use slice function to get the first 4 words that is year and using it to check which has articles published at 2020. 
- Number five is the same as number four but what i slice is "birthday" to get the year to check which user born in 1986. 
- Number six i am using search function to get articles that have words "Tips" or "tips" in it's title. 
- Number seven i am using slice function to get year and month from "published_at" and parsing it from String to Integer. For the month if there is number 0 in the front i slice it. after that i checked which articles published before 2019 or in 2019 but before month 8. 
```

### Customize configuration
See [Configuration Reference](https://cli.vuejs.org/config/).
