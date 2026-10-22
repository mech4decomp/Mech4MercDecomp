/*
 * FUN_00417470 (78 B) - __fastcall "Stuff::SafeChainLink" destructor.
 * Unlinks from the chain, calls FUN_00415be0/FUN_00415d00/FUN_00415cd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415be0(void);
extern void __cdecl FUN_00415d00(void);
extern void __cdecl FUN_00415cd0(void);

__declspec(naked) void FUN_00417470(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x4]
        push    esi
        push    0x1
        mov     ecx, edi
        mov     dword ptr [esi], 0x76d568
        call    FUN_00415be0
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x10]
        xor     edx, edx
        cmp     ecx, edx
        jz      L_a
        mov     dword ptr [ecx + 0x10], eax
        jmp     L_b
    L_a:
        mov     dword ptr [edi + 0x8], eax
    L_b:
        cmp     eax, edx
        jz      L_c
        mov     dword ptr [eax + 0x14], ecx
        jmp     L_d
    L_c:
        mov     dword ptr [edi + 0xc], ecx
    L_d:
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [esi + 0x14], edx
        call    FUN_00415d00
        mov     ecx, esi
        call    FUN_00415cd0
        pop     edi
        pop     esi
        ret
    }
}
