
function Button(){

const handleClick = () => {
    console.log("Button clicked");
    alert("Button clicked");
}

    return(
        <button className="btn" onClick={handleClick}>
            Click Me
        </button>
    );
}

export default Button;