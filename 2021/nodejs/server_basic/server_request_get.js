var http = require('http');

// 요청한 url을 객체로 만들기 -> url 모듈 사용
var url = require('url');
// 위 url 중 Query String을 객체로 만들기 -> querystring 모듈 사용
var querystring = require('querystring');

var server = http.createServer(function(request, response){
    console.log('--- log start ---');

    // 브라우저에서 요청한 주소를 parsing하여 객체화 후 출력
    var parseUrl = url.parse(request.url);
    console.log(parseUrl);

    // 객체화된 url 중 Query String 부분만 따로 객체화 후 출력
    var parsedQuery = querystring.parse(parseUrl.query, '&', '=');
    console.log(parsedQuery);

    console.log('--- log end ---');

    var test = parsedQuery.var1, test2 = parsedQuery.var2, test3 = parsedQuery.var3;
    response.writeHead(200, {'Content-Type' : 'text/html'});
    response.end('var1 값은 ' + test + ' var2 값은 ' + test2 + ' var3 값은 ' + test3);
});

server.listen(8080, function(){
    console.log('Server is running...');
});

/*

--- log start ---
Url {
  protocol: null,
  slashes: null,
  auth: null,
  host: null,
  port: null,
  hostname: null,
  hash: null,
  search: '?var1=newData&var2=153&var3=testdata2017',
  query: 'var1=newData&var2=153&var3=testdata2017',
  pathname: '/',
  path: '/?var1=newData&var2=153&var3=testdata2017',
  href: '/?var1=newData&var2=153&var3=testdata2017'
}
[Object: null prototype] {
  var1: 'newData',
  var2: '153',
  var3: 'testdata2017'
}
--- log end ---
--- log start ---
Url {
  protocol: null,
  slashes: null,
  auth: null,
  host: null,
  port: null,
  hostname: null,
  hash: null,
  search: null,
  query: null,
  pathname: '/favicon.ico',
  path: '/favicon.ico',
  href: '/favicon.ico'
}
[Object: null prototype] {}
--- log end ---

*/