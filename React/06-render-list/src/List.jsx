
function List(){

    const fruits = [{name: "apple", calories: 52},
                    {name: "banana", calories: 89},
                    {name: "cherry", calories: 50},
                    {name: "date", calories: 277},
                    {name: "elderberry", calories: 73}    
    ];

    // fruits.sort((a, b) => a.calories - b.calories); // Sort the fruits by calories
    // fruits.sort((a, b) => a.name.localeCompare(b.name)); // Sort the fruits by name
    // fruits.sort((a, b) => a.calories - b.calories || a.name.localeCompare(b.name)); // Sort the fruits by calories and then by name

    const fruitList = fruits.map(fruit => <li key={fruit.name}> {fruit.name} - {fruit.calories} calories</li>);

    return(
        <ol>
            {fruitList}
        </ol>
    );
}

export default List;