/*
 * FUN_00607140 (179 B) — __cdecl, RET.
 *
 * Copies a substring (strncpy via IAT 0x0076B320), then calls
 * FUN_004fcc40 on the resulting buffer. Uses globals 0x007DAB40/44.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void* DAT_0076b320;                  /* IAT: strncpy */
extern int DAT_007dab40;                    /* 0x007DAB40 */
extern int* DAT_007dab44;                   /* 0x007DAB44 */
extern void __cdecl FUN_004fcc40(void);

__declspec(naked) void __cdecl FUN_00607140(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x04]
        mov     ecx, dword ptr [esp + 0x08]
        mov     edx, dword ptr [eax + 0x70]
        sub     esp, 0x64
        cmp     edx, ecx
        jg      l_continue
        xor     eax, eax
        add     esp, 0x64
        ret
    l_continue:
        test    ecx, ecx
        push    esi
        mov     byte ptr [esp + 0x04], 0x0
        jnz     l_else
        mov     esi, dword ptr [eax + 0x0c]
        cmp     esi, 0x63
        jg      l_skip
        mov     eax, dword ptr [eax]
        push    esi
        push    eax
        lea     ecx, [esp + 0x0c]
        push    ecx
        jmp     l_call
    l_else:
        mov     edx, dword ptr [eax + ecx*0x4 + 0x08]
        mov     ecx, dword ptr [eax + ecx*0x4 + 0x0c]
        sub     ecx, edx
        lea     esi, [ecx + -0x1]
        cmp     esi, 0x63
        jg      l_skip
        mov     eax, dword ptr [eax]
        dec     ecx
        push    ecx
        lea     ecx, [eax + edx*0x1 + 0x01]
        push    ecx
        lea     edx, [esp + 0x0c]
        push    edx
    l_call:
        call    dword ptr [DAT_0076b320]
        add     esp, 0x0c
        mov     byte ptr [esp + esi*0x1 + 0x04], 0x0
    l_skip:
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        lea     edi, [esp + 0x08]
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, -0x4
        test    ecx, ecx
        pop     edi
        jle     l_done
    l_copy:
        mov     dl, byte ptr [esp + eax*0x1 + 0x08]
        mov     byte ptr [esp + eax*0x1 + 0x04], dl
        inc     eax
        cmp     eax, ecx
        jl      l_copy
    l_done:
        mov     esi, dword ptr [DAT_007dab40]
        mov     byte ptr [esp + eax*0x1 + 0x04], 0x0
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x04]
        xor     eax, esi
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcc40
        pop     esi
        add     esp, 0x64
        ret
    }
}
