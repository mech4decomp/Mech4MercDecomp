/*
 * FUN_0066abe0 (49 B) — __fastcall teardown: installs vtable 0x796af4,
 * calls a virtual method on the sub-object at this+0x10, conditionally
 * calls another virtual, then two helper calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00415380(void);

__declspec(naked) void FUN_0066abe0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x10]
        lea     esi, [edi + 0x10]
        mov     ecx, esi
        mov     dword ptr [edi], 0x796af4
        call    dword ptr [eax + 0x14]
        test    al, al
        jnz     L_ac00
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
L_ac00:
        mov     ecx, esi
        call    FUN_004169c0
        mov     ecx, edi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
