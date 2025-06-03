import React, { useState } from 'react';

function MyComponent(){

    const [name, setName] = useState("Unknown");
    const [count, setCount] = useState(0);
    const [isStudent, setIsStudent] = useState(true);

    return(
        <div>
            <p>Name: {name}</p>
            <button onClick={() => setName("Nuren")}>Reset Name</button>

            <p>Count: {count}</p>
            <button onClick={() => setCount(count + 1)}>Increment</button>
            <button onClick={() => setCount(count - 1)}>Decrement</button>
            <button onClick={() => setCount(0)}>Reset Count</button>

            <p>Is Student: {isStudent ? "Yes" : "No"}</p>
            <button onClick={() => setIsStudent(!isStudent)}>Toggle Student</button>
        </div>
    );
}
export default MyComponent