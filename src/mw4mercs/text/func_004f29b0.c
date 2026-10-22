/*
 * FUN_004f29b0 (101 B) — MLR/Adept audio stream setup (__thiscall, RET 4).
 * Calls FUN_004164b0; if it fails, builds a stream object via
 * FUN_004d1f80/FUN_004084d0/FUN_004ec5f0, registers it with FUN_00416470,
 * and tears down the temp with FUN_004d21c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004ec5f0(void);
extern void __cdecl FUN_00416470(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_004f29b0(void)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        mov     ebx, dword ptr [esp + 0x4c]
        push    edi
        lea     edi, [ecx + 0x58]
        push    ebx
        mov     ecx, edi
        call    FUN_004164b0
        test    eax, eax
        jnz     L_2a0d
        push    esi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x14]
        call    FUN_004d1f80
        push    0xa8
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_29f6
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, eax
        call    FUN_004ec5f0
        mov     esi, eax
        jmp     L_29f8
L_29f6:
        xor     esi, esi
L_29f8:
        push    ebx
        push    esi
        mov     ecx, edi
        call    FUN_00416470
        lea     ecx, [esp + 0xc]
        call    FUN_004d21c0
        mov     eax, esi
        pop     esi
L_2a0d:
        pop     edi
        pop     ebx
        add     esp, 0x44
        ret     0x4
    }
}
