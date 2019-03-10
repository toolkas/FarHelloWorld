/*
 Директива препроцессора, которая говорит, 
 что содержимое этого файла нужно включить в итоговый код программы лишь один раз
*/
#pragma once

/*
Подключаем заголовочный файл plugin.hpp из исходников Far,
чтобы использовать макросы MAKEFARVERSION, FARMANAGERVERSION_MAJOR и другие
*/
#include <plugin.hpp>

//Версия сборки плагина
#define PLUGIN_BUILD 0
//Описание плагина
#define PLUGIN_DESC L"Hello World Plugin for Far Manager"
//Имя плагина
#define PLUGIN_NAME L"HelloWorld"
//Имя dll-ки
#define PLUGIN_FILENAME L"HelloWorld.dll"
//Автор плагина
#define PLUGIN_AUTHOR L"Toolkas"
//Полная версия плагина
#define PLUGIN_VERSION MAKEFARVERSION(FARMANAGERVERSION_MAJOR,FARMANAGERVERSION_MINOR,FARMANAGERVERSION_REVISION,PLUGIN_BUILD,VS_RELEASE)
