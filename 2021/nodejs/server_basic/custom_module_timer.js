var EventEmitter = require('events');

// setInterval 함수가 동작하는 interval 값 설정 -> 1초에 한 번씩 호출
var sec = 1;

// timer 변수를 EventEmitter로 초기화
exports.timer = new EventEmitter();

// javascript 내장함수인 setInterval 함수를 통해 1초에 한 번씩 timer 객체에 tick 이벤트 발생
setInterval(function(){
    exports.timer.emit('tick');
}, sec*1000);