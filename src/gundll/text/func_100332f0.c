/*
 * FUN_100332f0 (93 B) - __stdcall, RET 0x8. Calls FUN_10038319 with a format
 * string and 4 local buffers, then copies the 4 resulting bytes into param_2.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038319(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100332f0(void)
{
    __asm {
        sub     esp, 0x10
        xor     eax, eax
        __emit 0x89   /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (89 04 24 vs ref 89 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 4], eax
        mov     dword ptr [esp + 8], eax
        mov     dword ptr [esp + 0xc], eax
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        push    0x10051568
        push    ecx
        call    FUN_10038319
        mov     eax, dword ptr [esp + 0x30]
        mov     dl, byte ptr [esp + 0x18]
        mov     cl, byte ptr [esp + 0x1c]
        mov     byte ptr [eax], dl
        mov     dl, byte ptr [esp + 0x20]
        mov     byte ptr [eax + 1], cl
        mov     cl, byte ptr [esp + 0x24]
        mov     byte ptr [eax + 2], dl
        mov     byte ptr [eax + 3], cl
        add     esp, 0x28
        ret     8
    }
}
