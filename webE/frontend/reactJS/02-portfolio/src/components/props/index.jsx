import React from "react";

const MyProps = (props) => {
    console.log("MyProps  = ", props);
    return <h1>My name is {props.name}</h1>
}

export default MyProps;