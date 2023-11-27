const loadData=()=>{
    searchText=document.getElementById("search-box").value
    console.log(searchText);
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${searchText}`)
    .then((res)=>res.json())
    .then(data=>displayData(data.meals))
}
const displayData=(data)=>{
document.getElementById("total-meals").innerText=data.length
}