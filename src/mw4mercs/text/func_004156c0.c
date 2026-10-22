/*
 * FUN_004156c0 (46 B) — __thiscall (RET 8, 2 stack args): calls virtual
 * method (vtable+0x20) with the two args, then FUN_00415720(result) and
 * FUN_00415be0(0, result).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415720(void);
extern void __cdecl FUN_00415be0(void);

__declspec(naked) void FUN_004156c0(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0xc]
        mov     eax, dword ptr [esi]
        push    edi
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     edi, eax
        push    edi
        mov     ecx, esi
        call    FUN_00415720
        push    edi
        push    0
        mov     ecx, esi
        call    FUN_00415be0
        pop     edi
        pop     esi
        ret     8
    }
}
