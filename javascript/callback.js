// call back function is a function which is passed into another function

function product(a,b,c){
    return a*b*c;
}
function fun(x,y){
    let a=x(3,5,6); //Call Back function
    console.log(a-y)
}
fun(product,7);
