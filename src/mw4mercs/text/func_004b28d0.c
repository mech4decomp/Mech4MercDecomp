/*
 * FUN_004b28d0 (1504 B) -- __thiscall (RET 0x10). MLR object/light setup:
 * initializes buffers via FUN_004c66b0, sets up vtable + tables, resizes two
 * dynamic arrays (FUN_004084d0/FUN_004084e0), reads object data via virtual
 * calls, and scales a vector (FPU). Uses globals DAT_007daac8, DAT_00770554,
 * DAT_007daae9, DAT_007daaea; calls FUN_004b3160.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004c66b0(void);
extern int  __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00429860(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_004b3160(void);

extern float DAT_007daac8;
extern float DAT_00770554;
extern char  DAT_007daae9;
extern char  DAT_007daaea;

extern int g_tbl_7b3378[];
extern int g_tbl_7b3b28[];
extern int g_tbl_7b3b2c[];
extern int g_tbl_7b3b30[];
extern int g_tbl_7b3478[];

__declspec(naked) void FUN_004b28d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        push    edi
        push    ebx
        mov     esi, ecx
        push    eax
        mov     dword ptr [ebp - 0x4], esi
        call    FUN_004c66b0
        xor     eax, eax
        cmp     edi, 0xa
        mov     dword ptr [esi + 0x174], eax
        mov     dword ptr [esi + 0x178], eax
        mov     dword ptr [esi + 0x17c], eax
        mov     dword ptr [esi + 0x180], eax
        mov     dword ptr [esi], 0x77066c
        jge     L_2926
        push    0x770558
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_2926
        int     3
L_2926:
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, eax
        shr     ecx, 0x2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*0x4 + g_tbl_7b3378]
        mov     ecx, eax
        shr     ecx, 0x5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*0x2]
        shl     ecx, 0x2
        mov     dword ptr [esi + 0x1c], edx
        mov     edx, dword ptr [ecx + g_tbl_7b3b28]
        mov     dword ptr [esi + 0x130], edx
        mov     edx, dword ptr [ecx + g_tbl_7b3b2c]
        mov     ecx, dword ptr [ecx + g_tbl_7b3b30]
        shr     eax, 0xa
        mov     dword ptr [esi + 0x134], edx
        and     eax, 0x1
        mov     edx, dword ptr [eax*0x4 + g_tbl_7b3478]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0x138], ecx
        mov     dword ptr [esi + 0x13c], edx
        lea     edi, [esi + 0x144]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        push    0x2
        lea     ecx, [ebp + 0xc]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp + 0xc]
        mov     edi, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edi + 0x180]
        mov     esi, eax
        and     esi, 0xffff
        cmp     esi, ecx
        jz      L_2a5c
        test    esi, esi
        jbe     L_2a3a
        lea     edx, [esi*0x8 + 0x0]
        push    edx
        call    FUN_004084d0
        mov     edx, eax
        mov     eax, dword ptr [edi + 0x17c]
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [ebp - 0x10], edx
        jz      L_2a32
        mov     eax, dword ptr [edi + 0x180]
        cmp     esi, eax
        jnc     L_29ea
        mov     eax, esi
L_29ea:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        mov     dword ptr [ebp + 0x8], eax
        jz      L_2a20
        mov     ecx, dword ptr [edi + 0x17c]
        lea     eax, [edx + eax*0x8]
        sub     ecx, edx
        mov     edx, dword ptr [ebp + 0x8]
        inc     edx
        mov     dword ptr [ebp + 0x8], edx
L_2a06:
        mov     edx, dword ptr [ecx + eax*0x1]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + eax*0x1 + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ebp + 0x8]
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        mov     dword ptr [ebp + 0x8], edx
        ja      L_2a06
L_2a20:
        mov     eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        mov     edx, dword ptr [ebp - 0x10]
        add     esp, 0x4
L_2a32:
        mov     dword ptr [edi + 0x17c], edx
        jmp     L_2a53
L_2a3a:
        mov     eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x17c], 0x0
L_2a53:
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [edi + 0x180], esi
L_2a5c:
        and     eax, 0xffff
        mov     esi, eax
        cmp     esi, dword ptr [edi + 0x178]
        mov     dword ptr [ebp - 0x10], esi
        jz      L_2afb
        test    esi, esi
        jbe     L_2adc
        lea     ecx, [esi*0x4 + 0x0]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x174]
        add     esp, 0x4
        test    edx, edx
        mov     dword ptr [ebp + 0x8], eax
        jz      L_2ad1
        mov     ecx, dword ptr [edi + 0x178]
        cmp     esi, ecx
        jnc     L_2a9f
        mov     ecx, esi
L_2a9f:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_2ac2
        mov     eax, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ebp + 0x8]
        lea     eax, [eax + ecx*0x4]
        sub     edx, esi
        inc     ecx
L_2ab2:
        mov     esi, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], esi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_2ab2
        mov     esi, dword ptr [ebp - 0x10]
L_2ac2:
        mov     eax, dword ptr [edi + 0x174]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2ad1:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     dword ptr [edi + 0x174], ecx
        jmp     L_2af5
L_2adc:
        mov     edx, dword ptr [edi + 0x174]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x174], 0x0
L_2af5:
        mov     dword ptr [edi + 0x178], esi
L_2afb:
        push    ebx
        call    FUN_00421e60
        mov     dword ptr [ebp + 0x8], eax
        mov     eax, dword ptr [ebp + 0x10]
        add     esp, 0x4
        cmp     eax, 0xd
        jge     L_2b9d
        xor     esi, esi
        cmp     word ptr [ebp + 0xc], si
        jbe     L_2e03
L_2b1f:
        mov     eax, dword ptr [ebx]
        push    0x4
        lea     ecx, [ebp + 0x10]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, 0x4b
        jz      L_2b45
        cmp     eax, 0x74
        jnz     L_2b63
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        push    ebx
        call    FUN_00429860
        jmp     L_2b4f
L_2b45:
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        push    ebx
        call    FUN_00487900
L_2b4f:
        mov     edx, dword ptr [edi + 0x174]
        mov     ecx, esi
        add     esp, 0x8
        and     ecx, 0xffff
        mov     dword ptr [edx + ecx*0x4], eax
L_2b63:
        mov     eax, dword ptr [edi + 0x17c]
        mov     edx, dword ptr [ebx]
        mov     ecx, esi
        and     ecx, 0xffff
        lea     eax, [eax + ecx*0x8]
        push    0x4
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp + 0x14], eax
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [eax]
        add     ecx, 0x4
        push    0x4
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        inc     esi
        cmp     si, word ptr [ebp + 0xc]
        jc      L_2b1f
        jmp     L_2e03
L_2b9d:
        xor     eax, eax
        cmp     word ptr [ebp + 0xc], ax
        mov     dword ptr [ebp + 0x10], eax
        mov     dword ptr [ebp - 0x8], eax
        jbe     L_2e03
        mov     edx, dword ptr [edi + 0x17c]
        mov     dword ptr [ebp - 0xc], edx
L_2bb8:
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebx]
        and     esi, 0xffff
        lea     edi, [eax + esi*0x8]
        push    0x4
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x4
        add     edi, 0x4
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebx]
        push    0x4
        lea     ecx, [ebp - 0x10]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0x8]
        and     edx, 0xffff
        mov     eax, ecx
        dec     edx
        and     eax, 0xffff
        cmp     eax, edx
        jge     L_2c22
        fld     dword ptr [DAT_007daac8]
        fcomp   dword ptr [edi]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_2c22
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebx]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
        jmp     L_2cab
L_2c22:
        cmp     word ptr [ebp + 0x10], 0x0
        jnz     L_2c37
        test    cx, cx
        jbe     L_2c37
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [ecx], 0x0
L_2c37:
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        jz      L_2c5a
        mov     edx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp + 0x8]
        push    edx
        push    ecx
        push    ebx
        call    eax
        mov     edx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edx + 0x174]
        add     esp, 0xc
        mov     dword ptr [ecx + esi*0x4], eax
        jmp     L_2ca8
L_2c5a:
        mov     edx, dword ptr [ebx]
        push    0x4
        lea     eax, [ebp - 0x14]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp - 0x14]
        cmp     eax, 0x4b
        jz      L_2c8f
        cmp     eax, 0x74
        jnz     L_2ca8
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        push    ebx
        call    FUN_00429860
        mov     edx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edx + 0x174]
        add     esp, 0x8
        mov     dword ptr [ecx + esi*0x4], eax
        jmp     L_2ca8
L_2c8f:
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        push    ebx
        call    FUN_00487900
        mov     ecx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ecx + 0x174]
        add     esp, 0x8
        mov     dword ptr [edx + esi*0x4], eax
L_2ca8:
        inc     dword ptr [ebp + 0x10]
L_2cab:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        inc     eax
        cmp     ax, cx
        mov     dword ptr [ebp - 0x8], eax
        jc      L_2bb8
        mov     esi, dword ptr [ebp + 0x10]
        cmp     si, cx
        jnc     L_2e00
        mov     ebx, dword ptr [ebp - 0x4]
        mov     edi, dword ptr [ebx + 0x180]
        and     esi, 0xffff
        cmp     esi, edi
        jz      L_2d6b
        test    esi, esi
        jbe     L_2d4c
        lea     eax, [esi*0x8 + 0x0]
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ecx + 0x17c]
        add     esp, 0x4
        test    ecx, ecx
        mov     ebx, eax
        jz      L_2d3f
        cmp     esi, edi
        mov     edx, esi
        jc      L_2d0c
        mov     edx, edi
L_2d0c:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_2d2d
        lea     eax, [ebx + edx*0x8]
        sub     ecx, ebx
        inc     edx
L_2d19:
        mov     edi, dword ptr [ecx + eax*0x1]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx + eax*0x1 + 0x4]
        mov     dword ptr [eax + 0x4], edi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_2d19
L_2d2d:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ecx + 0x17c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2d3f:
        mov     edx, dword ptr [ebp - 0x4]
        mov     dword ptr [edx + 0x17c], ebx
        mov     ebx, edx
        jmp     L_2d65
L_2d4c:
        mov     eax, dword ptr [ebx + 0x17c]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x17c], 0x0
L_2d65:
        mov     dword ptr [ebx + 0x180], esi
L_2d6b:
        mov     ebx, dword ptr [ebx + 0x178]
        cmp     esi, ebx
        mov     dword ptr [ebp + 0x10], ebx
        jz      L_2e00
        test    esi, esi
        jbe     L_2ddc
        lea     ecx, [esi*0x4 + 0x0]
        push    ecx
        call    FUN_004084d0
        mov     ebx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebx + 0x174]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        jz      L_2dd4
        mov     ecx, dword ptr [ebp + 0x10]
        cmp     esi, ecx
        jnc     L_2da8
        mov     ecx, esi
L_2da8:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_2dc5
        lea     eax, [edi + ecx*0x4]
        sub     edx, edi
        inc     ecx
L_2db5:
        mov     ebx, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], ebx
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_2db5
        mov     ebx, dword ptr [ebp - 0x4]
L_2dc5:
        mov     eax, dword ptr [ebx + 0x174]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2dd4:
        mov     dword ptr [ebx + 0x174], edi
        jmp     L_2dfa
L_2ddc:
        mov     edi, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edi + 0x174]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x174], 0x0
        mov     ebx, edi
L_2dfa:
        mov     dword ptr [ebx + 0x178], esi
L_2e00:
        mov     edi, dword ptr [ebp - 0x4]
L_2e03:
        mov     edx, dword ptr [edi + 0x18]
        shr     edx, 0x5
        not     dl
        test    dl, 0x1
        jz      L_2e24
        fld     dword ptr [edi + 0xec]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [edi + 0xec]
        jmp     L_2e8a
L_2e24:
        fld     dword ptr [edi + 0xe0]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [edi + 0xe0]
        fld     dword ptr [edi + 0xe4]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [edi + 0xe4]
        fld     dword ptr [edi + 0xe8]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [edi + 0xe8]
        fld     dword ptr [edi + 0xe8]
        fld     dword ptr [edi + 0xe4]
        fld     dword ptr [edi + 0xe0]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [edi + 0xec]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
L_2e8a:
        mov     al, byte ptr [DAT_007daae9]
        test    al, al
        jz      L_2ea5
        mov     ecx, edi
        call    FUN_004b3160
        test    al, al
        jnz     L_2ea5
        mov     byte ptr [DAT_007daaea], 0x1
L_2ea5:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
