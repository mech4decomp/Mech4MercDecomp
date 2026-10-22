/*
 * FUN_100039d0 (155 B) - __stdcall, RET 0x10. Object registration/init
 * routine with an SEH frame: validates the 0x30 handle, calls FUN_10013f50,
 * tears down via FUN_10001970.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10013ee0(void);   /* rel32 call */
extern void __cdecl FUN_10013f50(void);   /* rel32 call */
extern void __cdecl FUN_10001970(void);   /* rel32 call */
extern void __cdecl FUN_10014090(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100039d0(void)
{
    __asm {
        push    -1
        push    0x10046cd8
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x28
        push    esi
        push    edi
        lea     ecx, [esp + 0x8]
        call    FUN_10013ee0
        mov     edi, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        mov     dword ptr [esp + 0x38], 0
        jnz     L_3a0d
        mov     esi, 0xc1120405
        jmp     L_3a45
L_3a0d:
        mov     eax, dword ptr [esp + 0x48]
        test    eax, eax
        jnz     L_3a1a
        mov     eax, 0x10055024
L_3a1a:
        mov     ecx, dword ptr [esp + 0x4c]
        push    eax
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_10013f50
        mov     esi, eax
        test    esi, esi
        jl      L_3a45
        lea     eax, [esp + 0x8]
        push    eax
        add     edi, -0xc
        push    edi
        call    FUN_10001970
        mov     esi, eax
L_3a45:
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x38], 0xffffffff
        call    FUN_10014090
        mov     ecx, dword ptr [esp + 0x30]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x34
        ret     0x10
    }
}
