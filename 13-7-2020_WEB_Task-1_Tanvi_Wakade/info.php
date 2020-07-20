

<?php


include('database.php');

if(isset($_POST['submit']))
{
    $stud_id = $_POST['stud_id'];
    // echo $user_id;
    
    $query="SELECT * FROM `students` WHERE `stud_id`='$stud_id'";
    $run = mysqli_query($con , $query);
    $row = mysqli_num_rows($run);
    if($row==1)
    {
        
        // echo "login successful" . "<br>";
        $stud_row = mysqli_fetch_assoc($run);  //values fetched
        
        $id=$stud_id;
        $name = $stud_row['stud_name'] ;
        $branch= $stud_row['branch'];
        $cgpa= $stud_row['cgpa'];
    
    }
    else 
    {
        echo "Login Failed";
    }
}

?>
<html lang="en">
    <head>
        <meta charset="UTF-8" />
        <title>View Information</title>
        <link rel="stylesheet" href="css/style.css" />
        
    </head>
    <body>
        
            <?php if($row==1) { ?>
                <div class="info-box" >
                    <h4> Name :<?php echo $name; ?></h4>
                    <h4> Branch :<?php echo $branch; ?></h4>
                    <h4>CGPA :<?php echo $cgpa; ?></h4>
                 </div>  
            <?php } ?>
            
           
    </body>
</html>
