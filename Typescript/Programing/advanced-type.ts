type ExistingUser = {
  id: number;
  name: string;
};
type newUser = {
  name: string;
};

function deleteUser(user: { id?: number; name: string }) {
  delete user.id;
}
let existUser: ExistingUser = {
  id: 1,
  name: "John",
};
deleteUser(existUser);
