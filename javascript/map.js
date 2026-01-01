function add(e){
    return e*2;
}

let  a=[2,45,5];
console.log(a);
a=a.map(add);
console.log(a)

a=a.map(function(ele) {return ele*ele});
console.log(a)

a=a.map((ele )=> { return ele/10 });
console.log(a)

a=a.map(ele => ele*2)
console.log(a);
