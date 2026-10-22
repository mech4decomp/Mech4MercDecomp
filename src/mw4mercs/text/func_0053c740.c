/*
 * FUN_0053c740 (677 B) — Custom decal save (single slot).
 *
 * __thiscall (ecx = this), 1 stack param, ret 0x4. Serializes one custom
 * decal slot and updates calibration stats.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041ee70(int a);
extern void __cdecl FUN_0041f030(int a, int b);
extern float __cdecl FUN_006100a0(void);
extern void *__cdecl FUN_005444a0(int a);
extern int __cdecl FUN_004cdfa0(int a);
extern void __cdecl FUN_005429e0(int a);
extern void __cdecl FUN_0053a6c0(int a, int b);
extern void __cdecl FUN_004ce190(int a, int b, int c, int d);
extern void __cdecl FUN_0041ef60(void);

extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */
extern void *g_007db094;   /* 0x007DB094 */
extern float g_0076c5b0;   /* 0x0076C5B0 */
extern float g_0077b290;   /* 0x0077B290 */
extern float g_0077b63c;   /* 0x0077B63C */

__declspec(naked) void __cdecl FUN_0053c740(int param_1)
{
    
__asm {
sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        push    1
        lea     eax, [esp + 0x4c]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx + 0x0c]
        xor     eax, 0x85739531
        mov     dl, byte ptr [eax + 0x17]
        mov     edi, dword ptr [eax + 0x50]
        xor     bl, bl
        cmp     dl, 1
        jnz     l_c7fa
        mov     eax, dword ptr [edi + 0x38]
        test    eax, eax
        jz      l_c7fa
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        jz      l_c7fa
        mov     ecx, dword ptr [ecx + 0x20]
        mov     eax, dword ptr [edi + 0x24]
        xor     ecx, 0x85739531
        test    eax, eax
        mov     al, byte ptr [ecx + 0x2214]
        jz      l_c7dc
        test    al, al
        jnz     l_c7bb
        fld     dword ptr [g_0076c5b0]
        jmp     l_c7c6

    l_c7bb:
        add     ecx, 0x21e8
        call    FUN_006100a0

    l_c7c6:
        fild    dword ptr [edi + 0x28]
        fmul    dword ptr [g_0077b290]
        fxch
        fcompp
        fnstsw ax
        test ah, 0x41
        jnz     l_c7fa
        jmp     l_c7f8

    l_c7dc:
        test    al, al
        jz      l_c7fa
        add     ecx, 0x21e8
        call    FUN_006100a0
        fcomp   dword ptr [g_0077b63c]
        fnstsw ax
        test ah, 0x41
        jnz     l_c7fa

    l_c7f8:
        mov     bl, 1

    l_c7fa:
        test    bl, bl
        mov     byte ptr [esp + 0x13], 0
        jz      l_c808
        mov     byte ptr [esp + 0x13], 1

    l_c808:
        push    1
        lea     eax, [esp + 0x17]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x3548]
        push    1
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x3550]
        push    1
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x354c]
        push    1
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x355c]
        push    1
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x48]
        push    eax
        mov     ecx, esi
        call    FUN_005444a0
        mov     edi, eax
        mov     ecx, dword ptr [edi + 0x1c]
        push    4
        lea     edx, [esp + 0x1c]
        mov     dword ptr [esp + 0x1c], ecx
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     eax, dword ptr [edi + 0x1c]
        push    eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_0041f030
        mov     edx, dword ptr [esp + 0x1c]
        push    0
        lea     ecx, [esp + 0x20]
        call    dword ptr [edx + 0x0c]
        lea     eax, [esi + 0x353b]
        mov     dword ptr [esp + 0x24], 0xffffffec
        xor     edi, edi
        mov     dword ptr [esp + 0x14], eax

    l_c8ff:
        mov     ecx, dword ptr [esp + 0x14]
        cmp     byte ptr [ecx], 0
        jz      l_c9b7
        cmp     edi, dword ptr [esp + 0x48]
        jz      l_c9b7
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        push    edi
        mov     ecx, esi
        mov     ebx, eax
        call    FUN_005429e0
        mov     ebp, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        mov     bl, byte ptr [ebx + 0x28]
        sub     eax, ebp
        xor     ecx, dword ptr [g_007dab40]
        lea     ebp, [ecx + 0x14]
        mov     ecx, dword ptr [ebp]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        shl     eax, 3
        add     ecx, 0x3c3c
        mov     edx, ebx
        and     edx, 0xff
        add     dword ptr [ecx + edx * 4 + 8], eax
        add     dword ptr [ecx + 0xc00], eax
        mov     eax, dword ptr [g_007db094]
        cmp     bl, byte ptr [eax + 0x28]
        jnz     l_c99f
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    1
        mov     ecx, esi
        call    FUN_0053a6c0
        jmp     l_c9b7

    l_c99f:
        mov     ecx, dword ptr [ebp]
        push    1
        lea     eax, [esp + 0x20]
        push    eax
        push    0x0f
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004ce190

    l_c9b7:
        mov     ecx, dword ptr [esp + 0x14]
        inc     edi
        add     ecx, 0x2038
        cmp     edi, 0xff
        mov     dword ptr [esp + 0x14], ecx
        jl      l_c8ff
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     4
    }

}
