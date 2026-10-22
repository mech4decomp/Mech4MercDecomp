/*
 * FUN_00514670 (233 B) — in-.text data block function (block 0x513F1F).
 * Uses 0x7dab44/0x7dab40 XOR-keyed pointer scheme and global 0x7b4394;
 * FPU compare; calls FUN_00707e70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);

extern int    g_007dab44;   /* DAT_007dab44 */
extern int    g_007dab40;   /* DAT_007dab40 */
extern int    g_007b4394;   /* DAT_007b4394 */
extern float  g_0076d070;   /* float @ 0x76d070 */
extern double g_007dd260;   /* double @ 0x7dd260 */
extern double g_00779d28;   /* double @ 0x779d28 */

__declspec(naked) void FUN_00514670(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        push    ebx
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x14]
        push    esi
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x1814]
        push    edi
        xor     edi, edi
        mov     dword ptr [esp + 0xc], edi
        add     esi, 0x404
        mov     ebx, 0xff
L46A3:
        xor     eax, eax
        mov     ecx, esi
        mov     edx, 0xe
L46AC:
        add     eax, dword ptr [ecx]
        add     ecx, 0xc0c
        dec     edx
        jne     L46AC
        cmp     eax, edi
        jle     L46BD
        mov     edi, eax
L46BD:
        add     esi, 4
        dec     ebx
        jne     L46A3
        cmp     edi, dword ptr [g_007b4394]
        mov     dword ptr [esp + 0xc], edi
        jle     L46EF
        mov     eax, 0x400
L46DD:
        cmp     edi, eax
        mov     dword ptr [g_007b4394], eax
        jle     L4752
        add     eax, eax
        cmp     edi, eax
        __emit 0x7F   /* __emit: backward jg L46DD rel-offset miscomputed by MSVC6 (7F F1 vs ref 7F FA) */
        __emit 0xFA
        pop     edi
        pop     esi
        mov     dword ptr [g_007b4394], eax
        pop     ebx
        pop     ecx
        ret     0xc
L46EF:
        fild    dword ptr [esp + 0xc]
        push    0
        fild    dword ptr [g_007b4394]
        fmul    dword ptr [g_0076d070]
        fcompp
        fnstsw  ax
        test    ah, 0x41
        jne     L4742
        call    FUN_00707e70
        fsub    qword ptr [g_007dd260]
        fcomp   qword ptr [g_00779d28]
        fnstsw  ax
        test    ah, 0x41
        jne     L474D
        mov     eax, 0x400
L4730:
        cmp     edi, eax
        mov     dword ptr [g_007b4394], eax
        jle     L4752
        add     eax, eax
        cmp     edi, eax
        __emit 0x7F   /* __emit: backward jg L4730 rel-offset miscomputed by MSVC6 (7F F1 vs ref 7F FA) */
        __emit 0xFA
        pop     edi
        pop     esi
        mov     dword ptr [g_007b4394], eax
        pop     ebx
        pop     ecx
        ret     0xc
L4742:
        call    FUN_00707e70
        fstp    qword ptr [g_007dd260]
L474D:
        mov     eax, dword ptr [g_007b4394]
L4752:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
