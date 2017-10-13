// 百度地图API功能
var mp = new BMap.Map("allmap");
mp.centerAndZoom(new BMap.Point(109.048895,34.311102), 14);
mp.enableScrollWheelZoom();
// 复杂的自定义覆盖物
function ComplexCustomOverlay(point, text){
    this._point = point;
    this._text = text;
}
ComplexCustomOverlay.prototype = new BMap.Overlay();
ComplexCustomOverlay.prototype.initialize = function(map){
    this._map = map;
    var div = this._div = document.createElement("div");
    div.style.position = "absolute";
    div.style.zIndex = BMap.Overlay.getZIndex(this._point.lat);
    div.style.backgroundColor = "#EE5D5B";
    div.style.border = "1px solid #BC3B3A";
    div.style.color = "white";
    div.style.height = "18px";
    div.style.padding = "2px ";
    div.style.lineHeight = "18px";
    div.style.whiteSpace = "nowrap";
    div.style.MozUserSelect = "none";
    div.style.fontSize = "12px";
    div.style.borderRadius = "18px";
    var span = this._span = document.createElement("span");
    div.appendChild(span);
    span.appendChild(document.createTextNode(this._text));
    var that = this;

    var arrow = this._arrow = document.createElement("div");
    arrow.style.background = "url(http://map.baidu.com/fwmap/upload/r/map/fwmap/static/house/images/label.png) no-repeat";
    arrow.style.position = "absolute";
    arrow.style.width = "11px";
    arrow.style.height = "10px";
    arrow.style.top = "22px";
    arrow.style.left = "10px";
    div.appendChild(arrow);



    mp.getPanes().labelPane.appendChild(div);

    return div;
}
ComplexCustomOverlay.prototype.draw = function(){
    var map = this._map;
    var pixel = map.pointToOverlayPixel(this._point);
    this._div.style.left = pixel.x - parseInt(this._arrow.style.left) + "px";
    this._div.style.top  = pixel.y - 30 + "px";
}
var txt = "中国银行棒棒哒";

var myCompOverlay1 = new ComplexCustomOverlay(new BMap.Point(109.038895,34.311102),
txt);
var myCompOverlay2 = new ComplexCustomOverlay(new BMap.Point(109.047895,34.321102),
txt);
var myCompOverlay3 = new ComplexCustomOverlay(new BMap.Point(109.048895,34.302102),
txt);
var myCompOverlay4 = new ComplexCustomOverlay(new BMap.Point(109.048695,34.311702),
txt);
var myCompOverlay5 = new ComplexCustomOverlay(new BMap.Point(109.058190,34.311102),
txt);

mp.addOverlay(myCompOverlay1);
mp.addOverlay(myCompOverlay2);
mp.addOverlay(myCompOverlay3);
mp.addOverlay(myCompOverlay4);
mp.addOverlay(myCompOverlay5);
