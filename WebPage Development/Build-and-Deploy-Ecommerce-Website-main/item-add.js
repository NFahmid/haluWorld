if (document.readyState === 'loading') {
    document.addEventListener('DOMContentLoaded', ready);
} else {
    ready();
}

function ready() {
    if (window.location.pathname.includes('shop.html')) {
        initializeShopPage();
    } else if (window.location.pathname.includes('cart.html')) {
        initializeCartPage();
    }
}

// Initialize functionality for the shop page
function initializeShopPage() {
    const addToCartButtons = document.getElementsByClassName('cart');
    for (let i = 0; i < addToCartButtons.length; i++) {
        const button = addToCartButtons[i];
        button.addEventListener('click', addToCartClicked);
    }
}

// Initialize functionality for the cart page
function initializeCartPage() {
    loadCartItems();
    setupCartEventListeners();
}

// Add item to the cart (from shop page)
function addToCartClicked(event) {
    const button = event.target;
    const shopItem = button.parentElement.parentElement;

    const title = shopItem.querySelector('.des h5').innerText; // Item name
    const price = shopItem.querySelector('.des h4').innerText; // Item price
    const image = shopItem.querySelector('.item-image').src;   // Item image

    addItemToStorage(title, price, image);
    alert('Item added to cart!');
}

// Save the item to localStorage
function addItemToStorage(title, price, image) {
    let cart = JSON.parse(localStorage.getItem('cart')) || [];

    // Check if item already exists in the cart
    for (let i = 0; i < cart.length; i++) {
        if (cart[i].title === title) {
            alert('This item is already in the cart!');
            return;
        }
    }

    // Add new item
    cart.push({ title, price, image });
    localStorage.setItem('cart', JSON.stringify(cart));
}

// Load cart items on the cart page
function loadCartItems() {
    const cart = JSON.parse(localStorage.getItem('cart')) || [];
    const cartItemsContainer = document.querySelector('.cart-items');

    if (!cartItemsContainer) {
        console.error('Cart container not found!');
        return;
    }

    cartItemsContainer.innerHTML = ''; // Clear any existing content

    cart.forEach((item) => {
        const cartRow = document.createElement('tr');
        cartRow.classList.add('cart-row');
        cartRow.innerHTML = `
            <td><a href="#" class="remove-item"><i class='bx bx-x'></i></a></td>
            <td><img src="${item.image}" alt="" class="cart-item-image"></td>
            <td class="item-titles">${item.title}</td>
            <td class="item-price">${item.price}</td>
            <td><input class="cart-quantity-input" type="number" value="1"></td>
            <td>${item.price}</td>
        `;
        cartItemsContainer.append(cartRow);
    });

    updateCartTotal();
}

// Setup event listeners for the cart page
function setupCartEventListeners() {
    const cartItemsContainer = document.querySelector('.cart-items');

    // Remove item from cart
    cartItemsContainer.addEventListener('click', function (event) {
        if (event.target.classList.contains('bx-x')) {
            const cartRow = event.target.closest('.cart-row');
            const title = cartRow.querySelector('.item-titles').innerText;

            removeItemFromStorage(title);
            cartRow.remove();
            updateCartTotal();
        }
    });

    // Update total on quantity change
    cartItemsContainer.addEventListener('change', function (event) {
        if (event.target.classList.contains('cart-quantity-input')) {
            updateCartTotal();
        }
    });
}

// Remove item from localStorage
function removeItemFromStorage(title) {
    let cart = JSON.parse(localStorage.getItem('cart')) || [];
    cart = cart.filter((item) => item.title !== title);
    localStorage.setItem('cart', JSON.stringify(cart));
}

// Update the total price in the cart
function updateCartTotal() {
    const cartRows = document.getElementsByClassName('cart-row');
    let total = 0;

    for (let i = 0; i < cartRows.length; i++) {
        const cartRow = cartRows[i];
        const priceElement = cartRow.querySelector('.item-price');
        const quantityElement = cartRow.querySelector('.cart-quantity-input');

        const price = parseFloat(priceElement.innerText.replace('$', ''));
        const quantity = parseInt(quantityElement.value);

        total += price * quantity;
    }

    document.querySelectorAll('.cart-total-price').forEach((element) => {
        element.innerText = `$${total.toFixed(2)}`;
    });
}
