/*
 * FUN_0060d020 (181 B) — __fastcall, RET 8.
 *
 * Initializes a matrix/transform (copies 0x7B9460 data, calls
 * FUN_0041a070), then invokes virtual methods on an object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_007704c0;                  /* 0x007704C0 */
extern float DAT_0078bf68;                  /* 0x0078BF68 */
extern int DAT_007b9460;                    /* 0x007B9460 - data block */
extern void __cdecl FUN_0041a070(void);

__declspec(naked) void __fastcall FUN_0060d020(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x04]
        sub     esp, 0x3c
        test    eax, eax
        mov     dword ptr [ecx + 0x2c], 0x1
        jz      l_ret1
        fld     dword ptr [DAT_007704c0]
        push    ebx
        fsub    dword ptr [DAT_0078bf68]
        mov     ebx, dword ptr [eax + 0xd8]
        push    esi
        push    edi
        fstp    dword ptr [esp + 0x0c]
        fld     dword ptr [DAT_0078bf68]
        mov     ecx, 0xc
        mov     esi, offset DAT_007b9460
        lea     edi, [esp + 0x18]
        lea     eax, [esp + 0x0c]
        rep     movsd
        push    eax
        lea     ecx, [esp + 0x1c]
        fstp    dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_0041a070
        mov     dword ptr [esp + 0x24], 0x40b00000
        mov     dword ptr [esp + 0x34], 0x40c00000
        mov     dword ptr [esp + 0x44], 0x41b80000
        mov     ecx, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [ebx]
        and     ecx, 0xfffffffe
        or      ecx, 0x4
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x10]
        lea     edi, [ebx + 0x20]
        mov     ecx, 0xc
        lea     esi, [esp + 0x18]
        rep     movsd
        mov     ecx, ebx
        call    dword ptr [ebx + 0x1c]
        pop     edi
        pop     esi
        mov     eax, 0x1
        pop     ebx
        add     esp, 0x3c
        ret     0x8
    l_ret1:
        mov     eax, 0x1
        add     esp, 0x3c
        ret     0x8
    }
}
