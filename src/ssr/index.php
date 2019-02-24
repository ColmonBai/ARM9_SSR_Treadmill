<?php
	include 'database.php';
	header("Content-Type:text/html; charset=utf-8");
	
	//insert new
	$myfile = fopen("G:\share\data.txt", "r") or die("Unable to open file!");
	$data = fgetc($myfile);
	echo $data;
	$sql = "INSERT INTO `speed_tab` (`speed_val`) VALUES ('$data')"; 
    mysql_query($sql);
	echo "<br/>";

	//show data
    $speed="";
    $sql="SELECT * FROM speed_tab";
    $result = mysql_query($sql);
    while($row = mysql_fetch_array($result)){
		$speed=$speed.$row['speed_val'].",";
	}	
	$newstr = substr($speed,0,strlen($speed)-1);
	$newstr = strrev($newstr);
	echo $newstr; 
	

?>


<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
	<meta http-equiv="refresh" content="3">
    <title>ECharts</title>
    <!-- 引入 echarts.js -->
    <script src="echarts.js"></script>
</head>
<body>
    <!-- 为ECharts准备一个具备大小（宽高）的Dom -->
    <div id="main" style="width: 600px;height:400px;"></div>

    <script type="text/javascript">
        // 基于准备好的dom，初始化echarts实例
        var myChart = echarts.init(document.getElementById('main'));

        // 指定图表的配置项和数据
        var option = {
            title: {
                text: 'SSR智能跑步机'
            },
            tooltip: {},
            legend: {
                data:['速度']
            },
            xAxis: {
                data: ["1","2","3","4","5","6","7"]
            },
            yAxis: {},
            series: [{
                name: '销量',
                type: 'bar',
                //data: [2, 3, 4, 1, 3, 2]
				data: [<?php echo $newstr;?>]
            }]
        };

        // 使用刚指定的配置项和数据显示图表。
        myChart.setOption(option);
    </script>
</body>
</html>