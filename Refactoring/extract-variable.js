// start with function
function price(order) {
  return (
    order.quantity * order.itemPrice -
    Math.max(0, item.quantity - 500) * order.itemPrice * 0.06 +
    Math.min(order.quantity * order.itemPrice * 0.1, 100)
  );
}
// code above difficultly understand

// make refactor code above a bit , a bit

function price(order) {
  // 1. Understanding, What is the purpose of function
  // => base price - quantity discount + shippingFee
  const basePrice = order.quantity * order.itemPrice;
  const quantityDiscount =
    Math.max(0, item.quantity - 500) * order.itemPrice * 0.06;
  const shippingFee = Math.min(basePrice * 0.1, 100);
  return basePrice - quantityDiscount + shippingFee;
}

// Another Example with a Class

class Order {
  constructor(aRecord) {
    this._data = aRecord;
  }
  get quantity() {
    return this._data.quantity;
  }
  get itemPrice() {
    return this._data.itemPrice;
  }
  get price() {
    return (
      this.quantity * this.itemPrice -
      Math.max(0, this.quantity - 500) * this.itemPrice * 0.06 +
      Math.min(this.quantity * this.itemPrice * 0.1, 100)
    );
  }
}

// Refactor again

class Order {
  constructor(aRecord) {
    this._data = aRecord;
  }
  get quantity() {
    return this._data.quantity;
  }
  get itemPrice() {
    return this._data.itemPrice;
  }
  get basePrice() {
    return this.quantity * this.itemPrice;
  }
  get quantityDiscount() {
    return Math.max(0, this.quantity - 500) * this.itemPrice * 0.05;
  }
  get shipping() {
    return Math.min(this.basePrice * 0.1, 100);
  }
  get price() {
    return this.basePrice - this.quantityDiscount + this.shipping;
  }
}
