/*
 * FUN_0051B860 (75 B) — __stdcall, 3 args (ret 0xc). Looks up a global object
 * via the 0x7dab44/0x7dab40 XOR-keyed pointer, and if a sub-object exists,
 * calls FUN_006194b0 with the first arg's dword.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006194b0(void);

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void FUN_0051B860(void)
{
    __asm {
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     eax, eax
        xor     edx, 0x85739531
        je      l_51b8a8
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      l_51b8a8
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 0x44]
        push    1
        push    1
        push    edx
        xor     ecx, 0x85739531
        call    FUN_006194b0
    l_51b8a8:
        ret     0xc
    }
}
