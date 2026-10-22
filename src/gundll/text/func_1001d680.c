/*
 * FUN_1001d680 (189 B) — __stdcall, RET 0x8. Recursive size-accumulator.
 * Walks a tree of string entries, summing string lengths plus per-node
 * constants from globals.
 */

extern void __cdecl FUN_1001dae0(void);
extern void __cdecl FUN_1001d680_self(void);   /* recursive call to self */

extern int g_10050cd4;
extern int g_10050cdc;
extern int g_10050ce4;
extern int g_10050cec;
extern int g_10050cf4;

__declspec(naked) void __stdcall FUN_1001d680(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        repne   scasb
        mov     eax, dword ptr [esi + 0xc]
        not     ecx
        dec     ecx
        mov     ebx, ecx
        add     ebx, dword ptr [g_10050cd4]
        xor     ebp, ebp
        test    eax, eax
        jbe     L_d6e5
    L_d6a6:
        mov     ecx, dword ptr [esi + 0x14]
        mov     edx, dword ptr [ecx + ebp*4]
        lea     eax, [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    0
        push    edx
        push    eax
        call    FUN_1001dae0
        mov     ecx, dword ptr [esi + 0x10]
        mov     edi, dword ptr [ecx + ebp*4]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        mov     eax, dword ptr [g_10050cdc]
        mov     edi, dword ptr [esp + 0x18]
        not     ecx
        dec     ecx
        add     ecx, eax
        mov     eax, dword ptr [esi + 0xc]
        add     ecx, edi
        add     ebx, ecx
        inc     ebp
        cmp     ebp, eax
        jc      L_d6a6
    L_d6e5:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L_d6f4
        add     ebx, dword ptr [g_10050ce4]
        jmp     L_d720
    L_d6f4:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [g_10050cec]
        push    eax
        push    edx
        add     ebx, ecx
        call    FUN_1001d680_self
        mov     edi, dword ptr [esi + 0x4]
        mov     edx, dword ptr [g_10050cf4]
        add     ebx, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, edx
        add     ebx, ecx
    L_d720:
        mov     esi, dword ptr [esi + 0x18]
        test    esi, esi
        jz      L_d734
        mov     eax, dword ptr [esp + 0x14]
        push    esi
        push    eax
        call    FUN_1001d680_self
        add     ebx, eax
    L_d734:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        ret     0x8
    }
}
