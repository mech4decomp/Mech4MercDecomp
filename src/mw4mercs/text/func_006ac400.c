/*
 * FUN_006ac400 (193 B) — Computes a delta, calls FUN_0067f7b0/FUN_0041eb40
 * twice, then updates two global counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_0067f7b0(int, int, int);
extern void __cdecl FUN_0041eb40(void);
extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) void FUN_006ac400(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        mov     edi, dword ptr [esi + 0x14]
        sub     edi, eax
        mov     eax, dword ptr [esi + 0x8]
        shl     edi, 3
        cmp     eax, -0x14
        jz      L_41d
        lea     edi, [edi + eax - 8]
L_41d:
        push    0x1
        push    0x0
        push    0x9
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_0041eb40
        push    0x1
        push    0x1
        push    0x9
        call    FUN_0067f7b0
        add     esp, 0xc
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_0041eb40
        mov     eax, dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esi + 0x8]
        sub     eax, ecx
        shl     eax, 3
        cmp     esi, -0x14
        jz      L_47a
        lea     eax, [eax + esi - 8]
L_47a:
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [edx]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1814]
        mov     edx, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [ecx + edx*4 + 0x848c]
        add     ecx, 0x8484
        sub     eax, edi
        add     esi, eax
        mov     dword ptr [ecx + edx*4 + 0x8], esi
        mov     edx, dword ptr [ecx + 0xc00]
        add     edx, eax
        pop     edi
        mov     dword ptr [ecx + 0xc00], edx
        pop     esi
        ret
    }
}
