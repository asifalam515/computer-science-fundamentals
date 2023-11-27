const loadData=()=>{
    searchText=document.getElementById("search-box").value
    // console.log(searchText);
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?f=${searchText}`)
    .then((res)=>res.json())
    .then(data=>displayData(data.meals))
}
const displayData=(data)=>{
document.getElementById("total-meals").innerText=data.length
const mealsContainer=document.getElementById("meals-container")
data.forEach((meal)=>{
    console.log(meal);
    const card=document.createElement("div")
    card.classList.add("box")
    card.innerHTML=`
    <img class="box-img" src=${meal.strMealThumb} alt="">
    <h2> ${meal?.strMeal}</h2>
    <P>${meal?.strInstructions.slice(0,50)}</P>
    <button class="btn btn-primary">Details</button>
    `
    mealsContainer.appendChild(card)
})
}