function validateForm() {
    // Get the form element
    var form = document.forms["Formname"];
    
    // Retrieve values from form fields
    var userID = form["userID"].value;
    var password = form["password"].value;
    var name = form["name"].value;
    var country = form["country"].value;
    var zipCode = form["zipCode"].value;
    var email = form["email"].value;
    var sex = form["sex"].value;
    var language = form["language"].value;

    // UserID validation
    if (userID.length < 5 || userID.length > 12) {
        alert("UserID must be between 5 and 12 characters.");
        return false; // Prevent form submission
    }

    // Password validation
    if (password.length < 7 || password.length > 12) {
        alert("Password must be between 7 and 12 characters.");
        return false; // Prevent form submission
    }

    // Name validation (alphabets only)
    var namePattern = /^[A-Za-z\s]+$/; // Allows alphabets and spaces
    if (!namePattern.test(name)) {
        alert("Name is required and must contain only alphabets.");
        return false; // Prevent form submission
    }

    // Country validation
    if (country === "") {
        alert("Country is required. Please select a country.");
        return false; // Prevent form submission
    }

    // Zip code validation (numeric only)
    if (zipCode === "" || isNaN(zipCode)) {
        alert("Zip code is required and must be numeric.");
        return false; // Prevent form submission
    }

    // Email validation with regex
    var emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!emailPattern.test(email)) {
        alert("Email is required and must be valid.");
        return false; // Prevent form submission
    }

    // Sex validation
    if (sex === "") {
        alert("Sex is required. Please select Male or Female.");
        return false; // Prevent form submission
    }

    // Language validation
    if (language === "") {
        alert("Language is required. Please select English or Non-English");
        return false; // Prevent form submission
    }

    alert("Form submitted successfully!");
    return true; // Allow form submission
}

// Attach the validateForm function to the button's onClick event
document.getElementById("submitButton").onclick = function() {
    return validateForm();
};