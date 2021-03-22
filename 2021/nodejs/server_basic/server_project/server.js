var mongoose = require('mongoose');

// testDB 세팅
mongoose.connect('mongodb://localhost:27017/testDB');

// 연결된 testDB 사용
var db = mongoose.connection;

// 연결 실패시
db.on('error', function(){
    console.log('Connection Failed!');
});

// 연결 성공시
db.once('open', function(){
    console.log('Connected!');
});

// Schema 생성
// 입력될 데이터 타입이 정의된 DB 설계도
var student = mongoose.Schema({
    name : 'string',
    address : 'string',
    age : 'number'
});

// 정의된 스키마를 객체처럼 사용할 수 있도록 model()로 컴파일
var Student = mongoose.model('Schema', student);

// Student 객체를 new로 생성해서 값 입력
var newStudent = new Student({name:'Hong Gil Dong', address:'서울시 강남구 논현동', age:'22'});

// 데이터 저장
newStudent.save(function(error, data){
    if(error){
        console.log(error);
    }
    else{
        console.log('Saved!');
    }
})

// Student 레퍼런스 전체 데이터 가져오기
Student.find(function(error, students){
    console.log('--- Read all ---');
    if(error){
        console.log(error);
    }
    else{
        console.log(students);
    }
});

// 특정 아이디 값 가져오기
Student.findOne({_id:'585b777f7e2315063457e4ac'}, function(error, student){
    console.log('--- Read one ---');
    if(error){
        console.log(error);
    }
    else{
        console.log(student);
    }
});

// 특정 아이디 수정하기
Student.findById({_id:'585b777f7e2315063457e4ac'}, function(error, student){
    console.log('--- Update(PUT) ---');
    if(error){
        console.log(error);
    }
    else{
        student.name = '--modified--';
        student.save(function(error, modified_student){
            if(error){
                console.log(error);
            }
            else{
                console.log(modified_student);
            }
        });
    }
});

// 삭제
Student.remove({_id:'585b7c4371110029b0f584a2'}, function(error, output){
    console.log('--- Delete ---');
    if(error){
        console.log(error);
    }

    // 삭제한 데이터를 삭제해도 결과가 동일하므로
    // 별도 처리 필요없음

    console.log('--- deleted ---');
});