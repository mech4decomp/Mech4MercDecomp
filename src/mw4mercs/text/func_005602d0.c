/*
 * FUN_005602d0 (155 B) — __thiscall switch on param (0-4), loads two
 * globals, sums them, stores at [this+0x114]. Default case asserts.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_006fab90(const char *msg);
extern int DAT_007dddb0;
extern int DAT_007dddac;
extern int DAT_007ddda8;
extern int DAT_007ddda4;
extern int DAT_007ddda0;
extern int DAT_007ddd9c;
extern int DAT_007ddd98;
extern int DAT_007ddd94;
extern int DAT_007ddd90;
extern int DAT_007ddd8c;

__declspec(naked) void FUN_005602d0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        mov     eax, [ebp + 8]
        cmp     eax, 4
        ja      default_case
        jmp     dword ptr [eax*4 + 0x0056036c]
    case_0:
        mov     eax, dword ptr [DAT_007dddb0]
        mov     edx, dword ptr [DAT_007dddac]
        add     edx, eax
        mov     [ecx + 0x114], edx
        pop     ebp
        ret     4
    case_1:
        mov     eax, dword ptr [DAT_007ddda8]
        mov     edx, dword ptr [DAT_007ddda4]
        add     edx, eax
        mov     [ecx + 0x114], edx
        pop     ebp
        ret     4
    case_2:
        mov     eax, dword ptr [DAT_007ddda0]
        mov     edx, dword ptr [DAT_007ddd9c]
        add     edx, eax
        mov     [ecx + 0x114], edx
        pop     ebp
        ret     4
    case_3:
        mov     eax, dword ptr [DAT_007ddd98]
        mov     edx, dword ptr [DAT_007ddd94]
        add     edx, eax
        mov     [ecx + 0x114], edx
        pop     ebp
        ret     4
    case_4:
        mov     eax, dword ptr [DAT_007ddd90]
        mov     edx, dword ptr [DAT_007ddd8c]
        add     edx, eax
        mov     [ecx + 0x114], edx
        pop     ebp
        ret     4
    default_case:
        push    0x0077deec
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      done
        int     3
    done:
        pop     ebp
        ret     4
    }


}
