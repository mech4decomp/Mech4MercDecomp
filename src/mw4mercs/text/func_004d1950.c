/*
 * FUN_004d1950 (103 B) — MLR network subsystem: renderer-type dispatcher
 * (param_4==1 -> FUN_004dc790, ==2 -> FUN_004dcd90, else assert).
 * __thiscall (this=ECX), RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004dcd90(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_004dc790(void);

__declspec(naked) void FUN_004d1950(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        mov     esi, ecx
        push    edi
        call    FUN_004cfbd0
        mov     eax, dword ptr [ebp + 0x14]
        dec     eax
        jz      L_4d19a6
        dec     eax
        jz      L_4d1988
        push    0x772558
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4d19b7
        int     3
        mov     ecx, esi
        call    FUN_004cfc90
        pop     edi
        pop     esi
        pop     ebp
        ret     0x10
L_4d1988:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    edi
        push    eax
        push    ecx
        call    FUN_004dcd90
        add     esp, 0xc
        mov     ecx, esi
        call    FUN_004cfc90
        pop     edi
        pop     esi
        pop     ebp
        ret     0x10
L_4d19a6:
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        push    edi
        push    edx
        push    eax
        call    FUN_004dc790
        add     esp, 0xc
L_4d19b7:
        mov     ecx, esi
        call    FUN_004cfc90
        pop     edi
        pop     esi
        pop     ebp
        ret     0x10
    }
}
