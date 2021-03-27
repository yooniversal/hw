var Client = require('mongodb').MongoClient;

Client.connect('mongodb://localhost:27017/school', function(error, db){
    if(error) {
        console.log(error);
    } 
    else {
        // 삭제할 대상
        var query = {name:'Joe'};
        db.collection('student').remove(query, function(err, removed){
            if(err){
                console.log(err);
            }
            else{
                console.log('removed successfully!');
            }
        });
        db.close();
    }
});