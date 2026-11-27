<?php
include("conecta.php"); //chamou pela conexão
$user=$_REQUEST['usuario'] ?? ""; //veio do html
$pass=$_REQUEST['senha'] ?? ""; //pegou a senha 
$consulta="select *from usuarios where usuario='$user' and senha='$pass'";
$resultado=mysqli_query($link,$consulta)or die ("Erro na bosta do select seu merda");
if (mysqli_num_rows($resultado)> 0) //numero de linhas retornadas
    header('location:principal.html'); //chama pela pagina 
else 
    echo"usuário ou senha inválida"; //chama pela página
mysqli_close($link); //fecha a conexão

?>