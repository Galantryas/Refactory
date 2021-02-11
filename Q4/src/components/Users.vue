<template>
  <div class="main">
    <div class="main-title">{{ msg }}</div>
    <div class="user-count">
      <div><a class="count">{{ count }}</a>Users</div>
    </div>
    <div class="wrapper">
      <div v-for="user in users" :key="user.name" class="card">
        <div class="body-card">
          <div class="title">Name</div>
          <div class="name">{{ user.name }}</div>
          <div class="wrapper-card">
            <div>
              <div class="title">Email</div>
              <div class="email">{{ user.email }}</div>
            </div>
            <div>
              <div class="title">Phone</div>
              <div class="phone">{{ user.phone }}</div>
            </div>
            <div>
              <div class="title">Website</div>
              <div class="website">{{ user.website }}</div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import axios from "axios";

export default {
  name: "Users",
  props: {
    msg: String,
  },
  computed: {
    users() {
      return this.$store.getters.getData;
    },
    count() {
      return this.$store.getters.getCountData;
    },
  },
  mounted() {
    axios
      .get("https://jsonplaceholder.typicode.com/users")
      .then((response) => {
        this.setData(response.data);
      })
      .catch((error) => {
        return (this.loading=false);
      });
  },
  methods: {
    setData(data) {
      this.$store.dispatch('setDatas', data);
    },
  },
};
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
.main {
  background-color: #f5f7fa;
  padding: 10px;
}
.main-title {
  font-weight: 600;
  font-size: 25px;
}
.count {
  color: #83dd8b;
  font-weight: 800;
  margin-right: 10px;
}
.user-count {
  border-bottom: 1px solid #e1e1e7;
  color: #646464;
  display: flex;
}
.wrapper {
  display: flex;
  flex-wrap: wrap;
}
.wrapper-card {
  display: flex;
  flex-direction: row;
}
.body-card{
  padding: 50px 20px;
  margin:20px;
  border-radius:15px;
  background-color: #FFFFFF;
  height: 100px;
  width: 550px;
}
.title {
  color: #EDEDF0;
}
.name {
  font-weight: 600;
  font-size: 20px;
  color: #646464;
  margin: 0 0 15px 0;
}
.email{
  margin-right: 65px;
}
.phone{
  margin-right: 65px;
}
.website{
  color: #83dd8b;
}
</style>
