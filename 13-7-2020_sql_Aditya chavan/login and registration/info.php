<?php
session_start();
include('db.php');
if(isset($_POST['submit'])){
    $student_id=$_POST['student_id'];
    $query="SELECT * FROM `info` WHERE `stud_id`='$student_id'";
    $run=mysqli_query($con,$query);
    $row=mysqli_num_rows($run);
    if($row==1){
        $SESSION['student_id']=$student_id;
        echo "The Student records are =>"."<br>";
        $user_row=mysqli_fetch_assoc($run);
        echo "Student id : ".$user_row['stud_id']."<br>";
        echo "Student name : ".$user_row['stud_name']."<br>";
        echo "Student branch : ".$user_row['branch']."<br>";
        echo "Student cgpa : ".$user_row['cgpa']."<br>";
    }
    else{
        echo "No data found";
    }

}

?>