export const users = [
    { id: 1, name: "John Doe" },
    { id: 2, name: "Jane Smith" },
    { id: 3, name: "Alice Johnson" },
]

export async function GET(request: Request) {
    return Response.json(users)
}

export async function POST(request: Request) {
    const newUser = await request.json()
    users.push(newUser)
    return Response.json(users)
} 