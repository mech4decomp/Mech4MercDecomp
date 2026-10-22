/*
 * FUN_004f31a0 (82 B) — MLR/Adept dword-array resize (__thiscall, RET 4).
 * Reallocates an array of dwords: frees the old buffer (FUN_004084e0),
 * allocates a new one of param_1*4 bytes (FUN_004084d0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_004f31a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, eax
        jz      L_31ed
        test    edi, edi
        jbe     L_31dc
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_31c2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_31c2:
        lea     eax, [edi*4]
        push    eax
        mov     dword ptr [esi + 0x4], edi
        call    FUN_004084d0
        add     esp, 0x4
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     0x4
L_31dc:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_31ed:
        pop     edi
        pop     esi
        ret     0x4
    }
}
