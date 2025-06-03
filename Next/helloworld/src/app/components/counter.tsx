"use client";
import { useState } from "react";

export default function Counter() {
  const [count, setCount] = useState(0);

  return (
    <div className="">
      <h1 className="">Counter: {count}</h1>
      <button
        onClick={() => setCount(count + 1)}
        className=""
      >
        Increment
      </button>
    </div>
  );
}
