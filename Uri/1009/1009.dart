import 'dart:io';
void main() {
  String name = stdin.readLineSync();
  double a = double.parse(stdin.readLineSync());
  double b  = double.parse(stdin.readLineSync());
  b *= 0.15;
  a+= b;
  print('TOTAL = R\$ ${a.toStringAsFixed(2)}');
}