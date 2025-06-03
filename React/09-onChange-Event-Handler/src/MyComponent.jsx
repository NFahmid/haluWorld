import react, { useState } from 'react';


function MyComponent(){
    const [name, setName] = useState("");
    const [quantity, setQuantity] = useState(0);
    const [paymentType, setPaymentType] = useState("credit");
    const [shipping, setShipping] = useState("standard");

    function handleChange(event){
        setName(event.target.value);
    }

    function handleQuantityChange(event){
        if (event.target.value < 0){
            setQuantity(0);
            return;
        }
        setQuantity(event.target.value);
    }

    function handlePaymentTypeChange(event){
        setPaymentType(event.target.value);
    }

    function handleShippingChange(event){
        setShipping(event.target.value);
    }


    return(
        <>
            <div>
                <input type="text" value={name} onChange={handleChange} />
                <p>Hello, {name}!</p>

                <input type="number" value={quantity} onChange={handleQuantityChange} />
                <p>Quantity: {quantity}</p>

                <select value={paymentType} onChange={handlePaymentTypeChange}>
                    <option value="Cash">Cash</option>
                    <option value="credit">Credit Card</option>
                    <option value="debit">Debit Card</option>
                    <option value="paypal">PayPal</option>
                </select>
                <p>Payment Type: {paymentType}</p>

                <label>
                    <input type="radio" value="standard" checked={shipping === "standard"} onChange={handleShippingChange} />
                    Standard Shipping
                </label>
                <label>
                    <input type="radio" value="express" checked={shipping === "express"} onChange={handleShippingChange} />
                    Express Shipping
                </label>
                <p>Shipping: {shipping}</p>
            </div>
        </>
    );
}
export default MyComponent;