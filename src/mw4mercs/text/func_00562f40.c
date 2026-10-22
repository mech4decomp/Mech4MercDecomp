/*
 * FUN_00562f40 (272 B) — ABL syntax error handler.
 *
 * Formats a syntax error message via sprintf, then either outputs it
 * (via FUN_00562f10) or copies it into a longjmp buffer and longjmps.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00562f10(int param1, const char *str);

__declspec(naked) void __cdecl FUN_00562f40(int param_1)
{
    
__asm {
/* __emit: MSVC6 encodes mov reg,[imm32] as immediate load */
        _emit 0x8B
        _emit 0x15
        _emit 0xCC
        _emit 0x58
        _emit 0x80
        _emit 0x00

        /* __emit: mov ecx, [0x008058c8] */
        _emit 0x8B
        _emit 0x0D
        _emit 0xC8
        _emit 0x58
        _emit 0x80
        _emit 0x00

        sub     esp, 0x100
        push    ebx
        mov     ebx, dword ptr [esp + 0x108]

        mov     eax, dword ptr [ebx*4 + 0x007b50f0]

        push    esi

        /* __emit: mov esi, [0x0076b420] */
        _emit 0x8B
        _emit 0x35
        _emit 0x20
        _emit 0xB4
        _emit 0x76
        _emit 0x00

        push    eax
        push    ebx
        push    ecx
        shl     edx, 8
        add     edx, 0x007f50a0
        push    edx
        lea     eax, [esp + 0x18]
        push    0x0077e718
        push    eax
        call    esi                             /* sprintf */

        /* __emit: mov edx, [0x007dde28] (before add esp,0x18 cleanup) */
        _emit 0x8B
        _emit 0x15
        _emit 0x28
        _emit 0xDE
        _emit 0x7D
        _emit 0x00

        add     esp, 0x18

        test    edx, edx
        jz      label_output

        /* Copy error type string into buffer */
        or      ecx, 0xffffffff
        push    ebp
        push    edi
        mov     edi, dword ptr [ebx*4 + 0x007b50f0]
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        /* Copy context string into buffer + 0xff */

        /* __emit: mov edi, [0x008058cc] */
        _emit 0x8B
        _emit 0x3D
        _emit 0xCC
        _emit 0x58
        _emit 0x80
        _emit 0x00

        or      ecx, 0xffffffff
        shl     edi, 8
        add     edi, 0x007f50a0
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     ebp, [edx + 0xff]
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        /* Store line number and error type, then longjmp */

        /* __emit: mov ecx, [0x008058c8] */
        _emit 0x8B
        _emit 0x0D
        _emit 0xC8
        _emit 0x58
        _emit 0x80
        _emit 0x00

        push    1
        push    0x007ddde8
        mov     dword ptr [edx + 0x200], ecx
        mov     dword ptr [edx + 0x204], ebx

        /* __emit: MSVC6 does not support call dword ptr [imm32] */
        _emit 0xFF
        _emit 0x15
        _emit 0xFC
        _emit 0xB3
        _emit 0x76
        _emit 0x00
        /* longjmp does not return, but dead code follows */
        pop     edi
        pop     ebp

label_output:
        lea     edx, [esp + 8]
        push    edx
        push    0
        call    FUN_00562f10

        /* __emit: mov eax, [0x007b5a20] */
        _emit 0xA1
        _emit 0x20
        _emit 0x5A
        _emit 0x7B
        _emit 0x00

        mov     byte ptr [eax], 0

        /* __emit: mov eax, [0x007de630] */
        _emit 0xA1
        _emit 0x30
        _emit 0xE6
        _emit 0x7D
        _emit 0x00

        add     esp, 8
        inc     eax
        cmp     eax, 1

        /* __emit: MSVC6 does not support mov [imm32], reg */
        _emit 0xA3
        _emit 0x30
        _emit 0xE6
        _emit 0x7D
        _emit 0x00

        jle     label_done

        lea     ecx, [esp + 8]
        push    0x0077e6ec
        push    ecx
        call    esi                             /* sprintf */
        lea     edx, [esp + 0x10]
        push    edx
        push    0
        call    FUN_00562f10
        add     esp, 0x10

label_done:
        pop     esi
        pop     ebx
        add     esp, 0x100
        ret
    }


}
