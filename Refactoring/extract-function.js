class ExtractFunction {
  printOwing(invoice) {
    this.printBanner();
    // calculate outstanding

    // record due date
    const today = new Date();
    invoice.dueDate = new Date(
      today.getFullYear(),
      today.getMonth(),
      today.getDate() + 30
    );
    this.printDetails();
  }
  calculateOutsanding(invoice) {
    let outstanding = 0;
    for (const o of invoice.orders) {
      outstanding += o.amount;
    }
    return outstanding;
  }
  printBanner() {
    console.log("***********************");
    console.log("**** Customer Owes ****");
    console.log("***********************");
  }
  printDetails(invoice) {
    console.log(`name: ${invoice.customer}`);
    console.log(`amount: ${outstanding}`);
    console.log(`due: ${invoice.dueDate.toLocaleDateString()}`);
  }
}
const extractInstance = new ExtractFunction();
extractInstance.printOwing({
  customer: "Thuong dep trai",
  orders: [{ amount: 10, dueDate: null }],
});
