let a = document.getElementById("b1")
let b = document.getElementById("b2")
let c = document.getElementById("b3")
let d = document.getElementById("b4")
let i=document.getElementById("main")

a.addEventListener("mouseenter", function () {
    let n = Math.ceil(100 * Math.random())
    a.style.backgroundColor = 'white '
    a.innerHTML = `<h1>${n}<h1>`;

})
a.addEventListener("mouseleave", function () {
    a.style.backgroundColor = 'aqua'
    a.innerHTML = `<h1>${n}<h1>`;
})
d.addEventListener("dblclick", function () {
    let r1=Math.ceil(256 * Math.random())
    let r2=Math.ceil(256 * Math.random())
    let r3=Math.ceil(256 * Math.random())
    
    d.style.backgroundColor=`rgb(${r1},${r2},${r3})`


})
i.addEventListener("mouseenter", function () {
    let r1=Math.ceil(256 * Math.random())
    let r2=Math.ceil(256 * Math.random())
    let r3=Math.ceil(256 * Math.random())
    
   i.style.backgroundColor=`rgb(${r1},${r2},${r3})`


})
clr = 'red'
b.addEventListener("mouseenter", function () {
    if (clr == 'green') {
        b.style.backgroundColor = 'green'
        clr = 'blue';
    }
    else if (clr == 'blue') {
        b.style.backgroundColor = 'blue'
        clr = 'red'
    }
    else {
        b.style.backgroundColor = 'red'
        clr = 'green'
    }

})
b.addEventListener("mouseleave", function () {
    b.style.backgroundColor = 'aqua'

})

c.addEventListener("mouseenter", function () {
    let r1=Math.ceil(256 * Math.random())
    let r2=Math.ceil(256 * Math.random())
    let r3=Math.ceil(256 * Math.random())
    
    c.style.backgroundColor=`rgb(${r1},${r2},${r3})`

})
c.addEventListener("mouseleave", function () {
    
    
    c.style.backgroundColor='aqua '

})