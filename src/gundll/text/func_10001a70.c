/*
 * FUN_10001a70 (157 B) - __stdcall, RET 0x4. SEH-framed allocator; on success
 * stores into param_1+0x38, on failure returns 0x8007000e.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d50(void);   /* rel32 call */
extern void __cdecl FUN_10008070(void);   /* rel32 call */
extern void __cdecl FUN_10008090(void);   /* rel32 call */
extern void __cdecl FUN_10008080(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10001a70(void)
{
    __asm {
        push    -1
        push    0x10046afb
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        push    edi
        push    3
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 8], eax
        test    eax, eax
        mov     dword ptr [esp + 0x14], 0
        jz      L_aad
        mov     ecx, eax
        call    FUN_10008070
        mov     esi, eax
        jmp     L_aaf
L_aad:
        xor     esi, esi
L_aaf:
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0xffffffff
        jnz     L_ad3
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
L_ad3:
        push    esi
        call    FUN_10008090
        mov     edi, eax
        test    edi, edi
        jl      L_ae8
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 0x38], esi
        jmp     L_af8
L_ae8:
        mov     ecx, esi
        call    FUN_10008080
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_af8:
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, edi
        pop     edi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret     4
    }
}
