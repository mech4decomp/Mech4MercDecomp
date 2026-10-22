/*
 * FUN_004a93f0 (56 B) — MLR ShardCloud sub-object registry destructor
 * (__thiscall). Sets vtable 0x770450, frees two buffers (0x2a4, 0x298) via
 * FUN_004084e0, then calls base dtor FUN_004ab750.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004ab750(void);

__declspec(naked) void FUN_004a93f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x770450
        mov     eax, dword ptr [esi + 0x2a4]
        test    eax, eax
        jz      L_4a940c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4a940c:
        mov     eax, dword ptr [esi + 0x298]
        test    eax, eax
        jz      L_4a941f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4a941f:
        mov     ecx, esi
        call    FUN_004ab750
        pop     esi
        ret
    }
}
