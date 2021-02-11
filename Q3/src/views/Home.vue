<template>
  <div class="home">
    <p>1. Find items in the Meeting Room</p>
    <p>Answer : <a>{{numberOne}}</a></p>
    <p>2. Find all electronic devices</p>
    <p>Answer : <a>{{numberTwo}}</a></p>
    <p>3. Find all the furniture</p>
    <p>Answer : <a>{{numberThree}}</a></p>
    <p>4. Find all items were purchased on 16 Januari 2020</p>
    <p>Answer : <a>{{numberFour}}</a></p>
    <p>5. Find all items with brown color</p>
    <p>Answer : <a>{{numberFive}}</a></p>
  </div>
</template>

<script>
export default {
  data() {
    return {
      inventory : [
        {
          "inventory_id": 9382,
          "name": "Brown Chair",
          "type": "furniture",
          "tags": [
            "chair",
            "furniture",
            "brown"
          ],
          "purchased_at": 1579190471,
          "placement": {
            "room_id": 3,
            "name": "Meeting Room"
          }
        },
        {
          "inventory_id": 9380,
          "name": "Big Desk",
          "type": "furniture",
          "tags": [
            "desk",
            "furniture",
            "brown"
          ],
          "purchased_at": 1579190642,
          "placement": {
            "room_id": 3,
            "name": "Meeting Room"
          }
        },
        {
          "inventory_id": 2932,
          "name": "LG Monitor 50 inch",
          "type": "electronic",
          "tags": [
            "monitor"
          ],
          "purchased_at": 1579017842,
          "placement": {
            "room_id": 3,
            "name": "Lavender"
          }
        },
        {
          "inventory_id": 232,
          "name": "Sharp Pendingin Ruangan 2PK",
          "type": "electronic",
          "tags": [
            "ac"
          ],
          "purchased_at": 1578931442,
          "placement": {
            "room_id": 5,
            "name": "Dhanapala"
          }
        },
        {
          "inventory_id": 9382,
          "name": "Alat Makan",
          "type": "tableware",
          "tags": [
            "spoon",
            "fork",
            "tableware"
          ],
          "purchased_at": 1578672242,
          "placement": {
            "room_id": 10,
            "name": "Rajawali"
          }
        }
      ],
    }
  },
  computed: {
    numberOne: function (){
      var items="";
      for(var i=0;i<this.inventory.length;i++){
        if(this.inventory[i].placement.name==="Meeting Room"){
          items = items + this.inventory[i].name + ", " ;
        }
      }
      items = items.slice(0,-2);
      return items;
    },
    numberTwo: function (){
      var items="";
      for(var i=0;i<this.inventory.length;i++){
        if(this.inventory[i].type==="electronic"){
          items = items + this.inventory[i].name + ", " ;
        }
      }
      items = items.slice(0,-2);
      return items;
    },
    numberThree: function (){
      var items="";
      for(var i=0;i<this.inventory.length;i++){
        if(this.inventory[i].type==="furniture"){
          items = items + this.inventory[i].name + ", " ;
        }
      }
      items = items.slice(0,-2);
      return items;
    },
    numberFour: function (){
      var items="";
      for(var i=0;i<this.inventory.length;i++){
        var date = this.inventory[i].purchased_at;
        if(date==20200116){
          items = items + this.inventory[i].name + ", " ;
        }
      }
      items = items.slice(0,-2);
      return items;
    },
    numberFive: function (){
      var items="";
      for(var i=0;i<this.inventory.length;i++){
        var name = this.inventory[i].name;
        if(name.search("Brown")>=0||name.search("brown")>=0){
          items = items + this.inventory[i].name + ", " ;
        }
      }
      items = items.slice(0,-2);
      return items;
    },
  },
}
</script>
