/*
 * FUN_005f8d70 (68 B) -- __thiscall (ECX = this), plain RET.
 * Walks a linked list at this+0xBC; for each entry whose key passes
 * FUN_00415230, registers it via FUN_005f8dc0 and FUN_004179b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007f26a4;
extern char __stdcall FUN_00415230(int param);
extern void __fastcall FUN_005f8dc0(void *this, void *param);
extern void __fastcall FUN_004179b0(void *this, void *param);

__declspec(naked) void __fastcall FUN_005f8d70(void)
{
    __asm {
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        mov     edi, dword ptr [ebx + 0xbc]
    l_loop:
        test    edi, edi
        jz      l_ret
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        jz      l_ret
        mov     eax, dword ptr [DAT_007f26a4]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_loop
        push    esi
        mov     ecx, ebx
        call    FUN_005f8dc0
        push    esi
        lea     ecx, [ebx + 0x35c]
        call    FUN_004179b0
        jmp     l_loop
    l_ret:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
