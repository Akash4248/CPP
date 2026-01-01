let a=[2,4,-5,2,45,6,7,-4,3,-45,2,2445,6];
console.log(a)

a=a.sort() // not works properly for negetive numbers
console.log(a)
a=a.sort((a,b)=>b-a) // decreasing order
console.log(a)

a=a.sort((a,b)=> (a-b))
console.log(a)