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
  %valor1 = alloca [2 x i32], align 4
  %endereco = getelementptr [2 x i32], ptr %valor1, i32 0, i32 0
  store i32 1, ptr %endereco, align 4
  %endereco1 = getelementptr [2 x i32], ptr %valor1, i32 0, i32 1
  store i32 2, ptr %endereco1, align 4
  %primeira = alloca i32, align 4
  %0 = getelementptr [2 x i32], ptr %valor1, i32 0, i32 1
  %1 = load i32, ptr %0, align 4
  store i32 %1, ptr %primeira, align 4
  %var = load i32, ptr %primeira, align 4
  %2 = call i32 (ptr, ...) @printf(ptr @dPrint, i32 %var)
  %valor2 = alloca [3 x float], align 4
  %endereco2 = getelementptr [3 x float], ptr %valor2, i32 0, i32 0
  store float 0x3FF3851EC0000000, ptr %endereco2, align 4
  %endereco3 = getelementptr [3 x float], ptr %valor2, i32 0, i32 1
  store float 0x3FF3851EC0000000, ptr %endereco3, align 4
  %endereco4 = getelementptr [3 x float], ptr %valor2, i32 0, i32 2
  store float 0x4020998C80000000, ptr %endereco4, align 4
  %segundo = alloca float, align 4
  %3 = getelementptr [3 x float], ptr %valor2, i32 0, i32 2
  %4 = load float, ptr %3, align 4
  store float %4, ptr %segundo, align 4
  %var5 = load float, ptr %segundo, align 4
  %5 = call i32 (ptr, ...) @printf(ptr @fPrint, float %var5)
  %valor3 = alloca [2 x i1], align 1
  %endereco6 = getelementptr [2 x i1], ptr %valor3, i32 0, i32 0
  store i1 true, ptr %endereco6, align 1
  %endereco7 = getelementptr [2 x i1], ptr %valor3, i32 0, i32 1
  store i1 true, ptr %endereco7, align 1
  %terceiro = alloca i1, align 1
  %6 = getelementptr [2 x i1], ptr %valor3, i32 0, i32 0
  %7 = load i1, ptr %6, align 1
  store i1 %7, ptr %terceiro, align 1
  %var8 = load i1, ptr %terceiro, align 1
  %8 = call i32 (ptr, ...) @printf(ptr @dPrint, i1 %var8)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @scanf(ptr, ...)
