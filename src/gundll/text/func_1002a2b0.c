/*
 * FUN_1002a2b0 (93 B) - __fastcall. SEH-framed ctor/dtor: installs vtable
 * 0x1004ad14, frees member at +0x1c if member at +0xc is null, then calls
 * teardown FUN_1001ca00.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1001ca00(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1002a2b0(void)
{
    __asm {
        push    -1
        push    0x10048728
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x1004ad14
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     L_aee
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_aee:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001ca00
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
