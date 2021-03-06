# Упражнение 9

## Задача 1 

Бай Страхил пиромана си правил опити да си спретне пиратки за нова година (силно не ви го препоръчваме). Във всеки опит той използвал определено количество от калциев нитрат, алуминий на прах и сяра. Разбира се на него му било интересно сам да намери най-подходящите пропорции за най-добър ефект, за това за всеки опит слагал различни количества от всеки продукт. Ваша задача е да сортирате експериментите във  възходящ ред спрямо ефекта на пиратките. Казваме, че една пиратка е по-добра от друга ако съотношенията на продуктите са по-близки до 5:3:2 (калциев нитрат:алуминий:сяра).

За определяне на близост до даденото съотношение се нуждаем от някаква мярка. Нека в случая да вземем за мярка евклидовата норма на разликата на единичния вектор на най-доброто състояние и единичния вектор на съотношенията на експеримента. Колкото тяхното разстоянието е по-близко до нулата толкова по-добър ефект има пиратката.

Ще получавате данните по следния начин:
- Брой експерименти 4 <= n <= 20
- Ще бъдат изброени последователно данните за n експеримента
    - количество калциев нитрат
    - количество алуминий
    - количество сяра

Като изход се очакват стойностите на трите компонента най-близки до правилното съотношение.

Създайте отделни функции за въвеждане и извеждане на обект, и за реализиране на задачата. Както и за останалите нужни функции, които ще ви потрябват при решаване на задачата.

## Задача 2


Дошла новата 2021 година, Бай Страхил успешно създал перфектната пиратка и гърмял на воля в двора. През това време в съседната къща се събрали всички рептили, извънземни и тайни правителства, за да определят плановете за човечеството за новата година. Главата на събранието Джордж Сорос извадил списъка с определените събития за месеците на новата година и седнали да обсъждат за нужни промени. Взели решение, че заради многото бедствия изсипали се миналата година, поради грешка в ХАРП-ата, щяло да е добре да понамалят таз годишните наказания над човечеството. За целта определили колко точки всяко бедствие носи към основните цели на организацията:
- точки преустрояване на цивилизацията към зидари
- точки създаване на по-комфортни човешки костюми за рептилите и другите извънземни
- точки прецакване на студентите от ФМИ

След край на заседанието решили да направят следните промени. За всеки месец да премахнат бедствията отговарящи на поне едно от условията:-
- Ако основните цели имат едни и същ брой точки - достатъчно с равностранните триъгълници, пак ще вземе някой да се усети
- Ако сумата на основните цели надвиши 50
- Ако точките прецакване на студентите от ФМИ е по-голяма от произведението на останалите две цели
- Ако след премахване на бедствията спрямо горепосочените изисквания техния брой остане повече от 6 да се премахнат тези бедствия, чиято сума от точките им е най-голяма. Реда на бедствията да остане същия.

Вашата задача е по подаден масив от стойностите на бедствията да премахнете тези елементи, които отговарят на тези условия. 

За вход първо ще бъдат дадени броя бедствия за някой месец и последователно ще бъдат изброени точките за всяка цел на едно бедствие.

За изход изпишете точките на бедствията останали от плана.
