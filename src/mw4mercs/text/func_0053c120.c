/*
 * FUN_0053c120 (1554 B) — Custom decal save/serialize.
 *
 * __thiscall (ecx = this), 2 stack params, ret 0x8. Serializes custom decal
 * slot data into a stream and updates calibration stats.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_004cdfa0(int a);
extern char *__cdecl FUN_00544680(int a);
extern void __cdecl FUN_0041ee70(int a);
extern void __cdecl FUN_0041f030(int a, int b);
extern void __cdecl FUN_004ce190(int a, int b, int c, int d);
extern void __cdecl FUN_0053a0c0(int a);
extern void __cdecl FUN_0053a4c0(int a);
extern void *__cdecl FUN_005444a0(int a);
extern void *__cdecl FUN_005445f0(int a);
extern void __cdecl FUN_005429e0(int a);
extern void __cdecl FUN_0041ef60(void);

extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */
extern void *g_007db094;   /* 0x007DB094 */

__declspec(naked) void __cdecl FUN_0053c120(int param_1, int param_2)
{
    __asm {
        sub     esp, 0x90
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [esp + 0xa0]
        push    edi
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     ecx, esi
        mov     ebx, eax
        call    FUN_00544680
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
        inc     edi
        lea     edx, [edi + 1]
        push    edx
        lea     ecx, [esp + 0x7c]
        call    FUN_0041ee70
        mov     al, byte ptr [esi + 0x3531]
        push    1
        lea     ecx, [esp + 0x1f]
        push    ecx
        lea     ecx, [esp + 0x80]
        mov     byte ptr [esp + 0x23], al
        call    FUN_0041f030
        push    edi
        mov     ecx, esi
        call    FUN_00544680
        push    eax
        lea     ecx, [esp + 0x80]
        call    FUN_0041f030
        mov     edx, dword ptr [esp + 0x78]
        push    0
        lea     ecx, [esp + 0x7c]
        call    dword ptr [edx + 0x0c]
        mov     ecx, dword ptr [esp + 0x88]
        mov     eax, dword ptr [esp + 0x90]
        mov     edi, dword ptr [g_007dab40]
        sub     eax, ecx
        mov     ecx, dword ptr [g_007dab44]
        mov     dword ptr [esp + 0x80], 0xffffffec
        mov     ecx, dword ptr [ecx]
        xor     ecx, edi
        lea     edi, [ecx + 0x14]
        mov     ecx, dword ptr [edi]
        xor     edx, edx
        mov     dl, byte ptr [ebx + 0x28]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        add     ecx, 0x3c3c
        shl     eax, 3
        push    1
        add     dword ptr [ecx + edx * 4 + 8], eax
        mov     ebp, dword ptr [ecx + 0xc00]
        add     ebp, eax
        lea     eax, [esp + 0x7c]
        push    eax
        mov     dword ptr [ecx + 0xc00], ebp
        mov     ecx, dword ptr [edi]
        push    0x0d
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     ecx, dword ptr [esp + 0xa4]
        push    ecx
        mov     ecx, esi
        call    FUN_0053a0c0
        mov     edx, dword ptr [esp + 0xa4]
        push    edx
        mov     ecx, esi
        call    FUN_0053a4c0
        push    0
        lea     ecx, [esp + 0x28]
        call    FUN_0041ee70
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax

    l_c255:
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     dl, byte ptr [esi + ecx * 8 + 0x353a]
        test    dl, dl
        lea     ecx, [esi + ecx * 8]
        jz      l_c39a
        mov     dl, byte ptr [ecx + 0x3539]
        test    dl, dl
        jz      l_c39a
        cmp     eax, dword ptr [esp + 0xa4]
        jz      l_c39a
        mov     ecx, dword ptr [g_007db094]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x28]
        cmp     eax, edx
        jnz     l_c2ab
        mov     edx, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [edx + 0x10]
        test    ecx, ecx
        jnz     l_c39a

    l_c2ab:
        push    1
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        push    1
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [esp + 0x2c]
        mov     byte ptr [esp + 0x1b], 0
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        push    1
        lea     eax, [esi + edx * 8 + 0x3548]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x3550]
        push    1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x354c]
        push    1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x355c]
        push    1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    FUN_005444a0
        mov     edi, eax
        mov     ecx, dword ptr [edi + 0x1c]
        push    4
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [edi + 0x1c]
        push    eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x14]

    l_c39a:
        inc     eax
        cmp     eax, 0xff
        mov     dword ptr [esp + 0x14], eax
        jl      l_c255
        mov     edx, dword ptr [g_007db094]
        mov     eax, dword ptr [esp + 0xa4]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     eax, ecx
        jnz     l_c3ce
        mov     eax, dword ptr [esi + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jnz     l_c4db

    l_c3ce:
        push    1
        lea     ecx, [esp + 0xa8]
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     al, byte ptr [esp + 0xa8]
        test    al, al
        mov     byte ptr [esp + 0x13], 0
        jz      l_c3f6
        mov     byte ptr [esp + 0x13], 1

    l_c3f6:
        push    1
        lea     edx, [esp + 0x17]
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0xa4]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x3548]
        push    1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0xa4]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x3550]
        push    1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0xa4]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x354c]
        push    1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0xa4]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     edx, [esi + ecx * 8 + 0x355c]
        push    1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0xa4]
        push    eax
        mov     ecx, esi
        call    FUN_005444a0
        mov     edi, eax
        mov     ecx, dword ptr [edi + 0x1c]
        push    4
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030
        mov     eax, dword ptr [edi + 0x1c]
        push    eax
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_0041f030

    l_c4db:
        push    0
        lea     ecx, [esp + 0x54]
        call    FUN_0041ee70
        xor     ecx, ecx
        mov     dword ptr [esp + 0x1c], ecx

    l_c4ec:
        mov     edx, ecx
        imul    edx, edx, 0x22ac
        lea     eax, [edx + esi]
        mov     dl, byte ptr [eax + 0x205f34]
        test    dl, dl
        jz      l_c5cd
        mov     dl, byte ptr [eax + 0x205f35]
        test    dl, dl
        jz      l_c5cd
        push    1
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0041f030
        mov     ecx, dword ptr [esp + 0x1c]
        imul    ecx, ecx, 0x22ac
        lea     edx, [ecx + esi + 0x205f38]
        push    1
        push    edx
        lea     ecx, [esp + 0x58]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    FUN_005445f0
        mov     ebp, eax
        mov     ecx, dword ptr [ebp + 0x1c]
        push    4
        lea     edx, [esp + 0x50]
        mov     dword ptr [esp + 0x50], ecx
        push    edx
        lea     ecx, [esp + 0x58]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x1c]
        imul    eax, eax, 0x22ac
        or      ecx, 0xffffffff
        lea     edi, [eax + esi + 0x205d34]
        xor     eax, eax
        repne   scasb
        not     ecx
        mov     dword ptr [esp + 0x20], ecx
        push    4
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        imul    eax, eax, 0x22ac
        lea     ecx, [eax + esi + 0x205d34]
        push    edx
        push    ecx
        lea     ecx, [esp + 0x58]
        call    FUN_0041f030
        mov     eax, dword ptr [ebp + 0x1c]
        mov     edx, dword ptr [ebp]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 4]
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_0041f030
        mov     ecx, dword ptr [esp + 0x1c]

    l_c5cd:
        inc     ecx
        cmp     ecx, 0x18
        mov     dword ptr [esp + 0x1c], ecx
        jl      l_c4ec
        mov     eax, dword ptr [esp + 0x24]
        push    0
        lea     ecx, [esp + 0x28]
        call    dword ptr [eax + 0x0c]
        mov     ecx, dword ptr [esp + 0xa4]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0xffffffec
        call    FUN_005429e0
        mov     eax, dword ptr [esp + 0x68]
        sub     eax, dword ptr [esp + 0x60]
        jz      l_c662
        mov     edi, dword ptr [g_007dab40]
        lea     edx, [eax * 8]
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, edi
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + 0x28]
        lea     edi, [eax + 0x14]
        mov     eax, dword ptr [edi]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        add     eax, 0x3c3c
        push    1
        add     dword ptr [eax + ecx * 4 + 8], edx
        mov     ebp, dword ptr [eax + 0xc00]
        add     ebp, edx
        lea     edx, [esp + 0x54]
        push    edx
        push    0x14
        push    ecx
        mov     ecx, dword ptr [edi]
        xor     ecx, 0x85739531
        mov     dword ptr [eax + 0xc00], ebp
        call    FUN_004ce190

    l_c662:
        mov     eax, dword ptr [esp + 0x3c]
        sub     eax, dword ptr [esp + 0x34]
        jz      l_c6bc
        mov     edi, dword ptr [g_007dab40]
        lea     edx, [eax * 8]
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, edi
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + 0x28]
        lea     edi, [eax + 0x14]
        mov     eax, dword ptr [edi]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        add     eax, 0x3c3c
        push    1
        add     dword ptr [eax + ecx * 4 + 8], edx
        mov     ebx, dword ptr [eax + 0xc00]
        add     ebx, edx
        lea     edx, [esp + 0x28]
        push    edx
        push    0x0f
        push    ecx
        mov     ecx, dword ptr [edi]
        mov     dword ptr [eax + 0xc00], ebx
        jmp     l_c6db

    l_c6bc:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [g_007dab40]
        xor     eax, eax
        mov     al, byte ptr [ebx + 0x28]
        push    1
        push    0
        push    0x0f
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x14]
        push    eax

    l_c6db:
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     eax, dword ptr [esp + 0xa4]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     eax, [esi + ecx * 8]
        mov     byte ptr [eax + 0x353b], 1
        lea     ecx, [esp + 0x50]
        mov     byte ptr [eax + 0x3542], 0
        call    FUN_0041ef60
        lea     ecx, [esp + 0x24]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x78]
        call    FUN_0041ef60

    l_ret:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x90
        ret     8
    }
}
