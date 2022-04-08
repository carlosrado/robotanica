    var correosUsuarios = ["luisInvernadero@gmail.com", "joanBancals@gmail.com"]
    var passUsuarios = ["123456","xoanet12"]
    //Se obtiene los botones en js con getElementById
   
    
    document.onclick = login

    function login()
    {
        var color = "#ced4da"
        document.getElementById("correoTXT").style.borderColor = color
        document.getElementById("passTXT").style.borderColor = color

        var correo = document.getElementById("correoTXT").value
        var pass = document.getElementById("passTXT").value
        console.log(correo)
        var index = correosUsuarios.indexOf(correo);
        if (index != -1)
        {    
            var indexP = passUsuarios.indexOf(pass);
               if (indexP != -1 && indexP == index)
                {

                    window.location.href = "funcionalidades.html";                   
                }

                else
                {
                    color = "#FF0000"
                    document.getElementById("passTXT").style.borderColor = color
                }           
        }

        else
        {
            
            color = "#FF0000"
            document.getElementById("correoTXT").style.borderColor = color
        }

    }
