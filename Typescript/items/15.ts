// Using index Signatures for Dynamic Data
const rocketNoType = {
  name: "Falcon 9",
  variant: "Block 5",
  thrust: "7,60=7 kN",
};
type Rocket = { [property: string]: string };

const rocket: Rocket = {
  name: "Falcon 9",
  variant: "v1.0",
  thrust: "4,940 kN",
};

type y = number[];
type x = y[y[number]];
type Includes<T extends any[], U> = T[number];
