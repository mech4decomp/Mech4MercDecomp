/*
 * FUN_005fff60 (63 B) — __thiscall: uses a sub-object at this+0x2a4,
 * calls FUN_00416b60, optionally FUN_00415ca0 + a virtual method, then
 * FUN_00416a90. Returns 8 bytes of args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00416a90(void);

__declspec(naked) void FUN_005fff60(void)
{
    __asm {
        push    esi
        push    edi
        lea     edi, [ecx+0x2a4]
        lea     eax, [esp+0x10]
        push    eax
        mov     ecx, edi
        call    FUN_00416b60
        mov     esi, eax
        test    esi, esi
        jz      skip
        push    esi
        mov     ecx, edi
        call    FUN_00415ca0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x18]
    skip:
        mov     ecx, dword ptr [esp+0xc]
        lea     eax, [esp+0x10]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_00416a90
        pop     edi
        pop     esi
        ret     8
    }
}
