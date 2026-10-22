/*
 * FUN_0050df00 (285 B) — Match/Miss command handler.
 *
 * Reads "MatchValue", "MatchCommand", "MissCommand" config entries,
 * dispatches commands via a virtual function, and returns a result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_0050e020(void);
extern void FUN_00411cb0(void);
extern void FUN_00411bf0(void);
extern int __cdecl FUN_006fab90(const char *, ...);

__declspec(naked) int FUN_0050df00(void)
{
    

extern int DAT_007dc13c;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x0c
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x08]
        mov     esi, dword ptr [edi]
        mov     eax, dword ptr [esi]
        push    0x40
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_0050e020
        mov     edi, dword ptr [edi + 0x08]
        add     esp, 0x04
        push    0x01
        lea     ecx, [ebp - 0x0c]
        push    ecx
        test    eax, eax
        push    0x00777ef0
        mov     ecx, edi
        setnz   bl
        call    FUN_00411cb0
        mov     edx, dword ptr [esi]
        push    0x04
        lea     eax, [ebp - 0x0c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0x00
        lea     ecx, [ebp - 0x04]
        push    ecx
        push    0x00777ee0
        mov     ecx, edi
        mov     dword ptr [ebp - 0x08], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        jz      l_skip_match
        mov     edx, dword ptr [ebp - 0x04]
        mov     eax, dword ptr [ebp + 0x08]
        push    edx
        call    dword ptr [eax + 0x10]
        add     esp, 0x04
        cmp     eax, -0x01
        mov     dword ptr [ebp - 0x08], eax
        jnz     l_skip_match
        mov     ecx, dword ptr [ebp - 0x04]
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [edi + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    0x00777eb4
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      l_match_fail
        int     3
    l_match_fail:
        xor     bl, bl

    l_skip_match:
        mov     edx, dword ptr [esi]
        push    0x04
        lea     eax, [ebp - 0x08]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    0x00
        lea     ecx, [ebp - 0x04]
        push    ecx
        push    0x00777ea8
        mov     ecx, edi
        mov     dword ptr [ebp - 0x08], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        jz      l_skip_miss
        mov     edx, dword ptr [ebp - 0x04]
        mov     eax, dword ptr [ebp + 0x08]
        push    edx
        call    dword ptr [eax + 0x10]
        add     esp, 0x04
        cmp     eax, -0x01
        mov     dword ptr [ebp - 0x08], eax
        jnz     l_skip_miss
        mov     ecx, dword ptr [ebp - 0x04]
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [edi + 0x10]
        push    ecx
        mov     ecx, dword ptr [eax]
        push    edx
        push    ecx
        push    0x00777e7c
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        jz      l_miss_fail
        int     3
    l_miss_fail:
        xor     bl, bl

    l_skip_miss:
        mov     edx, dword ptr [esi]
        push    0x04
        lea     eax, [ebp - 0x08]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov eax, dword ptr [DAT_007dc13c]
        neg     bl
        pop     edi
        pop     esi
        sbb     ebx, ebx
        and     ebx, eax
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
