// 错误的类型注解语法
function greet(name: string, age: number): void { // 错误的冒号使用
    console.log(`Hello, ${name}. You are ${age} years old.`);
    }
    // 正确的类型注解语法
    function greet1(name: string, age: number): void { // 正确的语法
    console.log(`Hello, ${name}. You are ${age} years old.`);
    }

greet("aba",11)
greet1("aba",11)