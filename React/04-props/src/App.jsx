// props = properties
// props are used to pass data from one component to another
// props are read-only
// props are used to pass data from parent to child component
// props are used to pass data from child to parent component using callback functions

import Student from "./Student.jsx"

function App() {
  return(
    <>
      <Student name = "Fahmid" age = {20} address = "123 Main St"/>
      <Student name = "John" age = {25} address = "456 Elm St"/>
      <Student name = "Jane" age = {30} address = "789 Oak St"/>
      <Student name = "Doe" age = {35} address = "101 Pine St"/>
      <Student></Student>
    </>
  );
}

export default App
