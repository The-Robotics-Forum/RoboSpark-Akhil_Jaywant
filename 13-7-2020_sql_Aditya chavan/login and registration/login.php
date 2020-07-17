<?php
session_start();
include('db.php');
if(isset($_POST['submit'])){
    $username=$_POST['username'];
    $password=$_POST['password'];
    
    $query="SELECT * FROM `users` WHERE `username`='$username' AND `password`='$password'";
    $run=mysqli_query($con,$query);
    $row=mysqli_num_rows($run);
    if($row==1){
        include('info.html');
        // $_SESSION['username']=$username;
        // echo "Login successful"."<br>";
        // $user_row=mysqli_fetch_assoc($run);
        // echo "welcome ".$user_row['username'];
    }
    else{
        echo "Invalid login";
    }
}
?>
