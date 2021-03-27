var Client = require('mongodb').MongoClient;

// cmd -> node dbcon
// console에 connected:[Object].. 라는 로그가 출력되면 정상

/*
    (node:21276) [MONGODB DRIVER] Warning: Current Server Discovery and Monitoring engine is deprecated, and will be removed in a future version. To use the new Server Discover and Monitoring engine, pass option { useUnifiedTopology: true } to the MongoClient constructor.
    (Use `node --trace-warnings ...` to show where the warning was created)
    라는 에러가 뜨는데 해결 방법 찾아보기
    위에 connected~ 는 잘 뜸
*/

Client.connect('mongodb://localhost:27017/school', function(error, db){
    if(error){
        console.log(error);
    }
    else{
        console.log("connected:" + db);
        db.close();
    }
});