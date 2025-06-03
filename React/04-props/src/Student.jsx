

function Student(props){
    return(
        <div className="student">
            <p>Name : {props.name}</p>
            <p>Age : {props.age}</p>
            <p>Address : {props.address}</p>
        </div>
    );
}
Student.defaultProps = {  
    name: "Unknown",
    age: 0,
    address: "Unknown"
}

export default Student