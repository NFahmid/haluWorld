import React, { useState } from 'react';

function ColorPicker(){
    const [color, setColor] = useState('#000000');

    const handleColorChange = (event) => {
        const newColor = event.target.value;
        setColor(newColor);
    }

    return (
        <>
            <div className="color-picker-container">
                <h1>Color Picker</h1>
                <div className='color-display' style={{ backgroundColor: color }}>
                    <p>Selected color: {color}</p>
                </div>
                <label> Pick a color:</label>
                <input type="color" value={color} onChange={handleColorChange} />

            </div>
        </>
    );
}

export default ColorPicker;