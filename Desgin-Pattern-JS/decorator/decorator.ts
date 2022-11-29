abstract class Beverage {
  constructor(public description: string) {}

  public getDescription() {
    return this.description;
  }
  public abstract cost(): number;
}

class HouseBlend extends Beverage {
  getDescription() {
    return "This is House Blend";
  }
  cost() {
    return 1.99;
  }
}

class DarkRoast extends Beverage {
  getDescription() {
    return this.description;
  }
  cost() {
    return 2.99;
  }
}

class Espresso extends Beverage {
  getDescription() {
    return this.description;
  }
  cost() {
    return 5.99;
  }
}

class Decaf extends Beverage {
  getDescription() {
    return "This is Decaf";
  }
  cost() {
    return 6.99;
  }
}
abstract class CondimentDecorator extends Beverage {
  constructor(public beverage: Beverage, description: string) {
    super(description);
  }

  public abstract getDescription(): string;
}

class Milk extends CondimentDecorator {
  cost() {
    return 1.99;
  }
  getDescription() {
    return "This is Milk";
  }
}

class Mocha extends CondimentDecorator {
  constructor(description: string, beverage: Beverage) {
    super(beverage, description);
  }
  cost() {
    return this.beverage.cost() + 2.99;
  }
  public getDescription() {
    return this.beverage.getDescription() + "Mocha";
  }
}

class Soy extends CondimentDecorator {
  constructor(description: string, beverage: Beverage) {
    super(beverage, description);
  }
  cost() {
    return this.beverage.cost() + 7.99;
  }
  public getDescription() {
    return this.beverage.getDescription() + "Soy";
  }
}

class Whip extends CondimentDecorator {
  constructor(description: string, beverage: Beverage) {
    super(beverage, description);
  }
  cost() {
    return this.beverage.cost() + 2.01;
  }
  public getDescription(): string {
    return this.beverage.getDescription()
  }
}

export function main() {
  const expresso = new Espresso("expresso");
  const darkRoast = new DarkRoast("drak roast");
  let beverage = new Mocha("mocha", darkRoast);
  beverage = new Mocha("mocha", beverage);
  beverage = new Whip('whip',beverage);

  console.log(beverage.cost())
}
main();
