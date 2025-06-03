"use client";
import { useState, useEffect } from "react";

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

export default function UsersClient() {
    const [users, setUsers] = useState<User[]>([]);
    const [loading, setLoading] = useState(true);


    useEffect(() => {
        async function fetchUsers() {
            const response = await fetch("https://jsonplaceholder.typicode.com/users");
            if (!response.ok) {
                throw new Error("Failed to fetch users");
            }
            const data: User[] = await response.json();
            setUsers(data);
            setLoading(false);

        }
        fetchUsers();
    }, []);

    if (loading) {
        return <div className="text-center">Loading...</div>;
    }


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
                        <p>Website: <a href={`https://${user.website}`} className="text-blue-500 hover:underline">{user.website}</a></p>
                        <p>Address: {user.address.street}, {user.address.suite}, {user.address.city}, {user.address.zipcode}</p>
                        <p>Company: {user.company.name}</p>
                        <p>Catch Phrase: {user.company.catchPhrase}</p>
                        <p>BS: {user.company.bs}</p>

                    </li>
                ))}
            </ul>
        </div>
    );
}