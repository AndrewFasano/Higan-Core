#ifdef SUFAMITURBO_CPP

auto SufamiTurboCartridge::serialize(serializer& s) -> void {
  s.array(ram.data(), ram.size());
}

#endif
