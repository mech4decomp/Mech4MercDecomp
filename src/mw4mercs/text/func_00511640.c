/*
 * FUN_00511640 (157 B) — Game mode initialization (__fastcall).
 *
 * Checks debug flags, initializes display mode, loads shell script.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_006fab90(const char *, ...);
extern void FUN_00709c30(void);
extern void FUN_005185b0(void);
extern int __cdecl FUN_00709f20(int, int, int, int, int, int, int, int, int, int, int, int);
extern void FUN_006bbc00(void);

__declspec(naked) void __fastcall FUN_00511640(void *this)
{
    

extern int DAT_007ddd1f;
extern int DAT_007ddd1e;
extern int DAT_00858957;
extern int DAT_00858956;
extern int DAT_00858955;
extern int DAT_0085894c;
extern int DAT_00858948;
extern int DAT_00858a38;
__asm {
        mov al, byte ptr [DAT_007ddd1f]
        test    al, al
        push    esi
        mov     esi, ecx
        jz      l_check_flag2
        push    0x007797a8
        call    FUN_006fab90
        add     esp, 0x04
        test    eax, eax
        jz      l_check_flag2
        int     3

    l_check_flag2:
        mov al, byte ptr [DAT_007ddd1e]
        test    al, al
        jz      l_init
        call    FUN_00709c30
        pop     esi
        ret

    l_init:
        mov     ecx, esi
        call    FUN_005185b0
        push    0x00
        push    0x00
        push    0x00
        push    0x00
        xor     eax, eax
        mov al, byte ptr [DAT_00858957]
        xor     ecx, ecx
        mov cl, byte ptr [DAT_00858956]
        push    0x00
        xor     edx, edx
        mov dl, byte ptr [DAT_00858955]
        push    eax
        mov eax, dword ptr [DAT_0085894c]
        push    ecx
        mov ecx, dword ptr [DAT_00858948]
        push    edx
        push    eax
        push    ecx
        push    0x258
        push    0x320
        call    FUN_00709f20
        push    0x00
        push    0x1000
        push    0x00779780
        call    FUN_006bbc00
        mov     dword ptr [esi + 0x1c], 0x02
        mov     byte ptr [esi + 0x28], 0x00
        mov dword ptr [DAT_00858a38], 0x535260
        pop     esi
        ret
    }


}
