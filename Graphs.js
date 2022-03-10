//Breath wise Traversal in Graphs

let adjList = {
  a: ["b", "c"],
  b: ["d"],
  c: ["e"],
  d: ["f"],
  e: [],
  f: [],
};

//Depth wise Traversal of Graphs
const DFT=()=>{
let stack = [];
let startNode = "a";
stack.push(startNode);
let currNode = startNode;
while (stack.length != 0) {
  currNode = stack.pop();
  console.log(currNode);

  for (var i = 0; i < adjList[currNode].length; i++) {
    stack.push(adjList[currNode][i]);  
}
}
};

//Breadth wise Traversal of Graphs
const BFT=()=>{
let queue=[];
let startElement='a';
queue.push(startElement);
let currNode;
while(queue.length!==0){
   
    currNode=queue.shift();
    console.log(currNode);
   
    for(var i=0; i<adjList[currNode].length;i++){

        queue.push(adjList[currNode][i]);
    }


}

}

