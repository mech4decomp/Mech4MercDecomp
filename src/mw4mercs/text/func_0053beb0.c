/*
 * FUN_0053beb0 (573 B) — Custom decal slot management.
 *
 * __thiscall (ecx = this), 2 stack params, ret 0x8. Frees/allocates decal
 * name buffers and activates a decal slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004084d0(int a);
extern float __cdecl FUN_006100a0(void);
extern void __cdecl FUN_0053c740(int a);
extern void __cdecl FUN_004ce190(int a, int b, int c, int d);

extern void *g_007db094;   /* 0x007DB094 */
extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */
extern float g_0076c5b0;   /* 0x0076C5B0 */

__declspec(naked) void __cdecl FUN_0053beb0(int param_1, int param_2)
{
    
__asm {
push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x0c]
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [g_007db094]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        cmp     ebx, eax
        jz      l_bfac
        mov     edx, ebx
        shl     edx, 7
        add     edx, ebx
        shl     edx, 3
        sub     edx, ebx
        mov     eax, dword ptr [ebp + edx * 8 + 0x3610]
        lea     edi, [ebp + edx * 8]
        xor     esi, esi
        cmp     eax, esi
        jz      l_befe
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x3610], esi

    l_befe:
        mov     eax, dword ptr [edi + 0x3614]
        cmp     eax, esi
        jz      l_bf17
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x3614], esi

    l_bf17:
        mov     dword ptr [esp + 0x18], esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_bfac
        lea     edx, [eax + eax]
        push    edx
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 4
        lea     edx, [ecx + ecx]
        mov     ebp, eax
        mov     eax, dword ptr [esi]
        push    edx
        push    ebp
        mov     ecx, esi
        mov     dword ptr [edi + 0x3610], ebp
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      l_bf95
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        add     esp, 4
        push    ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [edi + 0x3614], eax
        call    dword ptr [edx + 0x20]
        jmp     l_bfa8

    l_bf95:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x3610], 0

    l_bfa8:
        mov     ebp, dword ptr [esp + 0x10]

    l_bfac:
        mov     edx, ebx
        shl     edx, 7
        add     edx, ebx
        shl     edx, 3
        sub     edx, ebx
        mov     al, byte ptr [ebp + edx * 8 + 0x353b]
        cmp     al, 1
        lea     esi, [ebp + edx * 8]
        jz      l_c0e5
        mov     al, byte ptr [esi + 0x3539]
        test    al, al
        jz      l_c091
        mov     edi, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [edi + 0xe4]
        test    eax, eax
        jz      l_bffc
        cmp     dword ptr [esi + 0x3554], 0x2c
        jz      l_bffc
        cmp     dword ptr [esi + 0x3548], 8
        jz      l_c0e5

    l_bffc:
        mov     eax, dword ptr [ebp + 0x4c]
        cmp     dword ptr [eax + 0x14], 5
        jnz     l_c06a
        mov     eax, dword ptr [edi + 0x20]
        test    eax, eax
        jz      l_c0e5
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edi + 0x24]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0x20]
        xor     eax, 0x85739531
        test    ecx, ecx
        jz      l_c06a
        mov     cl, byte ptr [eax + 0x2214]
        test    cl, cl
        jnz     l_c040
        fld     dword ptr [g_0076c5b0]
        jmp     l_c04b

    l_c040:
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100a0

    l_c04b:
        mov     edi, dword ptr [edi + 0x28]
        lea     eax, [edi + edi * 2]
        lea     eax, [eax + eax * 4]
        shl     eax, 2
        mov     dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        fxch
        fcompp
        fnstsw ax
        test    ah, 0x41
        jz      l_c0e5

    l_c06a:
        mov     byte ptr [esi + 0x353a], 1
        mov     byte ptr [esi + 0x3542], 1
        mov     ecx, dword ptr [ebp + 0x4c]
        cmp     dword ptr [ecx + 0x14], 5
        jnz     l_c0e5
        push    ebx
        mov     ecx, ebp
        call    FUN_0053c740
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8

    l_c091:
        mov     edx, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jz      l_c0c0
        mov     ecx, dword ptr [g_007db094]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     ebx, eax
        jnz     l_c0c0
        pop     edi
        mov     byte ptr [esi + 0x353a], 1
        mov     byte ptr [esi + 0x3542], 1
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8

    l_c0c0:
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        push    1
        push    0
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    0x13
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004ce190

    l_c0e5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }


}
