"use client";
import { useState, useEffect } from "react";

type Post = {
    userId: number;
    id: number;
    title: string;
    body: string;
};

export default function PostsPage() {
    const [posts, setPosts] = useState<Post[]>([]);
    const [loading, setLoading] = useState(true);

    useEffect(() => {
        async function fetchPosts() {
            const response = await fetch("https://jsonplaceholder.typicode.com/posts");
            if (!response.ok) {
                throw new Error("Failed to fetch posts");
            }
            const data: Post[] = await response.json();
            setPosts(data);
            setLoading(false);
        }
        fetchPosts();
    }, []);

    if (loading) {
        return <div className="text-center">Loading...</div>;
    }

    return (
        <div>
            <h1 className="text-2xl font-bold mb-4">Posts List</h1>
            <ul className="space-y-2">
                {posts.map((post) => (
                    <li key={post.id} className="p-4 border rounded shadow hover:shadow-lg transition-shadow duration-2000">
                        <h2 className="text-xl font-semibold">{post.title}</h2>
                        <p>{post.body}</p>
                    </li>
                ))}
            </ul>
        </div>
    );
}
