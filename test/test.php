<?php

$string ="，带着希望去旅行，比到达终点更美好,it is very beautiful,也不错!";
$string = preg_replace_callback('~[a-z0-9_-]+~i', function ($matches) {
            return "\t".$matches[0];
}, $string);
echo $string."\n";
echo  preg_replace("~[^\p{Han}\p{P}\p{Z}\p{M}\p{N}\p{L}\t]~u", '', $string)."\n";
var_dump(preg_match('/\p{Han}/u', '我'));
var_dump(preg_replace("~[^\p{Han}\p{P}\p{Z}\p{M}\p{N}\p{L}\t]~u", '', 'い我'));
