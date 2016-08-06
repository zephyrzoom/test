const http = require('http');
var roomid = 89757;
const options = {
    hostname: 'www.panda.tv',
    path: '/ajax_chatinfo?roomid=' + roomid,
    // headers: { 'User-Agent': 'Mozilla/5.0' }
};

http.get({
    hostname: 'www.panda.tv',
    path: '/ajax_chatinfo?roomid=' + roomid,
    // headers: { 'User-Agent': 'Mozilla/5.0' }
}, function(res) {
    res.on('data', function(chunk) { console.log(chunk.toString()); });
});
