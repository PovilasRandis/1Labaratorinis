# Įrėmintas pasisveikinimas

```shell
********************
*                  *
* Sveikas, Pasauli *
*                  *
********************
```

Programa skirta pasisveikinimo, apvilkto į rėmelį, išvedimui į konsolę.

## Veikimo principas

Paleidus programą, komandinėje eilutėje vartotojo yra prašoma suvesti:

* Vardą: *Irasykite savo varda:*
 
* Nauja remelio dydi: *Irasykite remelio dydi:*


Suvedus šiuos duomenis programa konsolėje atspausdina pasisveikinimą, įvilktą į rėmelį, sudarytą iš žvagždučių `*`:

```shell
Iveskite savo varda Petras
**********************
*                    *
*  Sveikas, Petras!  *
*                    *
**********************
```

Jei vartotojas įveda moterišką vardą, pvz *Ruta*, tai pasisveikinimas *Sveikas* yra automatiškai pakeičiamas žodžiu *Sveika*:

```shell
Iveskite savo varda Ruta!

************************
*                      *
*    Sveika, Ruta!     *
*                      *
************************
```


## Programos diegimas ir paleidimas

* Atsisiųskite programos versiją iš [Releases](https://github.com/PovilasRandis/1Labaratorinis/releases) aplanko ir ją išsiarchyvuokite,
* Komandinėje eilutėje įvykdykite sekančius veiksmus:

```shell
cd nuoroda_į_programos_aplanką
make compile-run arba g++ 'v1.0.cpp' -o 'v0.1'  && './v0.1'
make run arba ./main
```

### Changelog

* [v1.0](https://github.com/PovilasRandis/1Laboratorinis/releases/tag/v1.0) Leidžia vartotojui įvesti rėmelio dydį.
* [v0.2](https://github.com/PovilasRandis/1Laboratorinis/releases/tag/v0.2) Pakeičia žodį *Sveikas* į *Sveika*, atsižvelgiant į vartotojo lytį.
* [v0.1](https://github.com/PovilasRandis/1Laboratorinis/releases/tag/v0.1) Atspausdina pasisveikinimą su rėmeliu.
