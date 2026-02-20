document.addEventListener('DOMContentLoaded', function() {
    let btnC = document.getElementById('btn-c');
    let btnCpp = document.getElementById('btn-cpp');

    // Function to set language
    function setLanguage(lang) {
        // Save to localStorage
        localStorage.setItem('preferred-language', lang);
        
        // Update Body Class
        document.body.classList.remove('show-c', 'show-cpp');
        document.body.classList.add('show-' + lang);
        
        // Update Buttons if they exist (only on pages with the toggler)
        if (btnC && btnCpp) {
            if (lang === 'c') {
                btnC.classList.add('active');
                btnCpp.classList.remove('active');
            } else {
                btnCpp.classList.add('active');
                btnC.classList.remove('active');
            }
        }
    }

    // Load preference
    const storedLang = localStorage.getItem('preferred-language');
    // Default to 'c' if not set
    if (storedLang === 'cpp') {
        setLanguage('cpp');
    } else {
        setLanguage('c');
    }

    // Add event listeners if buttons exist
    if (btnC && btnCpp) {
        btnC.addEventListener('click', function() {
            setLanguage('c');
        });

        btnCpp.addEventListener('click', function() {
            setLanguage('cpp');
        });
    }
});
