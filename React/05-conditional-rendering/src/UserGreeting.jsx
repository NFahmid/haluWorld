
function UserGreeting(props){
    if(props.isLoggedIn){
        return(
            <div className="user-greeting">
                <h1>Welcome back, {props.username}!</h1>
            </div>
        );
    } 
    return(
        <div className="user-greeting">
            <h1>Please log in.</h1>
        </div>
    );
}

export default UserGreeting