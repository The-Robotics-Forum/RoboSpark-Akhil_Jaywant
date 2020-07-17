<?php
include('db.php');
    if(isset($_POST['submit'])){
        $username=$_POST['uname'];
        $firstname=$_POST['firstname'];
        $lastname=$_POST['lastname'];
        $email=$_POST['email'];
        $projectname=$_POST['projectname'];
        $projectdescription=$_POST['projectdescription'];
        $password=$_POST['password'];
        
        $query="INSERT INTO `users`( `username`, `user_firstname`, `user_lastname`, `user_email`, `project_name`, `project_description`, `password`) VALUES ('$username','$firstname','$lastname','$email','$projectname','$projectdescription','$password')";
        $run=mysqli_query($con,$query);
        if($run){
            echo "Inserted";
        }
        else{
            echo "Not inserted";
            echo mysqli_error($con);
        }
    }
?>