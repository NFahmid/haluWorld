if (document.readyState === 'loading') {
  document.addEventListener('DOMContentLoaded', ready);
} else {
    ready();
}

function ready() {
    var removeCartItemButton = document.getElementsByClassName('btn-remove');  // get all the elements with the class name 'btn'
    for (var i = 0; i < removeCartItemButton.length; i++){
        var button = removeCartItemButton[i]; 
        button.addEventListener('click', function(event){
            var buttonClicked = event.target; // buttonClicked is the button that was clicked on the page 
            buttonClicked.parentElement.remove(); // remove the parent element of the parent element of the button clicked   
            updateCartTotal(); // call the updateCartTotal function
        })
    }

    var quantityInputs = document.getElementsByClassName('item-quantity'); // get all the elements with the class name 'quantity'
    for (var i = 0; i < quantityInputs.length; i++){
        var input = quantityInputs[i]; // get the current element
        input.addEventListener('change', quantityChanged); // add an event listener to the input element
    }

    var addToCartButton = document.getElementsByClassName('btn-add'); // get all the elements with the class name 'btn-add'
    for (var i = 0; i < addToCartButton.length; i++){
        var button = addToCartButton[i]; // get the current element
        button.addEventListener('click', addToCartClicked); // add an event listener to the button element
    }
}

function quantityChanged(event){
    var input = event.target; // get the input element that was changed
    if (isNaN(input.value) || input.value <= 0){ // check if the input value is not a number or is less than or equal to 0
        input.value = 1; // set the input value to 1
    }
    updateCartTotal(); // call the updateCartTotal function
}

function addToCartClicked(event){
    var button = event.target; // get the button that was clicked
    var shopItem = button.parentElement; // get the parent element of the button
    var title = shopItem.getElementsByClassName('title')[0].innerText; // get the title of the item
    var price = shopItem.getElementsByClassName('price')[0].innerText; // get the price of the item
    addItemToCart(title, price); // call the addItemToCart function with the title, price, and image source of the item
}

function addItemToCart(title, price){
    var cartRow = document.createElement('div'); // create a new div element
    cartRow.classList.add('item-info'); // add the class name 'item' to the new div element
    var cartItems = document.getElementsByClassName('cart')[0]; // get the first element with the class name 'cart'
    var cartItemNames = cartItems.getElementsByClassName('item-title'); // get all the elements with the class name 'item-title'
    for (var i = 0; i < cartItemNames.length; i++){ // loop through all the elements with the class name 'item-title'
        if (cartItemNames[i].innerText == title){ // check if the inner text of the current element is equal to the title
            alert('This item is already added to the cart'); // show an alert message
            return; // return from the function
        }
    }
    var cartRowContents = `
        <div class="item">
            <span class="item-title">${title}</span>
            <span class="item-price">${price}</span>
            <input type="number" class="item-quantity" value="1">
            <button class="btn-remove" type="button">REMOVE</button>
        </div>
    `
    cartRow.innerHTML = cartRowContents; // set the inner HTML of the new div element to the cartRowContents
    cartItems.append(cartRow); // append the new div element to the cart
    updateCartTotal(); // call the updateCartTotal function

    cartRow.getElementsByClassName('btn-remove')[0].addEventListener('click', function(event){ // add an event listener to the button element
        var buttonClicked = event.target; // get the button that was clicked
        buttonClicked.parentElement.remove(); // remove the parent element of the button
        updateCartTotal(); // call the updateCartTotal function
    })

    var quantityInputs = document.getElementsByClassName('item-quantity'); // get all the elements with the class name 'quantity'
    for (var i = 0; i < quantityInputs.length; i++){
        var input = quantityInputs[i]; // get the current element
        input.addEventListener('change', quantityChanged); // add an event listener to the input element
    }
}



function updateCartTotal(){
    var cartItemContainer = document.getElementsByClassName('cart')[0]  // get the first element with the class name 'item'
    var cartRows = cartItemContainer.getElementsByClassName('item') // get all the elements with the class name 'item'
    var total = 0 // set the total to 0
    for (var i = 0; i < cartRows.length; i++){ // loop through all the elements with the class name 'item'
        var cartRow = cartRows[i]; // get the current element
        var priceElement = cartRow.getElementsByClassName('item-price')[0]; // get the first element with the class name 'price
        var quantityElement = cartRow.getElementsByClassName('item-quantity')[0]; // get the first element with the class name 'quantity'
        var price = parseFloat(priceElement.innerText.replace('$', '')); // get the price of the item
        var quantity = quantityElement.value; // get the quantity of the item
        total = total + (price * quantity); // calculate the total price
    }
    total = Math.round(total * 100) / 100; // round the total to two decimal places
    document.getElementsByClassName('cart-total-price')[0].innerText = '$' + total; // set the inner text of the first element with the class name 'total' to the total price
}