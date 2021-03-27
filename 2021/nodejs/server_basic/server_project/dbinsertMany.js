var Client = require('mongodb').MongoClient;

// 데이터 여러개 입력
Client.connect('mongodb://localhost:27017/school', function(error, db){
    if(error){
        console.log(error);
    }
    else{
        // 입력할 documents 미리 생성
        var jordan = {name:'Jordan', age:16, gender:'M'};
        var amanda = {name:'Amanda', age:17, gender:'F'};
        var jessica = {name:'Jessica', age:15, gender:'F'};
        var james = {name:'James', age:19, gender:'M'};
        var catherine = {name:'Catherine', age:18, gender:'F'};

        // insertMany() 함수에 배열 형태로 입력
        db.collection('student').insertMany([jordan,amanda,jessica,james,catherine]);
        db.close();
    }
});