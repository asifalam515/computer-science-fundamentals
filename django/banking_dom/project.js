var handleDeposit=()=>{

  var convertedInputValue=getConvertedValue("deposit-input","value")
 var convertedAmount=getConvertedValue("deposit-amount","innerText")
 var sum=convertedInputValue+convertedAmount
 setInnerText("deposit-amount",sum)

var convertedTotalAmount=getConvertedValue("total-amount","innerText")
var totalSum=convertedInputValue+convertedTotalAmount
setInnerText("total-amount",totalSum)



}

const getConvertedValue=(id,element)=>{
  if(element =="innerText"){
    var value=document.getElementById(id).innerText
    return parseFloat(value)
  }
  else{
    var value=document.getElementById(id).value
    return parseFloat(value)
  }
  
  
   
}


const handle_withdraw=()=>{
 
  var convertedInputWithdraw=getConvertedValue("withdraw-input","value")
  
  var convertedWithdrawAmount=getConvertedValue("withdraw-amount","innerText")
  var sum=convertedInputWithdraw+convertedWithdrawAmount
  setInnerText("withdraw-amount",sum)
  document.getElementById("withdraw-input").value=""

var convertedTotalAmount=getConvertedValue("total-amount","innerText")
var totalSum=convertedTotalAmount-convertedInputWithdraw
// document.getElementById("total-amount").innerText=totalSum
setInnerText("total-amount",totalSum)

}


const setInnerText=(id,value)=>{
document.getElementById(id).innerText=value;
  
}