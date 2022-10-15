function firstOdd(arg) {
  for (let i = 0; i < arg.length; i++)
    if (i % 2 !== 0) {
      return i;
    } else {
      continue;
    }
  return undefined;
}
