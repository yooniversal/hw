var fs = require('fs');

// 1. 새로 생성할 파일에 입력될 문자열
var data = "My first data...\r\nhello there!";

// 2. 비동기 방식으로 파일 생성, 인자 : 파일명, 입력데이터, 인코딩, 콜백함수
fs.writeFile('file01_async.txt', data, 'utf-8', function(e){
    if(e){
        // 오류 발생시 오류 출력
        console.log(e);
    }
    else{
        console.log('01 WRITE DONE!');
    }
});

// 3. 동기 방식은 callback 함수로 처리 불가능 -> try로 예외처리
try{
    // 동기 방식으로 파일 생성, 인자 : 파일명, 입력데이터, 인코딩
    fs.writeFileSync('file02_sync.txt', data, 'utf-8');
    console.log('02 WRITE DONE!');
}
catch(e){
    console.log(e);
}