<div class="news_01">
<div class="news_title">
<h2>{dede:field name='typename'/}</h2><b><a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">¸ü¶à>></a></b>
</div>
<ul>
{dede:arclist    row='10'    orderby ='pubdate'     titlelen='30'                }
<li><a href="[field:arcurl/]" title="[field:fulltitle/]">[field:title/]</a></li>
{/dede:arclist}
</ul>