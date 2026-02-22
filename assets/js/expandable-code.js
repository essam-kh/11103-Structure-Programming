
function toggleExpandableCode(contentId, headerElement) {
    const content = document.getElementById(contentId);
    const btn = headerElement.querySelector('.expandable-toggle-btn');
    const label = btn.querySelector('.expandable-label');

    content.classList.toggle('expanded');
    btn.classList.toggle('expanded');

    if (content.classList.contains('expanded')) {
        // Set max-height to the exact pixel height of the content
        content.style.maxHeight = content.scrollHeight + "px";
        label.innerText = "Collapse";
    } else {
        content.style.maxHeight = "0";
        label.innerText = "Expand";
    }
}



function copyExpandableCode(elementId, buttonElement) {
    const codeBlock = document.getElementById(elementId);

    // If there are language-specific divs, copy only the visible one
    const langDivs = codeBlock.querySelectorAll('.lang-c, .lang-cpp');
    let text;
    if (langDivs.length > 0) {
        const visibleDiv = Array.from(langDivs).find(div => div.offsetParent !== null);
        text = visibleDiv ? visibleDiv.textContent : codeBlock.textContent;
    } else {
        text = codeBlock.textContent;
    }

    navigator.clipboard.writeText(text.trim()).then(function() {
        const originalText = buttonElement.textContent;
        buttonElement.textContent = 'Copied! ✓';

        setTimeout(() => {
            buttonElement.textContent = originalText;
            buttonElement.style.background = '';
        }, 2000);
    }).catch(function(err) {
        console.error('Could not copy text: ', err);
        alert('Failed to copy code');
    });
}

document.addEventListener('DOMContentLoaded', function() {
    console.log('Expandable code blocks initialized');
});
