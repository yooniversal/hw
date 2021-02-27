var http = require('http');
var querystring = require('querystring');

var server = http.createServer(function(request, response){
    var postdata = ''; // POST로 전달된 데이터를 담을 변수
    // request 객체의 on() 함수로 'data' 이벤트 연결
    request.on('data', function (data) {
        // data 이벤트가 발생할 때마다 callback을 통해 postdata에 값을 저장
        postdata = postdata + data;
    });

    // request 객체의 on() 함수로 'end' 이벤트 연결
    request.on('end', function(){
        // end 이벤트가 발생하면 postdata를 querystring으로 객체화
        // end는 1번만 발생
        var parsedQuery = querystring.parse(postdata);
        console.log(parsedQuery);

        // HEADER와 데이터를 담아 클라이언트에 응답 처리
        response.writeHead(200, {'Content-Type' : 'text/html'});
        response.end('var1의 값 = ' + parsedQuery.var1);
    })
});

server.listen(8080, function(){
    console.log('Server is running...');
});