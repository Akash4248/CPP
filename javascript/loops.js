// For off loop
a=[3,4,63,345,5,]
for (const element of a) {
    console.log(element)
}
// it copies each element of the array and changes made to element do 
// not reflect in the array

console.log(a);
a.forEach(element => {
    element*=2
    console.log(element)
});
console.log(a)