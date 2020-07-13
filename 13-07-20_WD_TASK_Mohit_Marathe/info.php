<?php
include('conn.php');
if(isset($_POST['submit']))
{
    $number=$_POST['number'];

    $query = "SELECT * FROM `students` WHERE `stud_id`='$number'";
    $run=mysqli_query($con,$query);
    
    if($run)
    {
        
        $user_row=mysqli_fetch_assoc($run);
        echo "Name: ".$user_row['stud_name']."<br>";
        echo "Branch: ".$user_row['branch']."<br>";
        echo "CGPA: ".$user_row['cgpa']."<br>";
    }
    else
    {
        echo "unsuccess";
    }
}
?>