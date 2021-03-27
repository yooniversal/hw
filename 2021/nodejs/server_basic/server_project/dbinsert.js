var Client = require('mongodb').MongoClient;

// 데이터 한개 입력
Client.connect('mongodb://localhost:27017/school', function(error, db){
    if(error){
        console.log(error);
    }
    else{
        // 입력할 document 생성
        var michael = {name:'Michael', age:15, gender:'M'};
        // student 컬렉션의 insert() 함수에 입력
        db.collection('student').insert(michael);
        db.close();
    }
});