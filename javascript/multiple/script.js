let a=document.getElementById("main")
let z=["https://i.pinimg.com/236x/2b/e2/88/2be2889eda39343f49a19d25911135e6.jpg","https://i.pinimg.com/564x/70/d4/25/70d425cda754d21424572ee33c50ac34.jpg","https://i.pinimg.com/736x/a9/82/71/a982716d42680e8ef4d5ee8a242b603d.jpg","https://i.pinimg.com/736x/36/2c/3c/362c3cd3f46cf4d6a2cc014c5519dd6f.jpg","https://i.pinimg.com/474x/88/68/70/886870037d6089f79d3dabce771107f4.jpg","https://i.pinimg.com/474x/3f/28/7a/3f287a000945262cd30887d0566d12c6.jpg","https://i.pinimg.com/236x/84/04/37/8404375202b03586fc9d17768abf3f60.jpg"]
for(let x=0;x<60;x++)
{
    let r=Math.floor(Math.random()*z.length)
    a.innerHTML+=`<div class="shape">
        <img src="${z[r]}" alt="">
     </div>`
}