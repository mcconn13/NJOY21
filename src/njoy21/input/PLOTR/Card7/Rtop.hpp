struct Rtop {
  using Value_t = float;
  static std::string name(){ return "rtop"; }
  static std::string description(){
    return
      "The rtop argument specifies the upper bound for the alternate y-axis\n"
      "or the z-axis.\n\n"
      "Checks that rtop has a greater value than rbot.";
  }
  static Value_t defaultValue( const float rbot ){
    return rbot;
  }
  static bool verify( const Value_t v, 
                      const float rbot ){
    return ( v >= rbot );
  }
};
