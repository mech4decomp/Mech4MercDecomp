/*
 * FUN_00422e30 (102 B) — __thiscall destructor for an MLR object.
 * Frees two per-element arrays (loop over 2 elements at [this+0x30]),
 * then frees the [this+0x18], [this+0x10], [this+0x8] and [this+0x0]
 * members via operator delete (FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00422e30(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     esi, [edi+0x30]
        mov     ebx, 0x2
L1:
        mov     eax, dword ptr [esi-0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L2:
        dec     ebx
        jnz     L1
        mov     eax, dword ptr [edi+0x18]
        test    eax, eax
        jz      L3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L3:
        mov     eax, dword ptr [edi+0x10]
        test    eax, eax
        jz      L4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L4:
        mov     eax, dword ptr [edi+0x8]
        test    eax, eax
        jz      L5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L5:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jz      L6
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L6:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
