/*
 * FUN_005fc990 (44 B) — __thiscall destructor. Resets vtable, calls a
 * virtual method (slot 2) on the sub-object at +0x28c, then FUN_004169c0
 * and FUN_004d9db0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004d9db0(void);

__declspec(naked) void FUN_005fc990(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x28c]
        push    edi
        lea     edi, [esi+0x28c]
        mov     ecx, edi
        mov     dword ptr [esi], 0x78adf4
        call    dword ptr [eax+0x8]
        mov     ecx, edi
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_004d9db0
        pop     edi
        pop     esi
        ret
    }
}
