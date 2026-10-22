/*
 * FUN_10001aab (45 B) — read the PE optional-header subsystem field of
 * the current module image into the 2-byte value at param_1.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10001aab (45 B) -- __cdecl.
 */

extern void *(__stdcall *g_GetModuleHandleA)(void *);   /* IAT 0x1000505c */

__declspec(naked) void __cdecl FUN_10001aab(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    0
        and     dword ptr [esi], 0
        call    dword ptr [g_GetModuleHandleA]
        cmp     word ptr [eax], 0x5a4d
        jnz     L_1ad6
        mov     ecx, dword ptr [eax + 0x3c]
        test    ecx, ecx
        jz      L_1ad6
        add     eax, ecx
        mov     cl, byte ptr [eax + 0x1a]
        mov     byte ptr [esi], cl
        mov     al, byte ptr [eax + 0x1b]
        mov     byte ptr [esi + 1], al
L_1ad6:
        pop     esi
        ret
    }
}
