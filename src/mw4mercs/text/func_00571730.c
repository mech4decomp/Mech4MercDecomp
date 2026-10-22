/* FUN_00571730 — 782 bytes */

/* ---- external data symbols ---- */
extern int   DAT_007b8cec;   /* 0x007B8CEC */
extern int   DAT_007b8ce8;   /* 0x007B8CE8 */
extern int   DAT_007b8cf0;   /* 0x007B8CF0 */
extern char  DAT_007dde2c;   /* 0x007DDE2C — assert enable flag */
extern float DAT_0080da60;   /* 0x0080DA60 — map size x */
extern float DAT_0080da5c;   /* 0x0080DA5C — map size z */
extern float DAT_0080da58;   /* 0x0080DA58 — map size x */
extern float DAT_0080da54;   /* 0x0080DA54 — map size z */
extern float DAT_0076c5b0;   /* 0x0076C5B0 */
extern float DAT_0077016c;   /* 0x0077016C */
extern int   DAT_007dc728;   /* 0x007DC728 */
extern float DAT_0076d048;   /* 0x0076D048 */
extern int   DAT_007dab44;   /* 0x007DAB44 */
extern int   DAT_007dab40;   /* 0x007DAB40 */

/* ---- external functions ---- */
extern void __cdecl FUN_0041acb0(void);
extern int  __cdecl FUN_006fabf0(const char *);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040d560(void);
extern int  __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2690(void);
extern void __cdecl FUN_00767430(void);

__declspec(naked) void __stdcall FUN_00571730(int *param_1, int *param_2, char param_3)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xA0
        mov     eax, dword ptr [DAT_007b8cec]
        mov     ecx, dword ptr [DAT_007b8ce8]
        mov     edx, dword ptr [DAT_007b8cf0]
        push    ebx
        mov     ebx, [ebp + 8]
        mov     [ebp - 0x14], eax
        mov     eax, [ebx + 0xD8]
        push    esi
        push    edi
        add     eax, 0x80
        mov     [ebp - 0x18], ecx
        push    eax
        lea     ecx, [ebp - 0x24]
        mov     [ebp - 0x10], edx
        call    FUN_0041acb0
        mov     esi, [ebp + 0xC]
        fild    dword ptr [esi]
        mov     eax, [ebp - 0x1C]
        mov     ecx, [ebp - 0x20]
        mov     edx, [ebp - 0x24]
        fst     dword ptr [ebp - 0xC]
        mov     [ebp - 0x10], eax
        fild    dword ptr [esi + 4]
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        mov     [ebp - 0x14], ecx
        fstp    dword ptr [ebp - 8]
        mov     [ebp - 0x18], edx
        fild    dword ptr [esi + 8]
        fstp    dword ptr [ebp - 4]
        jz      label_0x571841

        /* assert1: fcomp [0x0080da60] */
        fcomp   dword ptr [DAT_0080da60]
        fnstsw  ax
        test    ah, 0x41
        jz      assert1_done
        push    0x7807A8
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      assert1_done
        int     3

assert1_done:
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_0x571843

        /* assert2: fild [esi+8]; fcomp [0x0080da5c] */
        fild    dword ptr [esi + 8]
        fcomp   dword ptr [DAT_0080da5c]
        fnstsw  ax
        test    ah, 0x41
        jz      assert2_done
        push    0x780778
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      assert2_done
        int     3

assert2_done:
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_0x571843

        /* assert3: fild [esi]; fcomp [0x0080da58] */
        fild    dword ptr [esi]
        fcomp   dword ptr [DAT_0080da58]
        fnstsw  ax
        test    ah, 1
        jnz     assert3_done
        push    0x780744
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      assert3_done
        int     3

assert3_done:
        mov     al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      label_0x571843

        /* assert4: fild [esi+8]; fcomp [0x0080da54] */
        fild    dword ptr [esi + 8]
        fcomp   dword ptr [DAT_0080da54]
        fnstsw  ax
        test    ah, 1
        jnz     label_0x571843
        push    0x780710
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      label_0x571843
        int     3
        jmp     label_0x571843

        /* 0x571841: fstp st0 */
label_0x571841:
        fstp    st(0)

        /* 0x571843: continue */
