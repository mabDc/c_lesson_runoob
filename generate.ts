// deno 爬取题目生成c文件

let getQuestion = (i: number) =>
    fetch(`https://www.runoob.com/cprogramming/c-exercise-example${i}.html`)
        .then(res => res.text())
        .then(text => text.match(/<strong>题目：<\/strong>([^<]*)/) || []);

for (let i = 1; i <= 100; i++) {
    const fileName = `case${i}.c`;
    try {
        Deno.readTextFileSync(fileName);
        // console.log(fileName, data)
    } catch (error) {
        console.log(i)
        await getQuestion(i).then(q => Deno.writeTextFileSync(fileName, `
// 题目：${q[1]}

#include "common/common.h"

int main(int argc, char const *argv[])
{
    printf("\\n");
    return 0;
}
`));
    }
}
