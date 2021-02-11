<template>
  <div class="home">
    <p>1. Find users who don't have any phone numbers</p>
    <p>Answer : <a>{{numberOne}}</a></p>
    <p>2. Find users who have articles</p>
    <p>Answer : <a>{{numberTwo}}</a></p>
    <p>3. Find users who have "annis" on their name</p>
    <p>Answer : <a>{{numberThree}}</a></p>
    <p>4. Find users who have articles on the year 2020</p>
    <p>Answer : <a>{{numberFour}}</a></p>
    <p>5. Find users who are born in 1986</p>
    <p>Answer : <a>{{numberFive}}</a></p>
    <p>6. Find articles that contain "tips" on the title</p>
    <p>Answer : <a>{{numberSix}}</a></p>
    <p>7. Find articles published before August 2019</p>
    <p>Answer : <a>{{numberSeven}}</a></p>
  </div>
</template>

<script>
export default {
  data() {
    return {
      user : [
        {
          "id": 323,
          "username": "rinood30",
          "profile": {
            "full_name": "Shabrina Fauzan",
            "birthday": "1988-10-30",
            "phones": [
              "08133473821",
              "082539163912"
            ]
          },
          "articles": [
            {
              "id": 3,
              "title": "Tips Berbagi Makanan",
              "published_at": "2019-01-03T16:00:00"
            },
            {
              "id": 7,
              "title": "Cara Membakar Ikan",
              "published_at": "2019-01-07T14:00:00"
            }
          ]
        },
        {
          "id": 201,
          "username": "norisa",
          "profile": {
            "full_name": "Noor Annisa",
            "birthday": "1986-08-14",
            "phones": []
          },
          "articles": [
            {
              "id": 82,
              "title": "Cara Membuat Kue Kering",
              "published_at": "2019-10-08T11:00:00"
            },
            {
              "id": 91,
              "title": "Cara Membuat Brownies",
              "published_at": "2019-11-11T13:00:00"
            },
            {
              "id": 31,
              "title": "Cara Membuat Brownies",
              "published_at": "2019-11-11T13:00:00"
            }
          ]
        },
        {
          "id": 42,
          "username": "karina",
          "profile": {
            "full_name": "Karina Triandini",
            "birthday": "1986-04-14",
            "phones": [
              "06133929341"
            ]
          },
          "articles": []
        },
        {
          "id": 201,
          "username": "icha",
          "profile": {
            "full_name": "Annisa Rachmawaty",
            "birthday": "1987-12-30",
            "phones": []
          },
          "articles": [
            {
              "id": 39,
              "title": "Tips Berbelanja Bulan Tua",
              "published_at": "2019-04-06T07:00:00"
            },
            {
              "id": 43,
              "title": "Cara Memilih Permainan di Steam",
              "published_at": "2019-06-11T05:00:00"
            },
            {
              "id": 58,
              "title": "Cara Membuat Brownies",
              "published_at": "2019-09-12T04:00:00"
            }
          ]
        }
      ],
    }
  },
  computed: {
    numberOne: function (){
      var name="";
      for(var i=0;i<this.user.length;i++){
        if(this.user[i].profile.phones.length==0){
          name = name + this.user[i].profile.full_name + ", " ;
        }
      }
      name = name.slice(0,-2);
      return name;
    },
    numberTwo: function(){
      var name="";
      for(var i=0;i<this.user.length;i++){
        if(this.user[i].articles.length>0){
          name = name + this.user[i].profile.full_name + ", " ;
        }
      }
      name = name.slice(0,-2);
      return name;
    },
    numberThree: function(){
      var name="";
      for(var i=0;i<this.user.length;i++){
        var userName = this.user[i].profile.full_name;
        if(userName.search("Annis")>=0||userName.search("annis")>=0){
          name = name + this.user[i].profile.full_name + ", " ;
        }
      }
      name = name.slice(0,-2);
      return name;
    },
    numberFour: function(){
      var name="";
      for(var i=0;i<this.user.length;i++){
        if(this.user[i].articles.length>0){
          for(var j=0;j<this.user[i].articles.length;j++){
            var published = this.user[i].articles[j].published_at;
            if(published.slice(0,4)==="2020"){
              name = name + this.user[i].profile.full_name + ", " ;
            }
          }
        }
      }
      name = name.slice(0,-2);
      return name;
    },
    numberFive: function(){
      var name="";
      for(var i=0;i<this.user.length;i++){
        var date = this.user[i].profile.birthday;
        if(date.slice(0,4)==="1986"){
          name = name + this.user[i].profile.full_name + ", " ;
        }
      }
      name = name.slice(0,-2);
      return name;
    },
    numberSix: function(){
      var name="";
      for(var i=0;i<this.user.length;i++){
        if(this.user[i].articles.length>0){
          for(var j=0;j<this.user[i].articles.length;j++){
            var titleLong = this.user[i].articles[j].title;
            if(titleLong.search("Tips")>=0||titleLong.search("tips")>=0){
              name = name + this.user[i].articles[j].title + ", " ;
            }
          }
        }
      }
      name = name.slice(0,-2);
      return name;
    },
    numberSeven: function(){
      var name="";
      for(var i=0;i<this.user.length;i++){
        if(this.user[i].articles.length>0){
          for(var j=0;j<this.user[i].articles.length;j++){
            var published = this.user[i].articles[j].published_at;
            var year = published.slice(0,4);
            var month = published.slice(5,7);
            if(month.slice(0,1)==="0"){
              month = month.slice(1,2);
            }
            year = parseInt(year);
            month = parseInt(month);
            if(year<2019){
              name = name + this.user[i].articles[j].title + ", " ;
            }
            if(year==2019&&month<8){
              name = name + this.user[i].articles[j].title + ", " ;
            }
          }
        }
      }
      name = name.slice(0,-2);
      return name;
    },
  },
}
</script>
