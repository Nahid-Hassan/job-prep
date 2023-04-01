class MyList:
    def __init__(self, data: list) -> None:
        self.data = data

    def __len__(self) -> int:
        return len(self.data)

    def __getitem__(self, index_or_slice):
        # print(type(index_or_slice))
        # print(len(self))
        # print(isinstance(index_or_slice, slice))
        if isinstance(index_or_slice, slice):
            start, stop, step = index_or_slice.indices(len(self))
            # print(start, stop, step)
            return list(MyList([self.data[i] for i in range(start, stop, step)]))
        else:
            return self.data[index_or_slice]

    def __setitem__(self, index: int, item: object) -> None:
        self.data[index] = item

    def __contains__(self, item: object) -> bool:
        return item in self.data


mylist = MyList([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
print(len(mylist))
print(mylist[0])
print(mylist[:5])
mylist[0] = 2
print(mylist[0])
print(2 in mylist)
