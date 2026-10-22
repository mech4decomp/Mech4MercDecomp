/*
 * FUN_10005d80 (43 B) - __thiscall. Calls FUN_10006150, then FUN_10003170
 * with a fixed vtable pointer, storing the result through this+4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006150(void);
extern void __cdecl FUN_10003170(void);

__declspec(naked) void __cdecl FUN_10005d80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_10006150
        mov     ecx, dword ptr [esi]
        mov     edi, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, 0x10027530
        mov     dword ptr [esi + 0x4], edi
        call    FUN_10003170
        mov     dword ptr [edi], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
