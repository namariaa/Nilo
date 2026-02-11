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
  %x = alloca i32, align 4
  %0 = call i32 (ptr, ...) @scanf(ptr @dScanf, ptr %x)
  %impar = alloca i1, align 1
  store i1 false, ptr %impar, align 1
  %contador = alloca i32, align 4
  store i32 0, ptr %contador, align 4
  br label %blocoCondicionalLoop

blocoCondicionalLoop:                             ; preds = %Entrada2, %entrada
  %var = load i1, ptr %impar, align 1
  %diferente = icmp ne i1 %var, true
  br i1 %diferente, label %blocoCorpoLoop, label %Entrada3

blocoCorpoLoop:                                   ; preds = %blocoCondicionalLoop
  %var1 = load i32, ptr %x, align 4
  %multmp = mul i32 %var1, 3
  store i32 %multmp, ptr %x, align 4
  %var2 = load i32, ptr %x, align 4
  %modtmp = srem i32 %var2, 2
  %igual = icmp eq i32 %modtmp, 1
  br i1 %igual, label %blocoCondicional, label %Entrada2

Entrada3:                                         ; preds = %blocoCondicionalLoop
  %var4 = load i32, ptr %x, align 4
  %1 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var4)
  %var5 = load i32, ptr %contador, align 4
  %2 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var5)
  ret i32 0

blocoCondicional:                                 ; preds = %blocoCorpoLoop
  store i1 true, ptr %impar, align 1
  br label %Entrada2

Entrada2:                                         ; preds = %blocoCorpoLoop, %blocoCondicional
  %var3 = load i32, ptr %contador, align 4
  %addtmp = add i32 %var3, 1
  store i32 %addtmp, ptr %contador, align 4
  br label %blocoCondicionalLoop
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)
