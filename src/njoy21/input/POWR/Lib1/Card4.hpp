class Card4{

#include "njoy21/input/POWR/Lib1/Card4/Word.hpp"

Word word;

template< typename Istream >
Card4( Istream& is )
try:
  word( argument::extract< POWR::Lib1::Card4::Word >( is ) )
{
  Card::clear( is );
}
catch( std::exception& e ){
  Log::info( "Trouble reading Card4." );
  throw e;
}
};
