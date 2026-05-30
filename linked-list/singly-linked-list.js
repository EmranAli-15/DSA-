// class Node{
//     data = null;
//     next = null;
// };

// const one = new Node();
// one.data = 5;

// const two = new Node();
// two.data = 6;
// one.next = two;

// const three = new Node();
// three.data = 7;
// two.next = three;

// const four = new Node();
// four.data = 8;
// three.next = four;

class Node{
    constructor(data){
        this.data = data;
        this.next = null;
    }
};

let one = new Node(5);
const two = new Node(6);
one.next = two;
const three = new Node(9);
two.next = three;
const four = new Node(8);
three.next = four;

// Add to the front
const newHead = new Node(3);
newHead.next = one;
one = newHead;
// ===================

// Add to the end
let end = one;
while(end.next){
    end = end.next;
}
const tail = new Node(100);
end.next = tail;

let temp = one;
while(temp != null){
    process.stdout.write(temp.data + " -> ");
    temp = temp.next;
}