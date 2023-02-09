import React from "react";
import './app.styles.css'

class App extends React.Component {
    // create a property variable for version <= 16.0 
    // constructor(props) {
    //     super(props);
    //     // this.count = 0; 
    //     this.state = {
    //         count : 0
    //     }
    // }

    // count = 5;
    state = {
        count: 10
    }

    render() {
        return(
            <div className="container">
                <h1 className="text-center">Why we need State?</h1>
                {/* <br /> */}

                <p className="text-center">Count = {this.state.count} </p>
                {/* <button className="text-center" onClick={ () => { 
                    this.setState({count : this.state.count + 1});
                    console.log('Clicked ', this.state.count);
                }}>
                    Add +1
                </button> */}

                <button className="text-center" onClick={() => {
                    this.setState(
                        prev => {
                            return {
                                count: this.state.count + 1
                            };
                        }, () => {
                            console.log('Count', this.state.count);
                        }
                    )
                }}>
                    Click for Add +1
                </button>
            </div>
        );
    }
}

export default App;