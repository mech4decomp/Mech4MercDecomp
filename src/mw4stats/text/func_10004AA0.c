/* FUN_10004aa0 - __cdecl, 354 bytes
 * SEH prologue/epilogue; parses a word stream, dispatches on word values
 * to string-append helpers, then calls FUN_10006210. */

extern void __cdecl FUN_10002fc0(void);
extern void __cdecl FUN_10001170(void);
extern void __cdecl FUN_10002fa0(void);
extern void __cdecl FUN_10003d60(void);
extern void __cdecl FUN_10004c10(void);
extern void __cdecl FUN_10004140(void);
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10006210(void);
extern void __cdecl FUN_10001190(void);

__declspec(naked) void FUN_10004aa0(void)
{
    __asm {
        mov  eax, fs:[0]
        push -0x1
        push 0x1001f536
        push eax
        mov  dword ptr fs:[0], esp
        sub  esp, 0x130
        push esi
        mov  esi, dword ptr [esp + 0x14c]
        mov  ecx, esi
        call FUN_10002fc0
        test eax, eax
        jz   L_bec
        push 0x400
        lea  ecx, [esp + 0xa0]
        call FUN_10001170
        mov  ecx, esi
        mov  dword ptr [esp + 0x13c], 0x0
        call FUN_10002fa0
        push 0x400
        lea  ecx, [esp + 0x8]
        mov  esi, eax
        call FUN_10001170
        mov  ax, word ptr [esi]
        test ax, ax
        mov  byte ptr [esp + 0x13c], 0x1
        jz   L_ba1
L_b19:
        cmp  ax, 0x26
        jnz  L_b2f
        push 0x100248b0
        lea  ecx, [esp + 0x8]
        call FUN_10003d60
        jmp  L_b91
L_b2f:
        cmp  ax, 0x3c
        jnz  L_b45
        push 0x100248a4
        lea  ecx, [esp + 0x8]
        call FUN_10003d60
        jmp  L_b91
L_b45:
        cmp  ax, 0x3e
        jnz  L_b5b
        push 0x10024898
        lea  ecx, [esp + 0x8]
        call FUN_10003d60
        jmp  L_b91
L_b5b:
        cmp  ax, 0x27
        jnz  L_b71
        push 0x10024888
        lea  ecx, [esp + 0x8]
        call FUN_10003d60
        jmp  L_b91
L_b71:
        cmp  ax, 0x22
        jnz  L_b87
        push 0x10024878
        lea  ecx, [esp + 0x8]
        call FUN_10003d60
        jmp  L_b91
L_b87:
        push eax
        lea  ecx, [esp + 0x8]
        call FUN_10004c10
L_b91:
        mov  ax, word ptr [esi + 0x2]
        add  esi, 0x2
        test ax, ax
        jnz  L_b19
L_ba1:
        lea  ecx, [esp + 0x4]
        call FUN_10004140
        push eax
        lea  ecx, [esp + 0xa0]
        call FUN_10001660
        mov  ecx, dword ptr [esp + 0x148]
        mov  edx, dword ptr [esp + 0x144]
        lea  eax, [esp + 0x9c]
        push eax
        push ecx
        push edx
        call FUN_10006210
        add  esp, 0xc
        lea  ecx, [esp + 0x4]
        call FUN_10001190
        lea  ecx, [esp + 0x9c]
        call FUN_10001190
L_bec:
        mov  ecx, dword ptr [esp + 0x134]
        pop  esi
        mov  dword ptr fs:[0], ecx
        add  esp, 0x13c
        ret
    }
}
