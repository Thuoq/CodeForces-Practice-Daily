let Task =  function (name,desc , finished,dueDate) {
    this.name = name; 
    this.description = desc;
    this.finished = finished
    this.dueDate = dueDate
}
let TaskBuilder = function() {
    let name; 
    let description; 
    let isFinished = false;
    let dueDate ; 
    return { 
        setName: function(name) {
            this.name = name;
            return this;
        },
        setDescription: function(desc) {
            this.description =desc 
            return this;
        },
        setFinished: function(finished) {
            this.finished = finished;
            return this;
        },
        setDueDate: function(dueDate) {
            this.dueDate = dueDate;
            return this;
        },
        build: function() {
            return new Task(name,description,isFinished,dueDate)
        }

    }
}
let task = new TaskBuilder().setName('Task A').setDescription('Finish Book').setDueDate(new Date(2019,5,12))
console.log(task)
//TaskBuilder trả về các hàm đặt bốn thuộc tính. Lưu ý rằng mỗi hàm trả về giá trị này, tham chiếu đến đối tượng hiện tại. Bằng cách này, chúng ta có thể xâu chuỗi các lệnh gọi hàm. Chuỗi các lệnh gọi hàm được gọi là API thông thạo.