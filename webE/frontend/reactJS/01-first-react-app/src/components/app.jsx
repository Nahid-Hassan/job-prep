import React, {Component} from 'react';


// Component name must in UpperCamelCase
const MyCustomComponent1 = () => <h1>My Custom Component1</h1>
const MyCustomComponent2 = () => <h2>My Custom Component2</h2>

class App extends Component {
    // presentation layer
    render() {
        // https://youtu.be/hHaaAPrdM4g?list=PL_XxuZqN0xVBANld2gDEE6_0G886zavUs
        // must contain a return method

        const h1obj = {
            title : 'I am title - h1obj',
            id : 'h1obj'
        }

        const name = "Md. Nahid Hassan";
        const bio = (
            <div>
                <h3>{name}</h3>
                <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Itaque in voluptatibus, quasi laboriosam a illum ab officiis ipsa dolores id!</p>
            </div>
        )

        return (
            // can contain 1 root elements
            // in here it is <div> .. </div>
            // div can contain lots of children.
            <div className='App'>
                <h1 title='I am h1'>What is JSX</h1>
                {/* we use two curly based because we want to execute javascript code */}
                <h1 {...h1obj}>What is JSX - with h1Obj</h1>
                <p>JSX is awesome - it means JS Extension</p>
                <MyCustomComponent1/>
                {/* To execute javascript */}
                <p>{new Date().toString()}</p>
                <MyCustomComponent2/>
                <p>{bio}</p>
            </div>
        );

        // return () - show error
    }
}

// must export every components
// default export
export default App;

// functional components
// function myFunctionalComponent() {
//     const name = "Md. Nahid Hassan";
    
//     // any function that return jsx is functional components
//     return <h1>H1 Tag - Try to understand functional Components</h1>;
// }

// // arrow function

// // explicit return
// const anotherFunctionalComponent  = () => {
//     return <p>I am another functional component - using arrow function to create component</p>;
// }

// // implicit return
// const anotherFunctionalComponent1 = () => (
//     <h1>Functional Components by arrow function - implicit return</h1>
// );