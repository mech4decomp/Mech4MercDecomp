/*
 * FUN_0055b500 (139 B) — __thiscall method on some class.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0041fcb0(void *this);
extern void __fastcall FUN_004c3d50(void *this, int val);
extern void __fastcall FUN_006283b0(void *this, int param_1);
extern void __fastcall FUN_0041fcd0(void *this, int param_1);
extern void __fastcall FUN_00559be0(void *this, int val);
extern char __fastcall FUN_005564b0(void *this);

__declspec(naked) void FUN_0055b500(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebx
        push    esi
        mov     esi, ecx                    ; save this
        lea     ebx, [esi + 0x6a0]          ; sub-object at this+0x6a0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     ecx, [esi + 0x6b0]          ; this+0x6b0
        push    0
        call    FUN_004c3d50
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        mov eax, dword ptr [DAT_007dab40]
        mov     edi, [esp + 0x10]           ; param_1
        xor     ecx, eax
        mov     ecx, [ecx + 0x40]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_006283b0
        test    edi, edi
        jz      skip
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        push    0x1d
        mov     ecx, esi
        call    FUN_00559be0
        mov     ecx, esi
        call    FUN_005564b0
        test    al, al
        jz      zero_val
        mov     edx, [edi + 0xd8]
        mov     ecx, [esi + 0x6b0]
        push    edx
        call    FUN_004c3d50
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    zero_val:
        mov     ecx, [esi + 0x6b0]
        push    0
        call    FUN_004c3d50
    skip:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }


}
