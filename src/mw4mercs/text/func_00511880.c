/*
 * FUN_00511880 (153 B) — Game mode initialization 2 (__fastcall).
 *
 * Checks debug flag, initializes display mode, sets up rendering.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00709c30(void);
extern int __cdecl FUN_00709f20(int, int, int, int, int, int, int, int, int, int, int, int);
extern void FUN_00536840(void);
extern void FUN_00404d60(void);

__declspec(naked) void __fastcall FUN_00511880(void *this)
{
    

extern int DAT_007ddd1e;
extern int DAT_00858957;
extern int DAT_00858956;
extern int DAT_00858955;
extern int DAT_0085894c;
extern int DAT_00858948;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00858a38;
extern int DAT_007ddd22;
__asm {
        mov al, byte ptr [DAT_007ddd1e]
        test    al, al
        push    esi
        mov     esi, ecx
        jz      l_init
        call    FUN_00709c30
        pop     esi
        ret

    l_init:
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
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x0c]
        push    0x01
        xor     ecx, 0x85739531
        mov     dword ptr [esi + 0x1c], 0x08
        mov dword ptr [DAT_00858a38], 0x535260
        mov     byte ptr [esi + 0x28], 0x00
        call    FUN_00536840
        xor     ecx, ecx
        mov cl, byte ptr [DAT_007ddd22]
        push    ecx
        push    0x00
        call    FUN_00404d60
        pop     esi
        ret
    }


}
