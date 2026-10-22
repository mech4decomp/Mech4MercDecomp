/*
 * FUN_006ac890 (192 B) — Iterates a linked list at [param1+0x34c], calls
 * FUN_0041ec50 for each entry, then updates two global counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041ec50(void *ptr, int size);
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void FUN_006ac890(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [edi + 0x14]
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, dword ptr [edi + 0x8]
        sub     ebx, esi
        shl     ebx, 3
        cmp     eax, -0x14
        jz      L_ae
        lea     ebx, [ebx + eax - 8]
L_ae:
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, dword ptr [eax + 0x34c]
        test    esi, esi
        jz      L_f1
L_b8:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 0x4]
        jz      L_f1
        mov     ecx, dword ptr [eax + 0xe0]
        mov     dword ptr [esp + 0x14], 0x1
        cmp     dword ptr [ecx + 0x14], 0x5
        jnz     L_e1
        mov     dword ptr [esp + 0x14], 0x0
L_e1:
        push    0x1
        lea     edx, [esp + 0x18]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        __emit 0xEB        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xC7
L_f1:
        mov     eax, dword ptr [edi + 0x14]
        mov     esi, dword ptr [edi + 0x10]
        mov     edi, dword ptr [edi + 0x8]
        sub     eax, esi
        shl     eax, 3
        cmp     edi, -0x14
        jz      L_908
        lea     eax, [eax + edi - 8]
L_908:
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [edx + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [ecx + edx*4 + 0x848c]
        add     ecx, 0x8484
        sub     eax, ebx
        add     esi, eax
        mov     dword ptr [ecx + edx*4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        pop     edi
        add     edx, eax
        pop     esi
        mov     dword ptr [ecx + 0xc00], edx
        pop     ebx
        ret
    }
}
