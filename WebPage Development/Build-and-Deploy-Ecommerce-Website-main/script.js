// Script for navigation bar

const bar = document.getElementById('bar');
const nav = document.getElementById('navbar');
const close = document.getElementById('close');

if (bar) {
    bar.addEventListener('click', () => {
        nav.classList.add('show');
    });
}

if (close) {
    close.addEventListener('click', () => {
        nav.classList.remove('show');
    });
}

if (document.readyState === 'loading') {
    document.addEventListener('DOMContentLoaded', ready);
} else {
    ready();
}

function ready() {
    var removeCartItemButton = document.getElementsByClassName('bx-x');
    for (var i = 0; i < removeCartItemButton.length; i++){
        var button = removeCartItemButton[i];
        button.addEventListener('click', function(event){
            var buttonClicked = event.target;
            buttonClicked.parentElement.parentElement.parentElement.remove();
            updateCartTotal();
        })
    }

    updateCartTotal();

    

    var quantityInputs = document.getElementsByClassName('cart-quantity-input');
    for (var i = 0; i < quantityInputs.length; i++){
        var input = quantityInputs[i];
        input.addEventListener('change', quantityChanged);
    }

    var purchaseButton = document.getElementsByClassName('btn-purchase')[0];
    purchaseButton.addEventListener('click', purchaseClicked);
}



function quantityChanged(event){
    var input = event.target;
    if (isNaN(input.value) || input.value <= 0){
        input.value = 1;
    }
    updateCartTotal();
}

function purchaseClicked() {

    var cartItems = document.getElementsByClassName('cart-items')[0];
    if (cartItems) {
        while (cartItems.hasChildNodes()) {
            cartItems.removeChild(cartItems.firstChild);
        }
    } else {
        console.error('Cart items container not found.');
    }

    updateCartTotal();
}


function updateCartTotal(){
    var cartItemContainer = document.getElementsByClassName('cart-items')[0];
    var cartRows = cartItemContainer.getElementsByClassName('cart-row');
    var total = 0;
    for (var i = 0; i < cartRows.length; i++){
        var cartRow = cartRows[i];
        var priceElement = cartRow.getElementsByClassName('item-price')[0];
        var quantityElement = cartRow.getElementsByClassName('cart-quantity-input')[0];
        var price = parseFloat(priceElement.innerText.replace('$', ''));
        var quantity = quantityElement.value;
        total = total + (price * quantity);
    }
    total = Math.round(total * 100) / 100;
    document.getElementsByClassName('cart-total-price')[0].innerText = '$' + total;
    document.getElementsByClassName('cart-total-price')[1].innerText = '$' + total;

}

