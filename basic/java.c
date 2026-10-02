 
<!DOCTYPE HTML> 
<html> 
<head> 
    <title>Interactive Home Page</title> 
    <style> 
        body { 
            text-align: center; 
            background-color: #de1199; 
            font-family: Arial, sans-serif; 
            transition: background 0.5s; 
        } 
        h1 { 
            color: #008000; 
        } 
        h2 { 
            color: #0047ab; 
        } 
        input { 
            padding: 8px; 
            border: 2px solid #ccc; 
            border-radius: 5px; 
            transition: 0.3s; 
        } 
        input:focus { 
            outline: none; 
        } 
        #msg { 
            margin-top: 20px; 
            color: darkred; 
            font-weight: bold; 
        } 
    </style> 
</head> 
<body onmouseover="handleMouseOver()"> 
 
    <h1> Snehal from EnTC Department</h1> 
    <h2>Mouse Over & Focus Event Demo</h2> 
 
    <label><b>Enter your name:</b></label><br><br> 
    <input type="text" placeholder="Type here..." onfocus="handleFocus(this)"> 
    <p>When you hover or focus, magic happens!</p> 
 
    <h3 id="msg"></h3> 
 
    <script> 
        const msg = document.getElementById("msg"); 
 
        function changeBackground(color) { 
            document.body.style.background = color; 
        } 
 
        function handleMouseOver() { 
            changeBackground('#ffd1dc'); // light pink 
            msg.innerHTML = "Background color changed on mouse over!"; 
        } 
 
        function handleFocus(element) { 
            element.style.background = "#ffff99"; // light yellow 
            msg.innerHTML = "Input field is focused!"; 
        } 
    </script> 
</body> 
</html> 
 
Output:- 
 