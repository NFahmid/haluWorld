import { revalidatePath } from "next/cache";

type MockUser = {
    id: number;
    name: string;
}

export default async function MockUsers() {
    const res = await fetch("https://683a8d6043bb370a86730057.mockapi.io/users");
    const users: MockUser[] = await res.json();
    

    async function addUser(formData: FormData) {
        "use server";
        const name = formData.get("name") as string;
        const res = await fetch("https://683a8d6043bb370a86730057.mockapi.io/users", {
            method: "POST",
            headers: {
                "Content-Type": "application/json",
            },
            body: JSON.stringify({ name }),
        });
        const newUser: MockUser = await res.json();
        console.log("New user added:", newUser);
        revalidatePath("/mock-users");
        return newUser;
    }
    
    return (
        <div>
            <div>
                <form className="mb-4" action={addUser}>
                    <input type="text" name="name" required className="border p-2 rounded" />
                    <button type="submit" className="bg-blue-500 text-white p-2 rounded">Add User</button>
                </form>
            </div>
            <div>
                <h1 className="text-2xl font-bold mb-4">Mock Users List</h1>
                <ul className="space-y-2">
                    {users.map((user) => (
                        <li key={user.id} className="p-4 border rounded shadow hover:shadow-lg transition-shadow duration-2000 text-center justify-center">  
                            <h1 className="text-xl font-bold">{user.id}</h1>
                            <h2 className="text-xl font-semibold">{user.name}</h2>
                        </li>
                    ))}
                </ul>
            </div>
        </div>
    );
}