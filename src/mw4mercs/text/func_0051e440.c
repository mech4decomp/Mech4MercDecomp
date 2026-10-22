/*
 * FUN_0051e440 (821 B) — Pilot options loader.
 *
 * __thiscall (ECX = this), RET 0x18 (6 stack params).
 * Loads pilot options from .mw4 files, parsing player options.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00412780(const char *str);
extern void __stdcall FUN_00412570(const char *str);
extern char __stdcall FUN_006fc4d0(int param);
extern void __stdcall FUN_006fb780(int param);
extern int __stdcall FUN_004125e0(int param1, const char *str);
extern void __stdcall FUN_00412740(int param);
extern void __stdcall FUN_004084e0(int ptr);
extern int __stdcall FUN_004d2d00(int param1, int param2, int param3, int param4, int param5, int param6, int param7);
extern void __stdcall FUN_004d2110(const char *str, int param2, int param3);
extern void __stdcall FUN_004d21c0(void);
extern void __stdcall FUN_004d2310(void);
extern void * __stdcall FUN_004084d0(int size);
extern int __stdcall FUN_0061a160(int param);
extern void __stdcall FUN_006f4230(int ptr);
extern void * __stdcall FUN_006f3c80(int size, int flags);
extern void __stdcall FUN_0040d9b0(void);

__declspec(naked) void __fastcall FUN_0051e440(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db0b8;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        sub     esp, 0x94
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xa0]
        mov     ebp, ecx
        mov     ecx, dword ptr [eax]
        push    edi
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        push    esi
        add     ecx, 0xb0
        call    FUN_00412780

        push    0x77a0c8
        lea     ecx, [esp + 0x10]
        call    FUN_00412570

        mov     edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jnz     l_skip_fallback

        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_006fb780

    l_skip_fallback:
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_skip_refcnt1
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt1
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt1:
        mov     edx, dword ptr [esp + 0xc]
        push    0x76c5a8
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_skip_refcnt2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt2
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt2:
        mov     ecx, dword ptr [ebp + 0x40ee4]
        test    ecx, ecx
        jz      l_inc_refcnt

        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

    l_inc_refcnt:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      l_build_options_path

        inc     byte ptr [eax - 1]

    l_build_options_path:
        mov     ecx, dword ptr [esp + 0x10]
        push    0x77a0bc
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740

        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0

        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jz      l_no_options_file

        mov     eax, dword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007db0b8]
        push    0
        push    0
        push    0
        push    0x3f
        push    7
        push    0
        push    eax
        call    FUN_004d2d00
        mov     esi, eax

        push    0
        push    esi
        push    0x77a0a8
        lea     ecx, [esp + 0x24]
        mov     dword ptr [ebp + 0x40ee4], esi
        call    FUN_004d2110

        mov     eax, dword ptr [esp + 0x54]
        test    eax, eax
        jz      l_check_fail
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
        ja      l_parse_options

    l_check_fail:
        test    esi, esi
        jz      l_skip_release

        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]

    l_skip_release:
        lea     ecx, [esp + 0x18]
        call    FUN_004d21c0

        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_refcnt3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt3
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt3:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_return_fail
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_return_fail
        jmp     l_do_free

    l_parse_options:
        lea     ecx, [esp + 0x18]
        call    FUN_004d21c0

        mov     ecx, dword ptr [ebp + 0x40ee8]
        test    ecx, ecx
        jz      l_skip_release2

        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]

    l_skip_release2:
        push    0
        push    esi
        push    0x77a0a8
        lea     ecx, [esp + 0x68]
        call    FUN_004d2110

        lea     ecx, [esp + 0x5c]
        call    FUN_004d2310

        push    0x88c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail

        lea     ecx, [esp + 0x5c]
        push    ecx
        mov     ecx, eax
        call    FUN_0061a160
        mov     esi, eax
        jmp     l_alloc_done

    l_alloc_fail:
        xor     esi, esi

    l_alloc_done:
        push    ebx
        mov     ebx, dword ptr [esp + 0xac]
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [ebp + 0x40ee8], esi
        jz      l_skip_free

        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0

    l_skip_free:
        mov     edi, dword ptr [esi + 0x6c]
        test    edi, edi
        jnz     l_strlen_name

        xor     ecx, ecx
        jmp     l_alloc_name

    l_strlen_name:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx

    l_alloc_name:
        push    0
        inc     ecx
        push    ecx
        call    FUN_006f3c80

        mov     edi, dword ptr [esi + 0x6c]
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     dword ptr [ebx], edx
        mov     esi, edi
        mov     edi, edx
        mov     edx, dword ptr [esp + 0xb0]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb

        mov     eax, dword ptr [ebp + 0x40ee8]
        mov     ecx, dword ptr [eax + 0x70]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [esp + 0xb4]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax + 0x74]
        mov     edx, dword ptr [esp + 0xb8]
        mov     eax, dword ptr [eax + 0x78]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0xbc]
        mov     dword ptr [ecx], eax

        lea     ecx, [esp + 0x60]
        call    FUN_004d21c0

        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop     ebx
        jz      l_skip_refcnt4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt4
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt4:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_return_success
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_return_success
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_return_success:
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebp
        add     esp, 0x94
        ret     0x18

    l_no_options_file:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_skip_refcnt6
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_refcnt6
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_skip_refcnt6:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_return_fail
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_return_fail

    l_do_free:
        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_return_fail:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebp
        add     esp, 0x94
        ret     0x18
    }


}
