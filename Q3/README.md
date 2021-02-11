# q3

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
- Number one i am using loop based on the inventory length to check if there is inventory that have placement name "Meeting Room". 
- Number two i am checking if there is inventory that have "electronic" type. 
- Number three is like number two but it's "furniture" instead of "electronic". 
- Number four is to find items that purchased before 16 Januari 2020, but the data inside variable "purchased_at" is not like date based (it's more like random number), so i just checked if "purchased_at"=20200116. 
- Number five is to check item that has brown color, there is no variable named color in the json data but i found that one of the item has "brown" on it's name, so i check if there is item that have brown in it's name to find the item.
```

### Customize configuration
See [Configuration Reference](https://cli.vuejs.org/config/).
