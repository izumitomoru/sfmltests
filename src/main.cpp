#include "functions.h"

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// argc is argument count, char buffer is argument
int main(int argc, char*[]) {
#if 0
  sf::RenderWindow window(sf::VideoMode({ 200, 200 }), "SFML works!");
  sf::CircleShape shape(100.f);
  shape.setFillColor(sf::Color::Green);

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    window.clear();
    window.draw(shape);
    window.display();
  }
#endif
#if 1
  // Create the main window
  sf::RenderWindow window(sf::VideoMode({ 1500, 1000 }), "SFML window");

  // Load a sprite to display
  const sf::Texture texture("/run/media/pebarch/pebdrive/4chan/[s4s]/micker/micker7843.jpg");
  sf::Sprite sprite(texture);

  // Create a graphical text to display
  // const sf::Font font("arial.ttf");
  // sf::Text text(font, "Hello SFML", 50);

  //// Load a music to play
  // sf::Music music("nice_music.ogg");

  // Play the music
  // music.play();

  // Start the game loop
  while (window.isOpen()) {
    // Process events
    while (const std::optional event = window.pollEvent()) {
      // Close window: exit
      if (event->is<sf::Event::Closed>())
        window.close();
    }

    // Clear screen
    window.clear();

    // Draw the sprite
    window.draw(sprite);

    // Draw the string
    // window.draw(text);

    // Update the window
    window.display();
  }
#endif
}
