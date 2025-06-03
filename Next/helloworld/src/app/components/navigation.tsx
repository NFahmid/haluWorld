"use client";
import Link from 'next/link';
import { usePathname } from 'next/navigation';
import { SignInButton, UserButton, SignedIn, SignedOut } from '@clerk/nextjs';

export default function Navigation() {
    const pathname = usePathname();

    return (
        <nav>
            <ul className="flex space-x-4 items-center justify-center p-4">
                <li>
                    <Link href="/" className={`mr-4 text-blue-500 hover:underline p-2 ${pathname === '/' ? 'font-bold text-white' : ''}`}>Home</Link>
                    <Link href="/about" className={`mr-4 text-blue-500 hover:underline p-2 ${pathname === '/about' ? 'font-bold text-white' : ''}`}>About</Link>
                    <Link href="/users-client" className={`mr-4 text-blue-500 hover:underline p-2 ${pathname === '/users-client' ? 'font-bold text-white' : ''}`}>Users Client</Link>
                    <Link href="/posts" className={`mr-4 text-blue-500 hover:underline p-2 ${pathname === '/posts' ? 'font-bold text-white' : ''}`}>Posts</Link>

                    <SignedOut>
                        <SignInButton />
                    </SignedOut>
                </li>
                <li className="ml-auto">
                    <SignedIn>
                        <UserButton />
                    </SignedIn>
                </li>
            </ul>
            <div className="flex items-center justify-center">
                
            </div>
        </nav>
    );
}
