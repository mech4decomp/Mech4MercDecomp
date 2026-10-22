/*
 * FUN_10005d50 (39 B) - __thiscall. Calls FUN_10006190 then FUN_10003d90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006190(void);
extern void __cdecl FUN_10003d90(void);

__declspec(naked) void __cdecl FUN_10005d50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [esi + 0x454]
        push    eax
        lea     ecx, [edi + 0xb0]
        call    FUN_10006190
        push    edi
        mov     ecx, esi
        call    FUN_10003d90
        pop     edi
        pop     esi
        ret     0x4
    }
}
