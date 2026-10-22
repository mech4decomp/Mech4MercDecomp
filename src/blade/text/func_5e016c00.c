/*
 * FUN_5e016c00 (721 B) — line/segment math update with FPU + div.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a5e8;   /* DAT_5e77a5e8 */
extern int g_5e77a5ec;   /* DAT_5e77a5ec */
extern int g_5e77a5fc;   /* DAT_5e77a5fc */
extern int g_5e77a5e4;   /* DAT_5e77a5e4 */
extern float g_5e03628c; /* DAT_5e03628c */
extern float g_5e77a538; /* DAT_5e77a538 */
extern float g_5e77a540; /* DAT_5e77a540 */
extern float g_5e77a63c; /* DAT_5e77a63c */
extern float g_5e77a544; /* DAT_5e77a544 */
extern float g_5e77a54c; /* DAT_5e77a54c */
extern float g_5e77a650; /* DAT_5e77a650 */
extern float g_5e77a550; /* DAT_5e77a550 */
extern float g_5e77a558; /* DAT_5e77a558 */
extern float g_5e77a65c; /* DAT_5e77a65c */
extern int g_5e77a5f0;   /* DAT_5e77a5f0 */
extern int g_5e77a5f4;   /* DAT_5e77a5f4 */
extern int g_5e77a5f8;   /* DAT_5e77a5f8 */
extern float g_5e77a640; /* DAT_5e77a640 */
extern float g_5e77a644; /* DAT_5e77a644 */
extern float g_5e77a654; /* DAT_5e77a654 */
extern float g_5e77a658; /* DAT_5e77a658 */
extern float g_5e77a660; /* DAT_5e77a660 */
extern float g_5e77a664; /* DAT_5e77a664 */

