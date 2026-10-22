/*
 * FUN_0053b1d0 (687 B) — Custom decal slot activation / throttle setup.
 *
 * __fastcall (ecx = this), 2 stack params, ret 0x8. Activates a decal slot
 * and adjusts throttle calibration floats.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_005444a0(int a);
extern float __cdecl FUN_005404a0(int a);
extern float __cdecl FUN_00540530(int a);

extern void *g_007db090;   /* 0x007DB090 */
extern int g_007f27dc;     /* 0x007F27DC */
extern float g_0076c5b0;   /* 0x0076C5B0 */

__declspec(naked) void __cdecl FUN_0053b1d0(int param_1, int param_2)
{
    
__asm {
mov     eax, dword ptr [g_007db090]
        sub     esp, 8
        push    esi
        mov     esi, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        push    edi
        mov     edi, 1
        mov     dword ptr [esi + 0x3534], edi
        mov     eax, ecx
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [esi + edx * 8 + 0x3580]
        test    eax, eax
        jnz     l_b21e
        mov     dword ptr [esi + 0x205524], edi
        mov     dword ptr [esi + 0x204d2c], edi

    l_ret_early:
        pop     edi
        pop     esi
        add     esp, 8
        ret     8

    l_b21e:
        mov     eax, dword ptr [g_007f27dc]
        test    eax, eax
        jz      l_b23b
        mov     dword ptr [esi + 0x205524], edi
        mov     dword ptr [esi + 0x204d2c], edi
        pop     edi
        pop     esi
        add     esp, 8
        ret     8

    l_b23b:
        mov     eax, dword ptr [esi + 0x4c]
        cmp     dword ptr [eax + 0x14], 2
        jz      l_b258
        mov     dword ptr [esi + 0x205524], edi
        mov     dword ptr [esi + 0x204d2c], edi
        pop     edi
        pop     esi
        add     esp, 8
        ret     8

    l_b258:
        mov     byte ptr [esp + 8], cl
        mov     ecx, dword ptr [esp + 8]
        and     ecx, 0xff
        push    ebp
        push    ecx
        mov     ecx, esi
        call    FUN_005444a0
        mov     ebp, eax
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jz      l_b377
        mov     edx, dword ptr [g_007db090]
        xor     eax, eax
        mov     al, byte ptr [edx + 0x28]
        mov     ecx, eax
        and     ecx, 0xff
        mov     edx, ecx
        shl     edx, 7
        add     edx, ecx
        shl     edx, 3
        sub     edx, ecx
        lea     ecx, [esi + edx * 8]
        cmp     dword ptr [ecx + 0x3548], 8
        jz      l_b36c
        mov     byte ptr [ecx + 0x3539], 0
        mov     edi, dword ptr [esi + 0x50]
        mov     byte ptr [esp + 0x0c], al
        mov     byte ptr [esp + 0x10], al
        mov     eax, dword ptr [esp + 0x0c]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     edx, dword ptr [esi + ecx * 8 + 0x3548]
        push    edx
        mov     ecx, esi
        call    FUN_005404a0
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     eax, dword ptr [esi + ecx * 8 + 0x3548]
        lea     edx, [eax + eax * 4]
        mov     eax, dword ptr [g_007db090]
        mov     al, byte ptr [eax + 0x28]
        mov     byte ptr [esp + 0x10], al
        mov     byte ptr [esp + 0x0c], al
        mov     eax, dword ptr [esp + 0x10]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        shl     edx, 4
        sub     ecx, eax
        fstp    dword ptr [edx + edi + 0xfc]
        mov     edx, dword ptr [esi + ecx * 8 + 0x3548]
        push    edx
        mov     ecx, esi
        call    FUN_00540530
        mov     eax, dword ptr [esp + 0x0c]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     eax, dword ptr [esi + ecx * 8 + 0x3548]
        lea     edx, [eax + eax * 4]
        shl     edx, 4
        fstp    dword ptr [edx + edi + 0x108]
        mov     edi, 1

    l_b36c:
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        jnz     l_b3fd

    l_b377:
        mov     ecx, dword ptr [g_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     eax, dword ptr [esi + edx * 8 + 0x3548]
        cmp     eax, 8
        lea     edx, [esi + edx * 8]
        jz      l_b3fd
        mov     cl, byte ptr [edx + 0x3539]
        test    cl, cl
        jz      l_b3fd
        mov     ecx, dword ptr [esi + 0x54]
        lea     eax, [eax + eax * 4]
        shl     eax, 4
        fld     dword ptr [ecx + eax + 0xfc]
        add     ecx, eax
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 0x41
        jnz     l_b3d8
        fld     dword ptr [ecx + 0xfc]
        fsub    dword ptr [edx + 0x5568]
        fstp    dword ptr [ecx + 0xfc]

    l_b3d8:
        fld     dword ptr [ecx + 0x108]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 0x41
        jnz     l_b3fd
        fild    dword ptr [edx + 0x556c]
        fsubr   dword ptr [ecx + 0x108]
        fstp    dword ptr [ecx + 0x108]

    l_b3fd:
        mov     ecx, dword ptr [g_007db090]
        mov     dl, byte ptr [ecx + 0x28]
        mov     eax, dword ptr [esi]
        mov     byte ptr [esp + 0x10], dl
        mov     ecx, dword ptr [esp + 0x10]
        and     ecx, 0xff
        push    ebp
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x6c]
        test    al, al
        pop     ebp
        jz      l_b42e
        mov     dword ptr [esi + 0x205524], edi
        mov     dword ptr [esi + 0x204d2c], edi

    l_b42e:
        mov     edx, dword ptr [g_007db090]
        xor     eax, eax
        mov     al, byte ptr [edx + 0x28]
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     ecx, dword ptr [esi + ecx * 8 + 0x3578]
        test    ecx, ecx
        jz      l_b477
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx]
        mov     ecx, dword ptr [g_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     dword ptr [esi + edx * 8 + 0x3578], 0

    l_b477:
        pop     edi
        pop     esi
        add     esp, 8
        ret     8
    }


}
