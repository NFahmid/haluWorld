import React, { useState } from 'react';

function ToDoList(){
    const [tasks, setTasks] = useState(["eat", "sleep", "code"]);
    const [newTask, setNewTask] = useState("");

    function handleInputChange(event) {
        setNewTask(event.target.value);
    }

    function addTask(){
        if (newTask.trim() === "") {
            return;
        }
        setTasks([...tasks, newTask]);
        setNewTask("");
    }

    function deleteTask(index){
        const updatedTasks = tasks.filter((_, i) => i !== index);
        setTasks(updatedTasks);
    }

    function moveTaskUp(index){
        if (index === 0) {
            return;
        }
        const updatedTasks = [...tasks];
        const temp = updatedTasks[index - 1];
        updatedTasks[index - 1] = updatedTasks[index];
        updatedTasks[index] = temp;
        setTasks(updatedTasks);
    }

    function moveTaskDown(index){
        if (index === tasks.length - 1) {
            return;
        }
        const updatedTasks = [...tasks];
        const temp = updatedTasks[index + 1];
        updatedTasks[index + 1] = updatedTasks[index];
        updatedTasks[index] = temp;
        setTasks(updatedTasks);
    }

    return (
        <>
            <div className='to-do-list'>

                <h1>My To-Do List</h1>

                <div>
                    <input type="text"
                    placeholder='Add a new task'
                    value={newTask}
                    onChange={handleInputChange}
                    />
                    <button className='add-task-button' onClick={addTask}>Add Task</button>
                </div>

                <ol>
                    {tasks.map((task, index) => (
                        <li key={index}>
                            <span className='task-text'>{task}</span>
                            
                            <button className='delete-task-button' onClick={() => deleteTask(index)}>Delete</button>
                            <button className='move-up-button' onClick={() => moveTaskUp(index)}>Move Up</button>
                            <button className='move-down-button' onClick={() => moveTaskDown(index)}>Move Down</button>
                        </li>
                    ))}
                </ol>

            </div>
        </>
    )
}

export default ToDoList;