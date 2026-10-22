/*
 * FUN_005031a0 (169 B) — String-to-enum mapper.
 * Compares input string against several constants and returns an ID (0-6).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>
#include <string.h>

/* _stricmp import address table entry (IAT) */
extern int *DAT_0076b2ac;

__declspec(naked) int FUN_005031a0(const char *str)
{
    
__asm {
push    esi
        mov     esi, [esp + 8]          ; str
        push    edi
        mov     edi, dword ptr [DAT_0076b2ac] ; _stricmp IAT

        ; if (_stricmp(str, "string1") == 0) return 0;
        push    0x776724
        push    esi
        call    edi                     ; _stricmp
        add     esp, 8
        test    eax, eax
        jne     check_2
        pop     edi
        pop     esi
        ret

check_2:
        ; if (_stricmp(str, "string2") == 0) return 1;
        push    0x776714
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     check_3
        pop     edi
        mov     eax, 1
        pop     esi
        ret

check_3:
        ; if (_stricmp(str, "string3") == 0) return 2;
        push    0x776704
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     check_4
        pop     edi
        mov     eax, 2
        pop     esi
        ret

check_4:
        ; if (_stricmp(str, "string4") == 0) return 3;
        push    0x7766f4
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     check_5
        pop     edi
        mov     eax, 3
        pop     esi
        ret

check_5:
        ; if (_stricmp(str, "string5") == 0) return 4;
        push    0x7766e8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     check_6
        pop     edi
        mov     eax, 4
        pop     esi
        ret

check_6:
        ; if (_stricmp(str, "string6") == 0) return 5;
        push    0x7766dc
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     default_case
        pop     edi
        mov     eax, 5
        pop     esi
        ret

default_case:
        ; return 6;
        push    0x7766d0
        push    esi
        call    edi
        add     esp, 8
        neg     eax
        sbb     eax, eax
        and     eax, 0xfffffff9
        pop     edi
        add     eax, 6
        pop     esi
        ret
    }


}
