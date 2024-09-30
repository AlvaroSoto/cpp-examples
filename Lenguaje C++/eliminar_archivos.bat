REM Eliminar archivos en una carpeta y subcarpetas con un archivo por lotes de Windows
REM Aun esta en desarrollo
@echo off
REM dir lo que contiene la carpeta
echo CONTENIDO DE LA CARPETA:
dir
REM del lo que va a eliminar
echo ELIMINANDO ARCHIVOS:
del *.exe /s /q

echo Proceso completado.
pause