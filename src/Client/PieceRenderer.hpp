#ifndef PIECERENDERER_H_INCLUDED
#define PIECERENDERER_H_INCLUDED

#include "SFML/Graphics.hpp"
#include "Interface/IPiece.hpp"
#include "Client/BoardBackground.hpp"

class PieceRenderer: public sf::Drawable
{
private:
    IPiece &m_piece;
    sf::Texture m_texture;
    sf::Sprite m_sprite;
public:
    PieceRenderer(IPiece &piece);
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif // PIECERENDERER_H_INCLUDED