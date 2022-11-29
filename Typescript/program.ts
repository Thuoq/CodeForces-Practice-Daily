// function  add (a ,b ) {
//     return a + b;
// }
//
// console.log(add(3,3))
//
// interface Square {
//     width: number;
// }
// interface  Rectangle extends  Square {
//     height: number
// }
// type Shape = Square | Rectangle
//
// function calculateArea( shape: Shape) {
//     return shape.width * shape.width
// }

interface Vector2D {
  x: number;
  y: number;
}

interface Vector3D {
  x: number;
  y: number;
  z: number;
}

interface Author {
  first: string;
  last: string;
}

interface DB {
  runQuery: (sql: string) => string[];
}
function calculateLength(v: Vector2D) {
  return Math.sqrt(v.x * v.x + v.y * v.y);
}

function normalize(v: Vector3D) {
  const length = calculateLength(v);
}

function getAuthors(database: DB) {
  const authorRow = database.runQuery("SELECT FIRST, LAST FROM AUTHORS");
  return authorRow.map((row) => ({
    first: row[0],
    last: row[1],
  }));
}

// ====== *** =============
type A = "A" | "B";
type B = "B";
type AB = A & B;
const x: AB = "B";

interface Person {
  name: string;
}
interface Lifespan {
  birth: Date;
  death?: Date;
}
type PersonSpan = Person & Lifespan;

const ps: PersonSpan = {
  birth: new Date(),
  name: "x",
};

type K = keyof (Person | Lifespan);
type X = keyof Lifespan | keyof PersonSpan;

interface Vector1D {
  x: number;
}
interface Vector2D extends Vector1D {
  y: number;
}
interface Vector3D extends Vector2D {
  z: number;
}

interface Point {
  x: number;
  y: number;
}
type _X = Point[];
type PointKeys = keyof Point;
function sortBy<K extends keyof T, T>(vals: T[], key: K) {}

interface Room {
  numDoors: number;
  ceilingHeightFt: number;
}
const r: Room = {
  numDoors: 1,
  ceilingHeightFt: 20,
};

interface State {
  userId: string;
  pageTitle: string;
  recentFiles: string[];
  pageContents: string;
}

type TopNavState = {
  [k in "userId" | "pageTitle" | "recentFiles"]: State[k];
};

function is(...args: number[][]) {
  for (let i = 1; i < args.length; i++) {
    if (args[i] === args[i - 1]) return true;
  }
  return false;
}
is([1, 2, 3], [2, 3], [21], [21], [21], [2]);
