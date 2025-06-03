type User = {
    id: number;
    name: string;
    username: string;
    email: string;
    address: {
        street: string;
        suite: string;
        city: string;
        zipcode: string;
        geo: {
            lat: string;
            lng: string;
        };
    };
    phone: string;
    website: string;
    company: {
        name: string;
        catchPhrase: string;
        bs: string;
    };
};

export default async function UsersServer() {
    const response = await fetch("https://jsonplaceholder.typicode.com/users", {
        next: { revalidate: 60 }, // Revalidate every 60 seconds
    });

    if (!response.ok) {
        throw new Error("Failed to fetch users");
    }

    const users: User[] = await response.json();

    return (
        <div>
            <h1 className="text-2xl font-bold mb-4">Users List</h1>
            <ul className="space-y-2">
                {users.map((user) => (
                    <li key={user.id} className="p-4 border rounded shadow hover:shadow-lg transition-shadow duration-2000">
                        <h2 className="text-xl font-semibold">{user.name}</h2>
                        <p>Username: {user.username}</p>
                        <p>Email: {user.email}</p>
                        <p>Phone: {user.phone}</p>
                    </li>
                ))}
            </ul>
        </div>
    );
}