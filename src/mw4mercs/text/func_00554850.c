/*
 * FUN_00554850 (158 B) — __thiscall, RET 0x4.
 *
 * Checks conditions, calls FUN_0061acf0(0x8000)/FUN_0061ad20,
 * then conditionally calls vtable method and FUN_0054c4d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int FUN_0061acf0(int);
extern int FUN_0061ad20(int);
extern void FUN_0054c4d0(int);

__declspec(naked) void FUN_00554850(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x384]
        mov     eax, dword ptr [ebx + 0x10]
        shr     eax, 0x13
        test    al, 0x01
        jnz     done

        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     done

        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     done

        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      done

        mov     ecx, dword ptr [esi + 0xe0]
        mov     eax, dword ptr [ecx + 0x14]
        cmp     eax, 0x07
        jz      done
        cmp     eax, 0x02
        jnz     done

        mov     edx, dword ptr [esp + 0x0c]
        push    edi
        mov     edi, dword ptr [edx + 0x10]
        test    edi, edi
        jle     pop_edi_jge

        mov     al, byte ptr [ebx + 0x2f8]
        test    al, al
        jnz     test_edi_again

        mov     eax, dword ptr [ecx]
        push    0x00
        push    0x02
        call    dword ptr [eax + 0x04]
        push    0x00
        mov     ecx, esi
        call    FUN_0054c4d0

test_edi_again:
        test    edi, edi

pop_edi_jge:
        pop     edi
        jge     done

        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0x00
        push    0x02
        call    dword ptr [edx + 0x04]
        push    0x1c
        mov     ecx, esi
        call    FUN_0054c4d0

done:
        pop     esi
        pop     ebx
        ret     0x04
    }
}
