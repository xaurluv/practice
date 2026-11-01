default rel
extern printf, scanf, exit
global main

%macro PRINT 1
    lea rdi, [%1]
    xor eax, eax
    call printf wrt ..plt
%endmacro

%macro READ 2
    lea rdi, [%1]
    lea rsi, [%2]
    xor eax, eax
    call scanf wrt ..plt
%endmacro

section .data
msgBal    db "Enter your total balance please:", 10, 0
msgWd     db "How much amount do you want to withdraw?", 10, 0
msgNew    db "Your new Balance is : %d", 10, 0
msgInsuf  db "Insufficient Balance! Please Add More Money!", 10
          db "Do you wanna deposite money? Or Quit??", 10
          db "Press Q for Quit and M for Adding More Money", 10, 0
msgDep    db "How much amount do you want to input?", 10, 0
msgCont   db "Do you want to continue?", 10
          db "Press 1 to WithDraw and 2 to Deposite and 3 to Quit!", 10, 0
fmtInt    db "%d", 0
fmtChar   db " %c", 0

section .bss
TotalBalance    resd 1
WithDrawAmount  resd 1
DepositeAmount  resd 1
Check           resd 1
OptionOne       resb 1

section .text

; ---------- void InitialInput() ----------
InitialInput:
    sub rsp, 8                      ; keep stack 16-byte aligned for calls
    PRINT msgBal
    READ  fmtInt, TotalBalance
    add rsp, 8
    ret

; ---------- void WithDraw() ----------
WithDraw:
    sub rsp, 8
    PRINT msgWd
    READ  fmtInt, WithDrawAmount

    mov eax, [WithDrawAmount]
    cmp eax, [TotalBalance]
    jg  .insufficient               ; if WithDrawAmount > TotalBalance

    mov eax, [TotalBalance]         ; else: subtract
    sub eax, [WithDrawAmount]
    mov [TotalBalance], eax

    lea rdi, [msgNew]               ; print new balance
    mov esi, eax
    xor eax, eax
    call printf wrt ..plt

    call Continue
    jmp .done

.insufficient:
    PRINT msgInsuf
    READ  fmtChar, OptionOne
    mov al, [OptionOne]
    cmp al, 'Q'
    je  .quit
    cmp al, 'q'
    je  .quit
    cmp al, 'M'
    je  .more
    cmp al, 'm'
    je  .more
    jmp .done

.quit:
    xor edi, edi
    call exit wrt ..plt

.more:
    call Deposite

.done:
    add rsp, 8
    ret

; ---------- void Deposite() ----------
Deposite:
    sub rsp, 8
    PRINT msgDep
    READ  fmtInt, DepositeAmount

    mov eax, [TotalBalance]
    add eax, [DepositeAmount]
    mov [TotalBalance], eax

    lea rdi, [msgNew]
    mov esi, eax
    xor eax, eax
    call printf wrt ..plt

    call Continue
    add rsp, 8
    ret

; ---------- void Continue() ----------
Continue:
    sub rsp, 8
    PRINT msgCont
    READ  fmtInt, Check

    mov eax, [Check]
    cmp eax, 1
    je  .w
    cmp eax, 2
    je  .d
    cmp eax, 3
    je  .q
    jmp .end

.w: call WithDraw
    jmp .end
.d: call Deposite
    jmp .end
.q: xor edi, edi
    call exit wrt ..plt

.end:
    add rsp, 8
    ret

; ---------- int main() ----------
main:
    sub rsp, 8
    call InitialInput
    call WithDraw
    xor eax, eax                    ; return 0
    add rsp, 8
    ret

section .note.GNU-stack noexec