label_0x571843:
        mov     al, [ebp + 0x10]
        test    al, al
        jnz     label_0x5719a8

        mov     ecx, [ebx + 0xD8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [ebp - 0x24]
        call    FUN_00419480
        push    0x7B8D08
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x28], 0x41A00000
        call    FUN_0040d560
        fld     dword ptr [ebp - 0x20]
        fcomp   dword ptr [DAT_0076c5b0]
        mov     eax, [ebp - 8]
        mov     edx, [ebp - 0xC]
        mov     ecx, [ebp - 4]
        mov     [ebp - 0x3C], eax
        fnstsw  ax
        mov     [ebp - 0x40], edx
        mov     [ebp - 0x38], ecx
        test    ah, 0x41
        jnz     skip_fadd1
        fld     dword ptr [ebp - 0x20]
        fadd    dword ptr [DAT_0077016c]
        fstp    dword ptr [ebp - 0x3C]

skip_fadd1:
        lea     ecx, [ebp - 0x64]
        lea     edx, [ebp - 0x40]
        lea     eax, [ebp - 0xA0]
        push    ecx
        mov     ecx, dword ptr [DAT_007dc728]
        mov     [ebp - 0x64], edx
        mov     [ebp - 0x60], eax
        mov     dword ptr [ebp - 0x5C], 0
        mov     [ebp - 0x54], ebx
        mov     dword ptr [ebp - 0x50], 0x1000
        call    FUN_004e2f40
        test    eax, eax
        jz      branch_0x5718f8

        fld     dword ptr [ebp - 0x28]
        push    ecx
        lea     edx, [ebp - 0x34]
        fstp    dword ptr [esp]
        push    edx
        lea     ecx, [ebp - 0x4C]
        call    FUN_0040ca40
        lea     eax, [ebp - 0x4C]
        push    eax
        lea     ecx, [ebp - 0x40]
        push    ecx
        jmp     branch_0x5719a0

branch_0x5718f8:
        fld     dword ptr [ebp - 0x20]
        mov     eax, [ebp - 4]
        fcomp   dword ptr [DAT_0076c5b0]
        mov     edx, [ebp - 0xC]
        mov     [ebp - 0x38], eax
        mov     [ebp - 0x40], edx
        fnstsw  ax
        test    ah, 0x41
        jnz     use_f8
        fld     dword ptr [ebp - 0x20]
        jmp     do_fadd2
use_f8:
        fld     dword ptr [ebp - 8]
do_fadd2:
        fadd    dword ptr [DAT_0076d048]
        lea     ecx, [ebp - 0x64]
        push    ecx
        mov     ecx, dword ptr [DAT_007dc728]
        fstp    dword ptr [ebp - 0x3C]
        mov     dword ptr [ebp - 0x28], 0x447A0000
        call    FUN_004e2f40
        test    eax, eax
        jz      branch_0x571951

        mov     eax, [ebp - 0x28]
        lea     edx, [ebp - 0xC]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x40]
        call    FUN_004e8dc0
        jmp     label_0x5719a8

branch_0x571951:
        lea     ecx, [ebp - 0x4C]
        push    ecx
        lea     ecx, [ebp - 0x34]
        mov     dword ptr [ebp - 0x4C], 0
        mov     dword ptr [ebp - 0x48], 0x3F800000
        mov     dword ptr [ebp - 0x44], 0
        call    FUN_0040d560
        mov     ecx, dword ptr [DAT_007dc728]
        lea     edx, [ebp - 0x64]
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        jz      label_0x5719a8

        fld     dword ptr [ebp - 0x28]
        push    ecx
        lea     eax, [ebp - 0x34]
        fstp    dword ptr [esp]
        push    eax
        lea     ecx, [ebp - 0x4C]
        call    FUN_0040ca40
        lea     ecx, [ebp - 0x4C]
        push    ecx
        lea     edx, [ebp - 0x40]
        push    edx

branch_0x5719a0:
        lea     ecx, [ebp - 0xC]
        call    FUN_0040cbb0

label_0x5719a8:
        mov     eax, [ebp - 0xC]
        mov     ecx, [ebp - 8]
        mov     edx, [ebp - 4]
        mov     [ebp - 0x88], eax
        lea     eax, [ebp - 0x18]
        mov     [ebp - 0x78], ecx
        push    eax
        lea     ecx, [ebp - 0x94]
        mov     [ebp - 0x68], edx
        call    FUN_0041a070
        lea     ecx, [ebp - 0x94]
        push    ecx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor     ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0x1C]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004e2690
        mov     esi, [ebx + 0xD8]
        add     esi, 0x50
        lea     edi, [ebx + 0xF4]
        mov     ecx, 0xC
        lea     edx, [ebx + 0x198]
        rep movsd
        push    edx
        lea     ecx, [ebx + 0x1E0]
        call    FUN_00767430
        lea     eax, [ebx + 0x1B0]
        push    eax
        lea     ecx, [ebx + 0x1F8]
        call    FUN_00767430
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
