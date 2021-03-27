var Client = require('mongodb').MongoClient;

Client.connect('mongodb://localhost:27017/school', function(error, db){
    if(error) {
        console.log(error);
    } 
    else {
        var query = {}
        // skip - 선택된 document 중에서 건너뛸 개수
        // limit - 선택된 document 중에서 skip 다음부터 가져올 개수
        // 현재 document의 개수가 6개이면 2개를 건너뛰고 3번째부터 2개(3번, 4번)를 가져온다.
        var cursor = db.collection('student').find(query).skip(2).limit(2);
        cursor.each(function(err, doc){
            if(err){
                console.log(err);
            }
            else{
                if(doc != null){
                    console.log(doc);
                }
            }
        });
        db.close();
    }
});