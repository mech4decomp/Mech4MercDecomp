/*
 * FUN_100066e0 (52 B) - __cdecl. Stores 4 params into a struct at
 * param_1 and calls vswprintf on an inline buffer at param_1+0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100066e0 (52 B, __cdecl, 6 params) - Stores 4 params into a struct at
 * CFLAGS: /O2
 */

extern void *g_10021120; /* IAT: vswprintf */

__declspec(naked) void __cdecl FUN_100066e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 0xc]
        lea     ecx, [eax + 0x14]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 8], ecx
        lea     eax, [esp + 0x18]
        push    eax
        push    edx
        push    ecx
        call    dword ptr [g_10021120]
        add     esp, 0xc
        ret
    }
}
