var http = require('http');

// 서버 생성 후, 사용자로부터 http 요청이 들어오면 내부 코드가 실행됨
var server = http.createServer(function(request, response){
    response.writeHead(200, {'Content-Type' : 'text/html'});
    response.end('Hello node.js!');
});

// 8080 포트를 가진 서버를 실행
server.listen(8080, function(){
    console.log('Server is running...');
});

// http://localhost:8080 에서 메세지가 출력됨을 확인할 수 있음