; ModuleID = 'NiloScriptModule'
source_filename = "NiloScriptModule"
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@0 = private unnamed_addr constant [22 x i8] c"test before!!!!!!!!!!\00", align 1
@1 = private unnamed_addr constant [22 x i8] c"is distinct!!!!!!!!!!\00", align 1
@2 = private unnamed_addr constant [22 x i8] c"block after!!!!!!!!!!\00", align 1

define i32 @main() {
entry:
  %printCall = call i32 (ptr, ...) @print(ptr @0)
  %inCaseCondicional = icmp ne i32 6, 5
  br i1 %inCaseCondicional, label %inCase, label %main2

inCase:                                           ; preds = %entry
  %printCall1 = call i32 (ptr, ...) @print(ptr @1)
  %printCall2 = call i32 (ptr, ...) @print(ptr @2)
  br label %main2

main2:                                            ; preds = %inCase, %entry
  ret i32 6
}

declare i32 @print(ptr, ...)
