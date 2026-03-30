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
  %teste_redefinir = alloca i32, align 4
  store i32 5, ptr %teste_redefinir, align 4
  %var = load i32, ptr %teste_redefinir, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var)
  store i32 10, ptr %teste_redefinir, align 4
  %var1 = load i32, ptr %teste_redefinir, align 4
  %1 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var1)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)
