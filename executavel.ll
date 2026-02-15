; ModuleID = 'Executável'
source_filename = "NiloScriptModule"
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@dPrint = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@fPrint = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1
@cPrint = private unnamed_addr constant [4 x i8] c"%c\0A\00", align 1
@sPrint = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@dScanf = private unnamed_addr constant [3 x i8] c"%d\00", align 1
@fScanf = private unnamed_addr constant [3 x i8] c"%f\00", align 1
@cScanf = private unnamed_addr constant [3 x i8] c"%c\00", align 1
@sScanf = private unnamed_addr constant [3 x i8] c"%s\00", align 1

define i32 @main() {
entrada:
  %a = alloca i32, align 4
  %0 = call i32 (ptr, ...) @scanf(ptr @dScanf, ptr %a)
  %b = alloca i32, align 4
  %1 = call i32 (ptr, ...) @scanf(ptr @dScanf, ptr %b)
  %c = alloca i32, align 4
  %2 = load i32, ptr %a, align 4
  %3 = load i32, ptr %b, align 4
  %4 = call i32 @soma(i32 %2, i32 %3)
  store i32 %4, ptr %c, align 4
  %d = alloca i32, align 4
  %5 = load i32, ptr %a, align 4
  %6 = load i32, ptr %b, align 4
  %7 = call i32 @sub(i32 %5, i32 %6)
  store i32 %7, ptr %d, align 4
  %var = load i32, ptr %c, align 4
  %8 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var)
  %var1 = load i32, ptr %d, align 4
  %9 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var1)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)

define i32 @sub(i32 %0, i32 %1) {
blocoFuncao:
  %a = alloca i32, align 4
  %b = alloca i32, align 4
  store i32 %0, ptr %a, align 4
  store i32 %1, ptr %b, align 4
  %resultado = alloca i32, align 4
  %var = load i32, ptr %a, align 4
  %var1 = load i32, ptr %b, align 4
  %subtmp = sub i32 %var, %var1
  store i32 %subtmp, ptr %resultado, align 4
  %2 = load i32, ptr %resultado, align 4
  ret i32 %2
}

define i32 @soma(i32 %0, i32 %1) {
blocoFuncao:
  %x = alloca i32, align 4
  %y = alloca i32, align 4
  store i32 %0, ptr %x, align 4
  store i32 %1, ptr %y, align 4
  %resultado = alloca i32, align 4
  %var = load i32, ptr %x, align 4
  %var1 = load i32, ptr %y, align 4
  %addtmp = add i32 %var, %var1
  store i32 %addtmp, ptr %resultado, align 4
  %2 = alloca [4 x i8], align 1
  %endereco = getelementptr [4 x i8], ptr %2, i32 0, i32 0
  store i8 116, ptr %endereco, align 1
  %endereco2 = getelementptr [4 x i8], ptr %2, i32 0, i32 1
  store i8 101, ptr %endereco2, align 1
  %endereco3 = getelementptr [4 x i8], ptr %2, i32 0, i32 2
  store i8 115, ptr %endereco3, align 1
  %endereco4 = getelementptr [4 x i8], ptr %2, i32 0, i32 3
  store i8 116, ptr %endereco4, align 1
  %3 = call i32 (ptr, ...) @printf(ptr @sPrint, ptr %endereco)
  %4 = load i32, ptr %resultado, align 4
  ret i32 %4
}
