import React from 'react';
import './profile.styles.css'
import Bio from './bio';
import Links from './links';
import Skills from './skills'

class Profile extends React.Component {

    subj_1 = {
        name: "Md. Nahid Hassan",
        title: "Undergraduate Computer Science Student University of Rajshahi.",
        skillA: 'Python',
        skillB: 'Java',
        skillC: 'C++'
    }

    render() {
        console.log("Profiles - ", this.props);
        return (
            <div className='container border'>
                <Bio name={this.subj_1.name} title={this.subj_1.title}/>
                <Skills skillA={this.subj_1.skillA} skillB={this.subj_1.skillB} skillC={this.subj_1.skillC} />
                <Links />
            </div>
        );
    }
}

export default Profile;