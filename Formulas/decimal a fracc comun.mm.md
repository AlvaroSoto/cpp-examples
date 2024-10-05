# Convertir Numero Decimal Periódico a Fracción Común

## Fórmula General
- **Fórmula**: $x = {R - v \over 10^h - 10^c}$
  - \( R \): Es el entero que resulta de recorrer el punto decimal hasta la última cifra del periodo.
  - \( V \): Lugares recorridos para obtener R.
  - \( h \): Es el entero que resulta de recorrer el punto hasta una cifra antes del periodo.
  - \( c \): Lugares recorridos para obtener v.

## Ejemplo: 1.666...
- **Identificar los valores**:
  - \( R = 16 \)
  - \( v = 1 \)
  - \( h = 1 \)
  - \( c = 0 \)

- **Aplicar la fórmula**:
  - $x = {R - v \over 10^h - 10^c}$
  - $x = {16 - 1 \over 10^1 - 10^0}$
  - $x = {15 \over 10 - 1}$
  - $x = {15 \over 9}$
  - $x = {15 \over 9} \div {3 \over 3}$

## Resultado
- **Fracción**: $x = {5 \over 3}$
