/*
 * FUN_0060FC90 (81 B) — __thiscall destructor. Sets vtable 0x78c0b0,
 * frees 0x3e8 pointers at +0xc08, then destroys 0xff sub-objects at
 * +0x808 (each via FUN_0041fc90), then FUN_00415380(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void *ptr);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall FUN_0060FC90(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     dword ptr [ebx], 0x78c0b0
        lea     esi, [ebx + 0xc08]
        mov     edi, 0x3e8
L_FCA6:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_FCB8
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0
L_FCB8:
        add     esi, 0x4
        dec     edi
        jnz     L_FCA6
        lea     esi, [ebx + 0x808]
        mov     edi, 0xff
L_FCC9:
        sub     esi, 0x8
        mov     ecx, esi
        call    FUN_0041fc90
        dec     edi
        jnz     L_FCC9
        mov     ecx, ebx
        call    FUN_00415380
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
