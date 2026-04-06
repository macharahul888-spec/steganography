# steganography

🔍 Project Showcase: Steganography Using C
 🛡️ Hide data where nobody looks--inside images! 🖼️
 I'm excited to share the completion of my Steganography project in C, built during my embedded systems.
 Using the Least Significant Bit (LSB) technique, this CLI-based tool hides file data inside bmp images without altering the visible image, making the changes undetectable to the human eye. 
 LSB steganography hides secret data inside images by modifying the least significant bits of pixel values. Since these changes are minimal, the visual quality remains unaffected. It encodes message bits into image data and can later extract them without noticeable distortion, ensuring secure communication.
 
 💻What This Project Does
 🕵️‍♂️ Encode
 Conceals sensitive file content inside a BMP image using LSB manipulation while keeping the image visually intact
 🔍 Decode
 Extract the hidden file safely using a magic string validation system.
 
 ⚙️Core Features 
 Accurate BMP header handling (54-byte read/write)
✔ Bit-level encoding using LSB technique
 ✔ Robust file validation before encoding
 ✔ Dynamic argument parsing through CLI
 ✔ Safe extraction with magic string verification
 ➥ Bitwise encoding of:
 🔹Magic string
 🔹File extension length
 🔹File extension
 🔹Hidden file size
 🔹Hidden file content

 🛠️📚Tools & Skills  used
💡 System-level programming using pure c
 💡 Deep understanding of bitwise operation
 💡 Handling raw binary image data
 💡 File I/0 operation in C
 💡 Building efficient CLI utilities
 💡 Debugging and testing across multiple cases
 
 🚧 Real-World Challenges 
 📂 Understanding the BMP file structure
 ⚙️ Maintaining correct byte alignment 
 🔐 Designing a decoding system that doesn’t rely on fixed input assumptions
 🧪 Testing the tool across multiple edge cases
📈 Key Learning Outcomes
✨ Stronger understanding of low-level data manipulation
 ✨ Practical experience with bit masking and binary operation
 ✨ Improved problem-solving and debugging skills
 ✨ Experience building real command-line utilities
