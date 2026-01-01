let a=[1,2,3,4,5,6,6,7,8]
console.log(a);

//filter out even elements
 function fun(ele)
 {
    if(ele%2==0) return true;
    else return false;
 }

 a=a.filter(fun)
 console.log(a)
 a=a.filter((ele) => {
    return (ele<7)? true: false 
 });
 console.log(a)

//  a=a.filter(ele => (ele<6))
//  console.log(a)

x=a.reduce(function(a,b){
    return a+b;
})
console.log(x);
