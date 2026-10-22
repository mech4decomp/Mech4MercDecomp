/*
 * FUN_004a6000 (87 B) — MLR particle-count clamp (__thiscall, RET 0x4).
 * Computes 0x400 / [this+0x380]; if current count [this+0x268] exceeds it,
 * warns (FUN_006fabf0) and clamps, else delegates to FUN_004a9550.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004a9550(void);

__declspec(naked) void FUN_004a6000(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, ecx
        xor     edx, edx
        mov     eax, 0x400
        div     dword ptr [esi+0x380]
        mov     ecx, dword ptr [esi+0x268]
        mov     ebx, dword ptr [ebp+0x8]
        cmp     ecx, eax
        jle     L1
        test    bl, bl
        jz      L2
        mov     dword ptr [esi+0x268], eax
        mov     eax, dword ptr [esi+0x4]
        push    eax
        push    0x7b2fe8
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L1
        int     3
L1:
        push    ebx
        mov     ecx, esi
        call    FUN_004a9550
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x4
L2:
        pop     esi
        xor     al, al
        pop     ebx
        pop     ebp
        ret     0x4
    }
}
