/*
 * FUN_0053ab70 (1455 B) — Custom decal / texture transfer setup.
 *
 * __thiscall (ecx = this), 2 stack params, ret 0x8. Reads decal names from a
 * stream object, builds texture paths, and registers them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041e690(int a, int b, int c);
extern void __cdecl FUN_00544310(int a, void *b);
extern void __cdecl FUN_00412570(const char *s);
extern void __cdecl FUN_004129c0(void);
extern int __cdecl FUN_004125e0(char *dst, const char *a, const char *b);
extern void __cdecl FUN_00412740(char *s);
extern void __cdecl FUN_004084e0(void *p);
extern char __cdecl FUN_00532820(const char *s);
extern void __cdecl FUN_005327e0(int a);
extern int __cdecl FUN_005324b0(const char *s);
extern void __cdecl FUN_0041ee70(int a);
extern void __cdecl FUN_0041f030(int a, int b);
extern void __cdecl FUN_004ce190(int a, int b, int c, int d);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00540090(void);
extern void __cdecl FUN_00540100(int a);
extern void __cdecl FUN_0041e710(void);

extern void *g_007dab44;   /* 0x007DAB44 */
extern void *g_007dab40;   /* 0x007DAB40 */

__declspec(naked) void __cdecl FUN_0053ab70(int param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x26c
        push    ebx
        push    ebp
        push    edi
        mov     edi, ecx
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        mov     al, byte ptr [edi + ecx * 8 + 0x353b]
        lea     ebp, [edi + ecx * 8]
        xor     ebx, ebx
        cmp     al, bl
        jnz     l_ret_early

    l_main:
        push    esi
        mov     esi, dword ptr [esp + 0x284]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x2f]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     cl, byte ptr [esp + 0x2b]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x34]
        mov     byte ptr [ebp + 0x355c], cl
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], ebx
        mov     byte ptr [esp + 0x84], bl
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, ebx
        jz      l_abf4
        mov     edx, dword ptr [esi]
        push    eax
        lea     eax, [esp + 0x80]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x30]

    l_abf4:
        mov     edx, dword ptr [esi]
        mov     byte ptr [esp + eax + 0x7c], bl
        push    1
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x34], ebx
        mov     byte ptr [esp + 0x184], bl
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        jz      l_ac2d
        mov     edx, dword ptr [esi]
        push    eax
        lea     eax, [esp + 0x180]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x2c]

    l_ac2d:
        mov     edx, dword ptr [esi]
        push    ebx
        mov     ecx, esi
        mov     byte ptr [esp + eax + 0x180], bl
        call    dword ptr [edx + 8]
        push    eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x68]
        call    FUN_0041e690
        mov     esi, dword ptr [esp + 0x280]
        lea     ecx, [esp + 0x5c]
        push    ecx
        push    esi
        mov     ecx, edi
        call    FUN_00544310
        cmp     dword ptr [esp + 0x30], ebx
        mov     byte ptr [ebp + 0x3539], 1
        mov     byte ptr [esp + 0x13], bl
        mov     byte ptr [esp + 0x12], bl
        jz      l_ae3c

        lea     edx, [esp + 0x7c]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_00412570
        lea     ecx, [esp + 0x20]
        call    FUN_004129c0
        push    0x77b6b0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      l_ace0
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ace0
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_ace0:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      l_acfb
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_acfb
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_acfb:
        push    0x779ff0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      l_ad49
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ad49
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_ad49:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      l_ad64
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ad64
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_ad64:
        lea     eax, [esp + 0x7c]
        push    eax
        mov     ecx, edi
        call    FUN_00532820
        test    al, al
        jz      l_ad8d
        mov     ecx, dword ptr [ebp + 0x3550]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x17], 1
        call    FUN_005327e0
        lea     edx, [esp + 0x7c]
        jmp     l_addd

    l_ad8d:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        mov     ecx, edi
        call    FUN_00532820
        test    al, al
        jz      l_adb6
        mov     ecx, dword ptr [ebp + 0x3550]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x17], 1
        call    FUN_005327e0
        mov     edx, dword ptr [esp + 0x24]
        jmp     l_addd

    l_adb6:
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_00532820
        test    al, al
        jz      l_adeb
        mov     ecx, dword ptr [ebp + 0x3550]
        push    ecx
        mov     ecx, edi
        mov     byte ptr [esp + 0x17], 1
        call    FUN_005327e0
        mov     edx, dword ptr [esp + 0x1c]

    l_addd:
        push    edx
        mov     ecx, edi
        call    FUN_005324b0
        mov     dword ptr [ebp + 0x3550], eax

    l_adeb:
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebx
        jz      l_ae06
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ae06
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_ae06:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        jz      l_ae21
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ae21
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_ae21:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        jz      l_ae3c
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ae3c
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_ae3c:
        cmp     dword ptr [esp + 0x2c], ebx
        jz      l_b010
        lea     eax, [esp + 0x17c]
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00412570
        lea     ecx, [esp + 0x24]
        call    FUN_004129c0
        push    0x77b6b0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x20], ebx
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      l_aeae
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_aeae
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_aeae:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      l_aec9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_aec9
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_aec9:
        push    0x779ff0
        lea     ecx, [esp + 0x1c]
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      l_af17
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_af17
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_af17:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      l_af32
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_af32
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_af32:
        lea     ecx, [esp + 0x17c]
        push    ecx
        mov     ecx, edi
        call    FUN_00532820
        test    al, al
        jz      l_af61
        mov     edx, dword ptr [ebp + 0x354c]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp + 0x16], 1
        call    FUN_005327e0
        lea     eax, [esp + 0x17c]
        jmp     l_afb1

    l_af61:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, edi
        call    FUN_00532820
        test    al, al
        jz      l_af8a
        mov     edx, dword ptr [ebp + 0x354c]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp + 0x16], 1
        call    FUN_005327e0
        mov     eax, dword ptr [esp + 0x20]
        jmp     l_afb1

    l_af8a:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        mov     ecx, edi
        call    FUN_00532820
        test    al, al
        jz      l_afbf
        mov     edx, dword ptr [ebp + 0x354c]
        push    edx
        mov     ecx, edi
        mov     byte ptr [esp + 0x16], 1
        call    FUN_005327e0
        mov     eax, dword ptr [esp + 0x1c]

    l_afb1:
        push    eax
        mov     ecx, edi
        call    FUN_005324b0
        mov     dword ptr [ebp + 0x354c], eax

    l_afbf:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebx
        jz      l_afda
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_afda
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_afda:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        jz      l_aff5
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_aff5
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_aff5:
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebx
        jz      l_b010
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_b010
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_b010:
        cmp     byte ptr [esp + 0x17c], bl
        jnz     l_b01e
        mov     byte ptr [esp + 0x12], 1

    l_b01e:
        cmp     byte ptr [esp + 0x7c], bl
        jnz     l_b029
        mov     byte ptr [esp + 0x13], 1

    l_b029:
        cmp     dword ptr [edi + 0xec], ebx
        jz      l_b0e4
        cmp     byte ptr [ebp + 0x353f], bl
        jz      l_b0e4
        cmp     byte ptr [esp + 0x12], bl
        jz      l_b051
        cmp     byte ptr [esp + 0x13], bl
        jnz     l_b0e4

    l_b051:
        push    ebx
        lea     ecx, [esp + 0x38]
        call    FUN_0041ee70
        cmp     byte ptr [esp + 0x13], bl
        jnz     l_b087
        push    1
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0041f030
        mov     edx, dword ptr [esp + 0x30]
        push    edx
        lea     eax, [esp + 0x80]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0041f030

    l_b087:
        cmp     byte ptr [esp + 0x12], bl
        jnz     l_b0b3
        push    1
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_0041f030
        mov     edx, dword ptr [esp + 0x2c]
        push    edx
        lea     eax, [esp + 0x180]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_0041f030

    l_b0b3:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        push    1
        lea     ecx, [esp + 0x38]
        push    ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    0x25
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004ce190
        lea     ecx, [esp + 0x34]
        call    FUN_0041ef60
        jmp     l_b109

    l_b0e4:
        cmp     byte ptr [edi + 0x16], bl
        jz      l_b101
        mov     ecx, dword ptr [edi + 0x50]
        cmp     dword ptr [ecx + 0xe4], ebx
        jz      l_b101
        mov     ecx, edi
        mov     byte ptr [ebp + 0x3539], bl
        call    FUN_00540090

    l_b101:
        push    esi
        mov     ecx, edi
        call    FUN_00540100

    l_b109:
        lea     ecx, [esp + 0x5c]
        call    FUN_0041e710
        pop     esi

    l_ret_early:
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x26c
        ret     8
    }
}
