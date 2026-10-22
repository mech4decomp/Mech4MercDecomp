/*
 * FUN_004a4810 (113 B) — MLR subsystem destructor. Sets vtable 0x770354,
 * frees a set of sub-object pointers, then calls FUN_004a93f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004a93f0(void);

__declspec(naked) void FUN_004a4810(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x770354
        mov     eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        jz      L_482c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_482c:
        mov     eax, dword ptr [esi + 0x2e8]
        test    eax, eax
        jz      L_483f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_483f:
        mov     eax, dword ptr [esi + 0x2dc]
        test    eax, eax
        jz      L_4852
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4852:
        mov     eax, dword ptr [esi + 0x2c8]
        test    eax, eax
        jz      L_4865
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4865:
        mov     eax, dword ptr [esi + 0x2bc]
        test    eax, eax
        jz      L_4878
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4878:
        mov     ecx, esi
        call    FUN_004a93f0
        pop     esi
        ret
    }
}
