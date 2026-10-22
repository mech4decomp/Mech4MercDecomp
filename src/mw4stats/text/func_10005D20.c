/*
 * FUN_10005d20 (36 B) - __thiscall. Calls FUN_10006190 then FUN_10003c00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006190(void);
extern void __cdecl FUN_10003c00(void);

__declspec(naked) void __cdecl FUN_10005d20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        lea     eax, [esi + 0x454]
        push    eax
        lea     ecx, [edi + 4]
        call    FUN_10006190
        push    edi
        mov     ecx, esi
        call    FUN_10003c00
        pop     edi
        pop     esi
        ret     0x4
    }
}
