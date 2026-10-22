/*
 * FUN_0064C0E0 (102 B) — __stdcall, 2 args (ret 8), ecx=this. Looks up an
 * object, validates its state, and stores a value into an index table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_0064bf90(void);
extern void *__cdecl FUN_0064c950(void);
extern unsigned long g_80d9bc;

__declspec(naked) void FUN_0064C0E0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        push    0
        push    0
        mov     edi, ecx
        push    eax
        call    FUN_0064bf90
        mov     esi, eax
        test    esi, esi
        jne     l_1
        pop     edi
        mov     eax, 1
        pop     esi
        ret     8
    l_1:
        mov     ecx, dword ptr [esi + 0x3c]
        push    ecx
        call    FUN_0064c950
        mov     ecx, dword ptr [g_80d9bc]
        add     esp, 4
        cmp     eax, ecx
        je      l_2
        pop     edi
        mov     eax, 2
        pop     esi
        ret     8
    l_2:
        cmp     dword ptr [esi + 0x1c], 1
        je      l_3
        pop     edi
        mov     eax, 3
        pop     esi
        ret     8
    l_3:
        mov     eax, dword ptr [edi + 0x24]
        mov     edx, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [eax + edx*4], ecx
        xor     eax, eax
        pop     esi
        ret     8
    }
}
