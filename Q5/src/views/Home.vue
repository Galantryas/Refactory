<template>
  <div class="home">
    <div class="toolbar">
      <div class="logodiv">
        <a class="logo">Logo</a>
      </div>
      <div class="profile">
        <img src="../assets/avatar.png" alt="avatar" class="avatar">
        <a class="name">Samsul Arifin</a>
        <img src="../assets/settings.png" alt="settings">
      </div>
    </div>
    <div class="container">
      <div class="boxleft">
        <div class="box">
          <img src="../assets/todo.png" alt="todo" class="todoimg">
          <div class="greet">
            <p class="halo">Hallo, Sam!</p>
            <p class="reminder">You have 2 tasks left for today, Already completed Task today?</p>
          </div>
        </div>
        <div class="calender">
        </div>
      </div>
      <div class="separation"></div>
      <div class="boxright">
        <a class="title">Task For Today</a>
        <div class="topbox">
          <div class="button">
            <img src="../assets/plus.png" alt="plus" class="plus">
            <a>Create New</a>
          </div>
          <div class="search">
            <a class="cari">Cari</a>
            <img src="../assets/cari.png" alt="cari" class="cariimg">
          </div>
        </div>
        <div class="list">
          <div class="titleBox">
            <a class="taskTitle">Daily Stand Up</a>
            <div class="status">
              <img src="../assets/complete.png" alt="complete" class="statusIcon">
              <a>Complete</a>
            </div>
          </div>
          <a class="taskDesc">1. Dont forget prepare your report and any blocker in Front end.</a>
          <a class="taskDesc">2. Telling Project Manager for new assignment.</a>
          <div class="iconBox">
            <img src="../assets/pen.png" alt="edit" class="icon">
            <img src="../assets/delete.png" alt="delete" class="icon">
          </div>
        </div>
        <div class="list">
          <div class="titleBox">
            <a class="taskTitle">Meeting With Client A</a>
            <div class="status2">
              <img src="../assets/complete2.png" alt="complete" class="statusIcon">
              <a>Set As Complete</a>
            </div>
          </div>
          <a class="taskDesc">1. Loream Ipsum Dolor Amet</a>
          <a class="taskDesc">2. Loream Ipsum Dolor Amet</a>
          <div class="iconBox">
            <img src="../assets/pen.png" alt="edit" class="icon">
            <img src="../assets/delete.png" alt="delete" class="icon">
          </div>
        </div>
        <div class="list">
          <div class="titleBox">
            <a class="taskTitle">Meeting With Client B</a>
            <div class="status2">
              <img src="../assets/complete2.png" alt="complete" class="statusIcon">
              <a>Set As Complete</a>
            </div>
          </div>
          <a class="taskDesc">1. Loream Ipsum Dolor Amet</a>
          <a class="taskDesc">2. Loream Ipsum Dolor Amet</a>
          <div class="iconBox">
            <img src="../assets/pen.png" alt="edit" class="icon">
            <img src="../assets/delete.png" alt="delete" class="icon">
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
export default {
  data() {
    return {
    }
  },
  computed: {
  },
}
</script>

<style scoped>
.toolbar{
  background-color: #0442D0;
  height: 12.5vh;
  width: 100%;
  display: flex;
}
.logodiv{
  height: 100%;
  width:20%;
  padding: 20px 0 0 44px;
}
.logo{
  color: white;
  font-size: 30px;
}
.profile{
  height: 87px;
  width: 20%;
  position: absolute;
  display: flex;
  flex-direction: row;
  align-items: center;
  top:0;
  right:0;
}
.name{
  color:white;
  margin: 0 35px 0 21px;
}
.avatar{
  width: 52px;
  height: 52px;
}
.container{
  display: flex;
  flex-direction: row;
  height: 87vh;
  width:100vw;
}
.boxleft{
  display: flex;
  flex-direction: column;
  align-items: center;
  height:87.5vh;
  background-color: #FBFCFF;
  width: 35vw;
}
.separation{
  height:87.5vh;
  width: 0.2vw;
  background-color: #F4F7FE;
}
.boxright{
  display: flex;
  flex-direction: column;
  height:87.5vh;
  background-color: #FBFCFF;
  width: 64.8vw;
}
.box{
  display: flex;
  flex-direction: row;
  height: 25vh;
  width: 30vw;
  background-color: #0442D0;
  margin-top: 10%;
  border-radius:20px;
}
.todoimg{
  margin: 25px;
  width:7vw;
  height: 12vh;
}
.greet{
  margin: 1% 0 0 4%;
  width:50%;
}
.halo{
  color: #FABE2C;
  font-size: 120%;
}
.reminder{
  color: white;
  font-size: 120%;
}
.calender{
  margin-top: 10%;
  width:30vw;
  height: 40vh;
  background-color: white;
  border-radius: 20px;
  box-shadow: 0 4px 8px 0 rgba(0, 119, 255, 0.2), 0 6px 40px 0 rgba(11, 33, 231, 0.19);
}
.title{
  margin-top: 5%;
  margin-left: 4%;
  margin-bottom:5%;
  font-size: 35px;
}
.topbox{
  display: flex;
  flex-direction: row;
  margin-left: 4%;
  width: 92%;
  height:8%;
}
.button{
  display: flex;
  flex-direction: row;
  justify-content: center;
  align-items: center;
  height:100%;
  width: 20%;
  background-color: #0442D0;
  border-radius:20px;
  color: white;
  cursor: pointer;
}
.plus{
  margin-right:10%;
}
.search{
  display: flex;
  flex-direction: row;
  align-items: center;
  height:92%;
  width: 77%;
  margin-left:3%;
  background-color: #FBFCFF;
  border-radius:20px;
  border-style: solid;
  border-color: #0442D0;
  border-width: 2px;
  color: #0442D0;
}
.cari{
  margin-left:48%;
}
.cariimg{
  margin-left:42%;
}
.list{
  display: flex;
  flex-direction: column;
  margin-left: 4%;
  margin-top: 2%;
  width: 92%;
  height:20%;
  border-radius:20px;
  background-color: white;
  box-shadow: 0 2px 4px 0 rgba(64, 105, 151, 0.034), 0 2px 40px 0 rgba(35, 41, 94, 0.068);
}
.taskTitle{
  font-size: 130%;
  margin-bottom:2%;
  margin-left: 2%;
  margin-top:2%;
  color: rgb(60, 67, 87);
}
.taskDesc{
  margin-left: 2%;
  color: #7D8599;
}
.icon{
  height:15px;
  width: 15px;
  margin-right: 30%;
  cursor: pointer;
}
.iconBox{
  display: flex;
  flex-direction: row;
  margin-left:85%;
}
.titleBox{
  display: flex;
  flex-direction: row;
  align-items: center;
}
.status{
  display: flex;
  flex-direction: row;
  background-color: #FEEAEB;
  width: 20%;
  height: 55%;
  border-radius: 10px;
  margin-left: 5%;
  color:#FB3453;
  align-items: center;
  justify-content: center;
}
.status2{
  display: flex;
  flex-direction: row;
  background-color: #F2F4F8;
  width: 20%;
  height: 55%;
  border-radius: 10px;
  margin-left: 5%;
  color:#DEE1E6;
  align-items: center;
  justify-content: center;
}
.statusIcon{
  margin-right: 5%;
}
</style>
