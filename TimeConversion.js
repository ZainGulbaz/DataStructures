
let str="07:00:42 PM";
let hourStr=str.charAt(0)+str.charAt(1);
if(str.charAt(str.length-2)+str.charAt(str.length-1)=="PM")
{
    
   if(hourStr!=="12")
   {
    hour = parseInt(hourStr)+12;
   str=str.replace(hourStr,hour);
   }

  
}

else{
    if(hourStr==12)
    {
        str=str.replace(hourStr,"00");
    }
    
}
str=str.slice(0,str.length-2);

console.log(str);