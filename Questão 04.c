// a. p = &i; LEGAL
// b. *q = &j; LEGAL
// c. p = &*&i; LEGAL
// d. i = (*&)j; ILEGAL
  // E: expressão esperada após parênteses
// e. i = *&j; LEGAL
// f. i = &&j; ILEGAL
  // E: uso de rótulo 'j' não declarado
// g. q = *p; LEGAL
// h. i = (*p) + *q; LEGAL
