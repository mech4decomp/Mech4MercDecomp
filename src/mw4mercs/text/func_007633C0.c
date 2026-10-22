/*
 * FUN_007633C0 (97 B) — __stdcall, 1 arg (ret via ebp frame). Linear search
 * over a 0x8bd300..0x8bd490 table for a matching dword; returns the entry
 * or NULL. Contains anti-disassembly junk (salc + jmp-0 chain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern char g_8bd300[];
extern char g_8bd490[];

__declspec(naked) void FUN_007633C0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 8]
        mov     ecx, offset g_8bd300
    l_loop:
        mov     eax, dword ptr [ecx]
        jmp     l_skip
        __emit 0xD6          /* salc (D6) - MSVC6 has no salc mnemonic */
        __emit 0xD6          /* salc (D6) */
        cmp     al, 0
    l_skip:
        jmp     l_1
    l_1:    jmp     l_2
    l_2:    jmp     l_3
    l_3:    jmp     l_4
    l_4:    jmp     l_5
    l_5:    jmp     l_6
    l_6:    jmp     l_7
    l_7:    jmp     l_8
    l_8:    jmp     l_9
    l_9:    jmp     l_10
    l_10:   jmp     l_11
    l_11:   jmp     l_12
    l_12:   jmp     l_13
    l_13:   jmp     l_14
    l_14:   jmp     l_15
    l_15:   jmp     l_16
    l_16:   jmp     l_17
    l_17:   jmp     l_18
    l_18:   jmp     l_19
    l_19:   jmp     l_20
    l_20:   jmp     l_21
    l_21:   jmp     l_22
    l_22:   jmp     l_23
    l_23:   jmp     l_24
    l_24:   jmp     l_25
    l_25:   jmp     l_26
    l_26:   jmp     l_27
    l_27:
        test    eax, eax
        je      l_continue
        cmp     dword ptr [eax + 4], edx
        je      l_done
    l_continue:
        add     ecx, 4
        cmp     ecx, offset g_8bd490
        jb      l_loop
        xor     eax, eax
    l_done:
        pop     ebp
        ret
    }
}
