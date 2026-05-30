class Node {
    constructor(data){
        this.prev = null;
        this.data = data;
        this.next = null;
    }
};

let head = new Node(10);

let one = new Node(20);
head.next = one;
one.prev = head;

let two = new Node(30);
one.next = two;
two.prev = one;

let three = new Node(40);
two.next = three;
three.prev = two;

let tail = new Node(50);
three.next = tail;
tail.prev = three;

tail.next = head;
head.prev = tail;


let temp = head;
let total = 0;
while(total < 1000){
    process.stdout.write(temp.data + " -> ");
    if(temp.data == 50) process.stdout.write(" | ");
    total+=temp.data;
    temp = temp.next;
}

console.log("")

let temp2 = tail;
let motal = 0;
while(motal < 1000){
    process.stdout.write(temp.data + " -> ");
    if(temp.data == 10) process.stdout.write(" | ");
    motal+=temp.data;
    temp = temp.prev;
}