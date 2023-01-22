import React from 'react';
import './profile.styles.css'
import Bio from './bio';
import Links from './links';
import Skills from './skills'

class Profile extends React.Component {
    render() {
        console.log("Profiles - ", this.props);
        return (
            <div className='container border'>
                <Bio />
                <Skills />
                <Links />
            </div>
        );
    }
}

export default Profile;