; ModuleID = 'Executável'
source_filename = "NiloScriptModule"
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@dPrint = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@fPrint = private unnamed_addr constant [4 x i8] c"%f\0A\00", align 1
@cPrint = private unnamed_addr constant [4 x i8] c"%c\0A\00", align 1
@sPrint = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@0 = private unnamed_addr constant [5 x i8] c"test\00", align 1

define i32 @main() {
entrada:
  %a = alloca i32, align 4
  %0 = call i32 (ptr, ...) @scanf(ptr @dPrint, ptr %a)
  store i32 %0, ptr %a, align 4
  %b = alloca i32, align 4
  %1 = call i32 (ptr, ...) @scanf(ptr @dPrint, ptr %b)
  store i32 %1, ptr %b, align 4
  %c = alloca i32, align 4
  %2 = load i32, ptr %a, align 4
  store i32 %2, ptr %x, align 4
  %3 = load i32, ptr %b, align 4
  store i32 %3, ptr %y, align 4
  %4 = call i32 (...) @soma(i32 %2, i32 %3)
  store i32 %4, ptr %c, align 4
  %var = load i32, ptr %c, align 4
  %5 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)

define i32 @soma(...) {
blocoFuncao:
  %x = alloca i32, align 4
  %y = alloca i32, align 4
  %resultado = alloca i32, align 4
  %var = load i32, ptr %x, align 4
  %var1 = load i32, ptr %y, align 4
  %addtmp = add i32 %var, %var1
  store i32 %addtmp, ptr %resultado, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @sPrint, ptr @0)
  %1 = load i32, ptr %resultado, align 4
  ret i32 %1
}
