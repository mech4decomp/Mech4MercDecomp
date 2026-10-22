/*
 * FUN_10034b00 (61 B) -- __stdcall, RET 0x8.
 * Virtual-call vtable[0x16](obj, ptr, &local, 0); if result >= 0, call
 * FUN_100333f0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100333f0(void);

__declspec(naked) void __stdcall FUN_10034b00(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [eax + 0x14]
        mov     eax, dword ptr [eax + 0x10]
        push    esi
        push    0
        lea     esi, [esp + 0x8]
        push    esi
        mov     dword ptr [esp + 0xc], 0
        mov     eax, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x58]
        test    eax, eax
        pop     esi
        jl      L_out
        mov     eax, dword ptr [esp + 0xc]
        __emit 0x8B  /* mov ecx,[esp+0]: MSVC6 drops the 00 disp byte (8B 0C 24) */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        push    eax
        push    ecx
        call    FUN_100333f0
L_out:
        pop     ecx
        ret     0x8
    }
}
