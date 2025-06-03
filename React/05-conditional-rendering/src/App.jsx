import UserGreeting from "./UserGreeting"

function App() {
  return (
    <>
      <UserGreeting isLoggedIn={true} username="JohnDoe" />
      <UserGreeting isLoggedIn={false} />
    </>
  );
}

export default App
