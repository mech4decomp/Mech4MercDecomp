/*
 * FUN_0041b210 (68 B) — __cdecl. Computes a 4-float difference (a-b) into a
 * stack temp and passes it to FUN_0041c910.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041c910(void);

__declspec(naked) void FUN_0041b210(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x18]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx]
        __emit 0xD9          /* fstp [esp]: MSVC6 drops the 00 disp byte */
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fld     dword ptr [eax+4]
        fsub    dword ptr [ecx+4]
        fstp    dword ptr [esp+4]
        fld     dword ptr [eax+8]
        fsub    dword ptr [ecx+8]
        fstp    dword ptr [esp+8]
        fld     dword ptr [eax+0xc]
        mov     eax, dword ptr [esp+0x1c]
        fsub    dword ptr [ecx+0xc]
        push    eax
        lea     ecx, [esp+4]
        push    ecx
        fstp    dword ptr [esp+0x14]
        call    FUN_0041c910
        add     esp, 0x18
        ret
    }
}
