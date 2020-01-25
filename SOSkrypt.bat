@echo off
::in case of lacking argument
IF "%1" == "" GOTO end
IF "%2" == "" GOTO end

IF "%2" == "k" GOTO genderexist
IF "%2" == "m" GOTO genderexist
::in case of false gender
echo Taka plec nie istnieje!
GOTO end

:genderexist
::in case of existing folder
IF EXIST "C:\firma\%2\%1" GOTO end
::else
IF NOT EXIST "C:\firma\%2\%1" GOTO create

:create
md "C:\firma\%2\%1\priv"
md "C:\firma\%2\%1\pub"
copy "C:\firma\witaj.txt" "C:\firma\%2\%1\witaj.txt"
echo  , %1 !>> "C:\firma\%2\%1\witaj.txt"

:end
