var http = require('http');

var server = http.createServer(function(req, res) {
    res.writeHead(200, {'Content-Type': 'text/plain'});
    res.end('Hello World\n');
});

server.listen(3000, '127.0.0.1', function() {
    console.log('Server is listening on http://127.0.0.1:3000/');
});

