/*
 * FUN_004A29D0 (171 B) — __thiscall MLR object constructor. Calls
 *   FUN_004a3b10, fills a 4x4 float block at this+0x128 with -1.0f,
 *   sets vtable 0x7702e0, allocates a 0xa4-byte sub-object via
 *   FUN_004084d0/FUN_00482b50, and calls FUN_00482bd0. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004a3b10(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00482b50(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00482bd0(void);

extern int g_007b9598;

__declspec(naked) void __fastcall FUN_004a29d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_004a3b10
        lea     eax, [esi + 0x128]
        mov     ecx, 0x4
        mov     edx, 0xbf800000
L_29fc:
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0xc], edx
        add     eax, 0x10
        dec     ecx
        jnz     L_29fc
        mov     eax, dword ptr [g_007b9598]
        lea     ebx, [esi + 0x188]
        push    eax
        lea     ebp, [esi + 0x168]
        mov     dword ptr [ebx], 0x1
        mov     dword ptr [esi], 0x7702e0
        call    FUN_006f4950
        push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_2a4e
        push    0x1
        mov     ecx, eax
        call    FUN_00482b50
        mov     edi, eax
        jmp     L_2a50
L_2a4e:
        xor     edi, edi
L_2a50:
        mov     dword ptr [esi + 0xf4], edi
        call    FUN_006f49a0
        push    ebp
        lea     eax, [esi + 0x128]
        push    eax
        lea     eax, [esi + 0xf8]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00482bd0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
