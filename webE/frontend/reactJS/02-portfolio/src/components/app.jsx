import React from 'react';
import Profile from './profile';
import Skills from './profile/skills';
import MyProps from './props';

class App extends React.Component {
    render() {
        return (<div>
            <Profile />
            <div style={{marginTop: "30px", marginBottom: "30px"}}>
                {/* <h3>List of Programmers</h3>
                <p>Mahin Hasan</p>
                <Skills/>
                <p>Mehedi Hasan</p>
                <Skills/> */}

                <MyProps name="Md. Nahid Hassan"/>
                <MyProps name="Meem Mursalin"/>
            </div>
        </div>
        );
    }
}

export default App;