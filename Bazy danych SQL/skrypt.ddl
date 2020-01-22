CREATE TABLE dostawca (
    id_dostawcy      INTEGER NOT NULL,
    nazwa_dostawcy   VARCHAR2(100 CHAR) NOT NULL,
    adres_dostawcy   VARCHAR2(100 CHAR) NOT NULL
);

ALTER TABLE dostawca ADD CONSTRAINT dostawca_pk PRIMARY KEY ( id_dostawcy );

CREATE TABLE klient (
    id_klienta         INTEGER NOT NULL,
    imie_klienta       VARCHAR2(100 CHAR) NOT NULL,
    nazwisko_klienta   VARCHAR2(100 CHAR) NOT NULL,
    adres_wysy³ki      VARCHAR2(100 CHAR) NOT NULL
);

ALTER TABLE klient ADD CONSTRAINT klient_pk PRIMARY KEY ( id_klienta );

CREATE TABLE pozycja_zamowienia (
    id_pozycji                 INTEGER NOT NULL,
    zamowienia_id_zamowienia   INTEGER NOT NULL,
    produkt_id_produktu        INTEGER NOT NULL
);

ALTER TABLE pozycja_zamowienia ADD CONSTRAINT pozycja_zamowienia_pk PRIMARY KEY ( id_pozycji );

CREATE TABLE produkt (
    id_produktu            INTEGER NOT NULL,
    nazwa_produktu         VARCHAR2(100 CHAR) NOT NULL,
    iloœæ_produktu         INTEGER NOT NULL,
    cena_produktu          NUMBER NOT NULL,
    dostawca_id_dostawcy   INTEGER NOT NULL,
    marka_produktu         VARCHAR2(100 CHAR) NOT NULL
);

ALTER TABLE produkt ADD CONSTRAINT produkt_pk PRIMARY KEY ( id_produktu );

CREATE TABLE zamowienia (
    id_zamowienia       INTEGER NOT NULL,
    data_zamówienia     DATE NOT NULL,
    klient_id_klienta   INTEGER NOT NULL
);

ALTER TABLE zamowienia ADD CONSTRAINT zamowienia_pk PRIMARY KEY ( id_zamowienia );

ALTER TABLE pozycja_zamowienia
    ADD CONSTRAINT pozycjaz_produkt_fk FOREIGN KEY ( produkt_id_produktu )
        REFERENCES produkt ( id_produktu );

ALTER TABLE pozycja_zamowienia
    ADD CONSTRAINT pozycjaz_zamowienia_fk FOREIGN KEY ( zamowienia_id_zamowienia )
        REFERENCES zamowienia ( id_zamowienia );

ALTER TABLE produkt
    ADD CONSTRAINT produkt_dostawca_fk FOREIGN KEY ( dostawca_id_dostawcy )
        REFERENCES dostawca ( id_dostawcy );

ALTER TABLE zamowienia
    ADD CONSTRAINT zamowienia_klient_fk FOREIGN KEY ( klient_id_klienta )
        REFERENCES klient ( id_klienta );
