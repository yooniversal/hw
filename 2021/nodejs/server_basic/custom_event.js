// 이벤트가 정의된 events 모듈 생성
var EventEmitter = require('events');

// 생성된 events 모듈을 사용하기 위해 custom_object로 초기화
var custom_object = new EventEmitter();

// events 모듈에 선언된 on() 재정의('call' 이벤트 처리)
custom_object.on('call', ()=>{
    console.log('called events!');
});

// call 이벤트 강제 발생
custom_object.emit('call');