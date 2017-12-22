<?php
$z[0]=Array("field","",202,221);
$z[0][4]['name']="title";
$z[1]=Array("global","",222,248);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",289,318);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",358,416);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",744,779);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n    <li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n    ",890,1074);
$z[5][4]['type']="son";
$z[5][4]['currentstyle']="<li><a href='~typelink~' class='hover'>~typename~</a></li>";
$z[6]=Array("list","\r\n    <div class=\"row\">\r\n      <div class=\"col-md-12 list-right\"> <a href=\"[field:arcurl/]\">[field:title/]</a> <span>日期：[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</span>\r\n        <p>　　[field:description function='cn_substr(@me,250)'/]...</p>\r\n      </div>\r\n    </div>\r\n    ",1181,1511);
$z[6][4]['pagesize']="10";
$z[7]=Array("include","",1585,1620);
$z[7][4]['filename']="foot.htm";

?>