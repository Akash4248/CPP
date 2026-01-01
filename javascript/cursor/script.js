let x=document.getElementById("cursor")
let z=document.getElementById("main")
x.addEventListener("click",function(){
    document.getElementById("main").style.backgroundColor='aqua';

})
z.addEventListener("mousemove",function(a){
    console.log(a.x,a.y)
    x.style.left=a.x+"px"
    x.style.top=a.y+"px"
})