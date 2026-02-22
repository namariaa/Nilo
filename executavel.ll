; ModuleID = 'Executável'
source_filename = "NiloScriptModule"
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@sPrint = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1

define i32 @main() {
entrada:
  %error = alloca [41 x i8], align 1
  %endereco = getelementptr [41 x i8], ptr %error, i32 0, i32 0
  store i8 69, ptr %endereco, align 1
  %endereco1 = getelementptr [41 x i8], ptr %error, i32 0, i32 1
  store i8 114, ptr %endereco1, align 1
  %endereco2 = getelementptr [41 x i8], ptr %error, i32 0, i32 2
  store i8 114, ptr %endereco2, align 1
  %endereco3 = getelementptr [41 x i8], ptr %error, i32 0, i32 3
  store i8 111, ptr %endereco3, align 1
  %endereco4 = getelementptr [41 x i8], ptr %error, i32 0, i32 4
  store i8 114, ptr %endereco4, align 1
  %endereco5 = getelementptr [41 x i8], ptr %error, i32 0, i32 5
  store i8 46, ptr %endereco5, align 1
  %endereco6 = getelementptr [41 x i8], ptr %error, i32 0, i32 6
  store i8 32, ptr %endereco6, align 1
  %endereco7 = getelementptr [41 x i8], ptr %error, i32 0, i32 7
  store i8 65, ptr %endereco7, align 1
  %endereco8 = getelementptr [41 x i8], ptr %error, i32 0, i32 8
  store i8 32, ptr %endereco8, align 1
  %endereco9 = getelementptr [41 x i8], ptr %error, i32 0, i32 9
  store i8 118, ptr %endereco9, align 1
  %endereco10 = getelementptr [41 x i8], ptr %error, i32 0, i32 10
  store i8 97, ptr %endereco10, align 1
  %endereco11 = getelementptr [41 x i8], ptr %error, i32 0, i32 11
  store i8 114, ptr %endereco11, align 1
  %endereco12 = getelementptr [41 x i8], ptr %error, i32 0, i32 12
  store i8 105, ptr %endereco12, align 1
  %endereco13 = getelementptr [41 x i8], ptr %error, i32 0, i32 13
  store i8 -61, ptr %endereco13, align 1
  %endereco14 = getelementptr [41 x i8], ptr %error, i32 0, i32 14
  store i8 -95, ptr %endereco14, align 1
  %endereco15 = getelementptr [41 x i8], ptr %error, i32 0, i32 15
  store i8 118, ptr %endereco15, align 1
  %endereco16 = getelementptr [41 x i8], ptr %error, i32 0, i32 16
  store i8 101, ptr %endereco16, align 1
  %endereco17 = getelementptr [41 x i8], ptr %error, i32 0, i32 17
  store i8 108, ptr %endereco17, align 1
  %endereco18 = getelementptr [41 x i8], ptr %error, i32 0, i32 18
  store i8 32, ptr %endereco18, align 1
  %endereco19 = getelementptr [41 x i8], ptr %error, i32 0, i32 19
  store i8 100, ptr %endereco19, align 1
  %endereco20 = getelementptr [41 x i8], ptr %error, i32 0, i32 20
  store i8 32, ptr %endereco20, align 1
  %endereco21 = getelementptr [41 x i8], ptr %error, i32 0, i32 21
  store i8 110, ptr %endereco21, align 1
  %endereco22 = getelementptr [41 x i8], ptr %error, i32 0, i32 22
  store i8 -61, ptr %endereco22, align 1
  %endereco23 = getelementptr [41 x i8], ptr %error, i32 0, i32 23
  store i8 -93, ptr %endereco23, align 1
  %endereco24 = getelementptr [41 x i8], ptr %error, i32 0, i32 24
  store i8 111, ptr %endereco24, align 1
  %endereco25 = getelementptr [41 x i8], ptr %error, i32 0, i32 25
  store i8 32, ptr %endereco25, align 1
  %endereco26 = getelementptr [41 x i8], ptr %error, i32 0, i32 26
  store i8 102, ptr %endereco26, align 1
  %endereco27 = getelementptr [41 x i8], ptr %error, i32 0, i32 27
  store i8 111, ptr %endereco27, align 1
  %endereco28 = getelementptr [41 x i8], ptr %error, i32 0, i32 28
  store i8 105, ptr %endereco28, align 1
  %endereco29 = getelementptr [41 x i8], ptr %error, i32 0, i32 29
  store i8 32, ptr %endereco29, align 1
  %endereco30 = getelementptr [41 x i8], ptr %error, i32 0, i32 30
  store i8 100, ptr %endereco30, align 1
  %endereco31 = getelementptr [41 x i8], ptr %error, i32 0, i32 31
  store i8 101, ptr %endereco31, align 1
  %endereco32 = getelementptr [41 x i8], ptr %error, i32 0, i32 32
  store i8 99, ptr %endereco32, align 1
  %endereco33 = getelementptr [41 x i8], ptr %error, i32 0, i32 33
  store i8 108, ptr %endereco33, align 1
  %endereco34 = getelementptr [41 x i8], ptr %error, i32 0, i32 34
  store i8 97, ptr %endereco34, align 1
  %endereco35 = getelementptr [41 x i8], ptr %error, i32 0, i32 35
  store i8 114, ptr %endereco35, align 1
  %endereco36 = getelementptr [41 x i8], ptr %error, i32 0, i32 36
  store i8 97, ptr %endereco36, align 1
  %endereco37 = getelementptr [41 x i8], ptr %error, i32 0, i32 37
  store i8 100, ptr %endereco37, align 1
  %endereco38 = getelementptr [41 x i8], ptr %error, i32 0, i32 38
  store i8 97, ptr %endereco38, align 1
  %endereco39 = getelementptr [41 x i8], ptr %error, i32 0, i32 39
  store i8 33, ptr %endereco39, align 1
  %endereco40 = getelementptr [41 x i8], ptr %error, i32 0, i32 40
  store i8 0, ptr %endereco40, align 1
  %0 = call i32 (ptr, ...) @printf(ptr @sPrint, ptr %endereco)
  ret i32 0
}

declare i32 @printf(ptr, ...)
