type API = {
  user: {
    userId: string;
    friendList: {
      count: number;
      friends: {
        lastName: string;
        firstName: string;
      };
    }[];
  };
};
type FriendList = API["user"]["friendList"];
type Friend = FriendList[number];

type Weekday = "Mon" | "Tue" | "Wed" | "Thu" | "Fri";
type Day = Weekday | "Sat" | "Sun";
type nextDay = Record<Weekday, Day>;
type nextDat2 = { [K in Weekday]: Day };
// function renderFriendList(friendList: FriendList): Promise<FriendList> {}
type Account = {
  id: number;
  isEmployee: boolean;
  notes: string[];
};
// make optional
type OptionalAccount = {
  [K in keyof Account]?: Account[K];
};
// make field nullable
type NullableAccount = {
  [K in keyof Account]: Account[K] | null;
};
// make field readonly
type ReadonlyAccount = {
  readonly [K in keyof Account]: Account[K];
};

type Currency = {
  unit: "USD" | "EUR" | "GBP" | "JPY";
  value: number;
};
// @ts-ignore
const y = {
  default: "USD",
  from(value: number, unit = y.default): Currency {
    return {
      unit,
      value,
    };
  },
};

console.log(y);
function isString(value: unknown): value is string {
  return typeof value === "string";
}

function parseInput(input: number | string) {
  let formatString: string;
  if (isString(input)) {
    formatString = input.toUpperCase();
  }
}
