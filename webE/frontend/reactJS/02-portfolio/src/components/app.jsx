import React from 'react';
import Profile from './profile';
import Skills from './profile/skills';
import MyProps from './props';
import Bio from './profile/bio';

class Child extends React.Component {
    render() {  
        this.props.func(this);
        return <h1>Hi I am child.</h1>
    }
}

class App extends React.Component {
    getContext(context) {
        console.log(this);
    }

    render() {
        this.getContext(this);
        return (<div>
            <Profile />
            <Bio name='Md. Mehedi Hasan' title='CS Student'/>
            <Skills skillA='JavaScript' skillB='HTML' skillC='ReactJS' />
            {/* <div style={{marginTop: "30px", marginBottom: "30px"}}>
                <h3>List of Programmers</h3>
                <p>Mahin Hasan</p>
                <Skills/>
                <p>Mehedi Hasan</p>
                <Skills/>

                <MyProps name="Md. Nahid Hassan"/>
                <MyProps name="Meem Mursalin"/>
            </div> */}
            <Child func={this.getContext} />
        </div>
        );
    }
}

export default App;