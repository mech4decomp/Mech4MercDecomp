/*
 * FUN_10003a70 (166 B) - __stdcall, RET 0x10. Object registration/init
 * routine with an SEH frame: validates the 0x30 handle, calls FUN_10014220,
 * tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100141b0(void);   /* rel32 call */
extern void __cdecl FUN_10014220(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10014390(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10003a70(void)
{
    __asm {
        push    -1
        push    0x10046cf8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x28
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_100141b0
        mov     edi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x38], 0
        jnz     L_3aad
        mov     esi, 0xc1120405
        jmp     L_3af0
L_3aad:
        mov     ecx, dword ptr [esp + 0x44]
        test    ecx, ecx
        jnz     L_3abc
        mov     esi, 0x80070057
        jmp     L_3af0
L_3abc:
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jnz     L_3ac9
        mov     eax, 0x10055024
L_3ac9:
        push    eax
        mov     eax, dword ptr [esp + 0x50]
        push    ecx
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_10014220
        mov     esi, eax
        test    esi, esi
        jl      L_3af0
        lea     edx, [esp + 0x8]
        push    edx
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_3af0:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x38], 0xffffffff
        call    FUN_10014390
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x34
        ret     0x10
    }
}
