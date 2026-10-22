/*
 * FUN_00504BB0 (289 B) — Input component lookup by name (variant)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_00504BB0(void)
{
    /* extern data/function symbols */
    extern void __cdecl FUN_00411a80(void);
    extern void __cdecl FUN_00417a40(void);
    extern void __cdecl FUN_006fab90(void);
    extern void __cdecl FUN_00504ce0(void);
    extern void __cdecl FUN_00415230(void);
    extern void __cdecl FUN_00417980(void);
    extern void __cdecl FUN_004084e0(void);
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1C
        push    ebx
        mov     ebx, [ebp+8]
        mov     eax, [ebx+0xC]
        push    esi
        mov     esi, [ebx]
        push    edi
        mov     edi, [ebx+8]
        push    0x776CF4
        mov     ecx, edi
        mov     [ebp-0xC], esi
        mov     [ebp-8], eax
        call    FUN_00411a80
        mov     ecx, [eax]
        mov     [ebp-0x14], ecx
        mov     ecx, eax
        mov     [ebp-0x10], eax
        call    FUN_00417a40
        test    eax, eax
        mov     [ebp+8], eax
        jne     has_inputs
        mov     edx, [edi+0x14]
        mov     eax, [edi+0x10]
        mov     ecx, [eax]
        push    edx
        push    ecx
        push    0x776CD0
        call    FUN_006fab90
        add     esp, 0xC
        test    eax, eax
        je      has_inputs
        int     3

has_inputs:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp+8]
        push    eax
        mov     ecx, esi
call_site:
        call    dword ptr [edx+0x24]
loop_start:
        mov     ecx, [ebp-0x14]
        test    ecx, ecx
        je      cleanup
        mov     eax, [ecx]
        test    eax, eax
        mov     ecx, [ecx+4]
        mov     [ebp-0x14], ecx
        je      cleanup
        mov     esi, [eax+0x18]
        mov     edx, [ebx+4]
        mov     eax, [ebp-8]
        push    esi
        push    edx
        push    eax
        call    FUN_00504ce0
        add     esp, 0xC
        cmp     eax, -1
        mov     [ebp-4], eax
        jne     found_name
        mov     ecx, [edi+0x14]
        mov     edx, [edi+0x10]
        mov     eax, [edx]
        push    esi
        push    ecx
        push    eax
        push    0x776CA4
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      loop_start
        int     3
        jmp     loop_start

found_name:
        mov     ecx, [ebp-8]
        mov     edx, [ecx]
        mov     ecx, [ebp+0xC]
        mov     eax, [edx+eax*8]
        push    ecx
        mov     ecx, eax
        call    FUN_00415230
        test    al, al
        jne     found_input
        mov     edx, [edi+0x14]
        mov     eax, [edi+0x10]
        mov     ecx, [eax]
        push    esi
        push    edx
        push    ecx
        push    0x776C6C
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      loop_start
        int     3
        jmp     loop_start

found_input:
        mov     ecx, [ebp-0xC]
        mov     edx, [ecx]
        push    4
        lea     eax, [ebp-4]
        push    eax
        jmp     call_site

cleanup:
        mov     esi, [ebp-0x10]
        test    esi, esi
        je      done_cleanup
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 4

done_cleanup:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