__declspec(naked) void FUN_5e016c00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp + 0xc]
        shl     edi, 0x5
        shl     ecx, 0x5
        mov     eax, dword ptr [edi + 0x5e77a588]
        add     eax, 0xf
        sar     eax, 0x4
        mov     dword ptr [g_5e77a5e8], eax
        mov     edx, dword ptr [ecx + 0x5e77a588]
        add     edx, 0xf
        sar     edx, 0x4
        sub     edx, eax
        mov     dword ptr [g_5e77a5ec], edx
        jz      L_16ec8
        mov     ebx, dword ptr [ecx + 0x5e77a588]
        mov     esi, dword ptr [ecx + 0x5e77a584]
        mov     ecx, dword ptr [edi + 0x5e77a584]
        mov     edx, dword ptr [edi + 0x5e77a588]
        shl     eax, 0x4
        sub     esi, ecx
        sub     ebx, edx
        sub     eax, edx
        add     ecx, 0x10
        imul    eax, esi
        imul    ecx, ebx
        lea     eax, [eax + ecx*1 - 1]
        mov     dword ptr [ebp - 0x8], eax
        mov     eax, ebx
        shl     eax, 0x4
        mov     dword ptr [ebp + 0xc], eax
        mov     dword ptr [ebp - 0x4], eax
        mov     eax, dword ptr [ebp - 0x8]
        xor     edx, edx
        test    eax, eax
        jz      L_16cc0
        mov     ecx, dword ptr [ebp - 0x4]
        js      L_16cb2
        test    ecx, 0xffff0000
        jnz     L_16cac
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_16cac
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_16cc0
    L_16cac:
        xor     edx, edx
        div     ecx
        jmp     L_16cc0
    L_16cb2:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_16cc0
        dec     eax
        add     edx, ecx
    L_16cc0:
        mov     ecx, 0x5e77a5fc
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5e4
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [g_5e77a5e8]
        mov     edx, dword ptr [edi + 0x5e77a588]
        mov     eax, dword ptr [edi + 0x5e77a584]
        shl     ecx, 0x4
        sub     ecx, edx
        mov     edx, dword ptr [g_5e77a5e4]
        mov     dword ptr [ebp - 0x8], ecx
        mov     ecx, dword ptr [g_5e77a5ec]
        fild    dword ptr [ebp - 0x8]
        shl     edx, 0x4
        sub     edx, eax
        mov     eax, dword ptr [ebp + 0x8]
        fmul    dword ptr [g_5e03628c]
        mov     dword ptr [ebp - 0x8], edx
        fild    dword ptr [ebp - 0x8]
        fmul    dword ptr [g_5e03628c]
        fld     dword ptr [g_5e77a538]
        fmul    st(0), st(1)
        fadd    dword ptr [edi + 0x5e77a590]
        fld     dword ptr [g_5e77a540]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a63c]
        fld     dword ptr [g_5e77a544]
        fmul    st(0), st(1)
        fadd    dword ptr [eax*4 + 0x5e77a518]
        fld     dword ptr [g_5e77a54c]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a650]
        fld     dword ptr [g_5e77a550]
        fmul    st(0), st(1)
        fadd    dword ptr [eax*4 + 0x5e77a524]
        fld     dword ptr [g_5e77a558]
        fmul    st(0), st(3)
        mov     eax, 0x1
        cmp     ecx, eax
        faddp   st(1), st(0)
        fstp    dword ptr [g_5e77a65c]
        fstp    st(0)
        fstp    st(0)
        jle     L_16ec8
        test    esi, esi
        jl      L_16dba
        cmp     esi, ebx
        jge     L_16d9e
        shl     esi, 0x4
        mov     dword ptr [g_5e77a5f0], 0
        mov     dword ptr [g_5e77a5f4], esi
        jmp     L_16e4e
    L_16d9e:
        lea     ecx, [ebx + ebx*1]
        cmp     esi, ecx
        jge     L_16df0
        sub     esi, ebx
        mov     dword ptr [g_5e77a5f0], eax
        shl     esi, 0x4
        mov     dword ptr [g_5e77a5f4], esi
        jmp     L_16e4e
    L_16dba:
        lea     eax, [esi + ebx*1]
        test    eax, eax
        jl      L_16dd5
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], 0xffffffff
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_16e4e
    L_16dd5:
        lea     eax, [esi + ebx*2]
        test    eax, eax
        jl      L_16df0
        shl     eax, 0x4
        mov     dword ptr [g_5e77a5f0], 0xfffffffe
        mov     dword ptr [g_5e77a5f4], eax
        jmp     L_16e4e
    L_16df0:
        mov     edx, dword ptr [ebp + 0xc]
        shl     esi, 0x4
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [ebp - 0x8], esi
        mov     eax, dword ptr [ebp - 0x8]
        xor     edx, edx
        test    eax, eax
        jz      L_16e40
        mov     ecx, dword ptr [ebp + 0x8]
        js      L_16e32
        test    ecx, 0xffff0000
        jnz     L_16e2c
        mov     edx, eax
        shr     edx, 0x10
        cmp     edx, ecx
        jnc     L_16e2c
        div     cx
        xor     ecx, ecx
        mov     cx, ax
        mov     eax, ecx
        mov     cx, dx
        mov     edx, ecx
        jmp     L_16e40
    L_16e2c:
        xor     edx, edx
        div     ecx
        jmp     L_16e40
    L_16e32:
        mov     edx, 0xffffffff
        idiv    ecx
        test    edx, edx
        jz      L_16e40
        dec     eax
        add     edx, ecx
    L_16e40:
        mov     ecx, 0x5e77a5f4
        mov     dword ptr [ecx], edx
        mov     ecx, 0x5e77a5f0
        mov     dword ptr [ecx], eax
    L_16e4e:
        fild    dword ptr [g_5e77a5f0]
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [g_5e77a5fc]
        sub     ecx, eax
        mov     dword ptr [g_5e77a5f8], eax
        fld     st(0)
        fmul    dword ptr [g_5e77a538]
        mov     dword ptr [g_5e77a5fc], ecx
        fadd    dword ptr [g_5e77a540]
        fst     dword ptr [g_5e77a640]
        fadd    dword ptr [g_5e77a538]
        fstp    dword ptr [g_5e77a644]
        fld     st(0)
        fmul    dword ptr [g_5e77a544]
        fadd    dword ptr [g_5e77a54c]
        fst     dword ptr [g_5e77a654]
        fadd    dword ptr [g_5e77a544]
        fstp    dword ptr [g_5e77a658]
        fmul    dword ptr [g_5e77a550]
        fadd    dword ptr [g_5e77a558]
        fst     dword ptr [g_5e77a660]
        fadd    dword ptr [g_5e77a550]
        fstp    dword ptr [g_5e77a664]
    L_16ec8:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
