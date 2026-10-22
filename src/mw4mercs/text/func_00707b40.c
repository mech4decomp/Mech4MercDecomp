/*
 * FUN_00707b40 (649 B) — gosScript timing/rate controller. Conditionally
 * initializes the timing subsystem (FUN_00707dd0 / FUN_00707e00), then
 * computes 64-bit elapsed-time ratios using __allmul (FUN_0075dc60),
 * _ftol (FUN_0075db4a) and the RDTSC counter FUN_00707f50, storing results
 * into the g_00858bxx globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_00859ae8;
extern int   g_00859ae4;
extern int   g_00858b60;
extern unsigned int g_008aaec0;
extern unsigned char g_0087bc34;
extern unsigned int g_007b73d8;
extern unsigned int g_008aaeb4;
extern int   g_00858b5c;
extern int   g_00858b58;
extern int   g_00858b00;
extern float g_0079f62c;
extern int   g_00858b40;
extern int   g_00858b44;
extern int   g_0085b4a0;
extern int   g_00858b28;
extern int   g_00858b20;
extern int   g_00858b2c;
extern int   g_00858b24;
extern int   g_00858b30;
extern int   g_00858b34;
extern double g_00858b68;
extern int   g_00858b6c;
extern double g_00858b70;
extern float g_00858988;
extern float g_0076c5b0;
extern float g_0085898c;
extern double g_00858b88;
extern int   g_00858b8c;
extern char  g_00858b90;
extern void __cdecl FUN_0075dc60(void);   /* __allmul */
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00707f50(void);
extern void __cdecl FUN_00707dd0(void);
extern void __cdecl FUN_00707e00(void);

__declspec(naked) void FUN_00707b40(void)
{
    __asm {
        mov     eax, dword ptr [g_00859ae8]
        sub     esp, 0x10
        test    eax, eax
        jz      L_b67
        mov     eax, dword ptr [g_00859ae4]
        test    eax, eax
        jnz     L_b5a
        call    FUN_00707dd0
L_b5a:
        mov     eax, dword ptr [g_00859ae8]
        test    eax, eax
        jnz     L_beb
L_b67:
        mov     eax, dword ptr [g_00859ae4]
        test    eax, eax
        jz      L_b7e
        call    FUN_00707e00
        mov     eax, dword ptr [g_00859ae8]
        test    eax, eax
        jnz     L_beb
L_b7e:
        mov     eax, dword ptr [g_00858b60]
        test    eax, eax
        jz      L_bc2
        mov     eax, dword ptr [g_008aaec0]
        test    eax, eax
        jnz     L_bb9
        mov     al, byte ptr [g_0087bc34]
        test    al, al
        jz      L_bab
        mov     eax, dword ptr [g_007b73d8]
        test    eax, eax
        jz      L_bb9
        mov     eax, dword ptr [g_008aaeb4]
        test    eax, eax
        jnz     L_bb9
L_bab:
        call    FUN_00707e00
        mov     eax, dword ptr [g_00859ae8]
        test    eax, eax
        jnz     L_beb
L_bb9:
        mov     eax, dword ptr [g_00858b60]
        test    eax, eax
        jnz     L_beb
L_bc2:
        mov     eax, dword ptr [g_008aaec0]
        test    eax, eax
        jnz     L_be6
        mov     al, byte ptr [g_0087bc34]
        test    al, al
        jz      L_beb
        mov     eax, dword ptr [g_007b73d8]
        test    eax, eax
        jz      L_be6
        mov     eax, dword ptr [g_008aaeb4]
        test    eax, eax
        jz      L_beb
L_be6:
        call    FUN_00707dd0
L_beb:
        mov     ecx, dword ptr [g_00858b5c]
        mov     edx, dword ptr [g_00858b58]
        mov     eax, dword ptr [g_00859ae8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    ecx
        push    edx
        mov     dword ptr [g_00859ae4], eax
        mov     eax, dword ptr [g_00858b00]
        push    0x0
        push    eax
        call    FUN_0075dc60
        mov     dword ptr [esp+0x10], eax
        mov     dword ptr [esp+0x14], edx
        fild    qword ptr [esp+0x10]
        fmul    dword ptr [g_0079f62c]
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_00858b40]
        mov     ebp, eax
        mov     eax, dword ptr [g_00858b44]
        mov     ebx, edx
        add     ebp, ecx
        adc     ebx, eax
L_c3e:
        call    FUN_00707f50
        mov     esi, eax
        cmp     dword ptr [g_0085b4a0], 0x1
        mov     edi, edx
        jz      L_c63
        mov     eax, dword ptr [g_00858b00]
        test    eax, eax
        jz      L_c63
        cmp     edi, ebx
        jl      L_c3e
        jg      L_c63
        cmp     esi, ebp
        jc      L_c3e
L_c63:
        mov     eax, dword ptr [g_00858b60]
        test    eax, eax
        jz      L_caf
        call    FUN_00707f50
        mov     ebx, dword ptr [g_00858b28]
        mov     ecx, dword ptr [g_00858b20]
        mov     ebp, dword ptr [g_00858b2c]
        sub     ecx, ebx
        mov     ebx, dword ptr [g_00858b24]
        sbb     ebx, ebp
        sub     ecx, dword ptr [g_00858b30]
        sbb     ebx, dword ptr [g_00858b34]
        add     ecx, esi
        adc     ebx, edi
        sub     ecx, eax
        sbb     ebx, edx
        mov     dword ptr [esp+0x10], ecx
        mov     dword ptr [esp+0x14], ebx
        fild    qword ptr [esp+0x10]
        jmp     L_cde
L_caf:
        mov     eax, dword ptr [g_00858b28]
        mov     ebp, dword ptr [g_00858b2c]
        mov     ebx, dword ptr [g_00858b30]
        mov     ecx, dword ptr [g_00858b34]
        mov     edx, esi
        sub     edx, eax
        mov     eax, edi
        sbb     eax, ebp
        sub     edx, ebx
        sbb     eax, ecx
        mov     dword ptr [esp+0x10], edx
        mov     dword ptr [esp+0x14], eax
        fild    qword ptr [esp+0x10]
L_cde:
        fild    qword ptr [g_00858b58]
        fdivp   st(1), st(0)
        fstp    qword ptr [g_00858b68]
        fild    qword ptr [g_00858b58]
        fstp    qword ptr [esp+0x18]
        call    FUN_00707f50
        mov     ebx, dword ptr [g_00858b30]
        mov     ecx, dword ptr [g_00858b34]
        sub     eax, ebx
        sbb     edx, ecx
        mov     dword ptr [esp+0x10], eax
        mov     dword ptr [esp+0x14], edx
        fild    qword ptr [esp+0x10]
        mov     dword ptr [g_00858b44], edi
        pop     edi
        mov     dword ptr [g_00858b40], esi
        fdiv    qword ptr [esp+0x14]
        pop     esi
        pop     ebp
        mov     dword ptr [g_00858b00], 0x0
        pop     ebx
        fstp    qword ptr [g_00858b70]
        fld     dword ptr [g_00858988]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jnz     L_da6
        fld     qword ptr [g_00858b68]
        fsub    qword ptr [g_00858b88]
        fld     dword ptr [g_00858988]
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_da6
        fld     dword ptr [g_0085898c]
        fadd    qword ptr [g_00858b88]
        fld     qword ptr [g_00858b68]
        fsub    st(0), st(1)
        fmul    qword ptr [esp+0x8]
        call    FUN_0075db4a
        fstp    qword ptr [g_00858b68]
        mov     ecx, dword ptr [g_00858b28]
        add     ecx, eax
        mov     eax, dword ptr [g_00858b2c]
        adc     eax, edx
        mov     dword ptr [g_00858b28], ecx
        mov     dword ptr [g_00858b2c], eax
L_da6:
        mov     ecx, dword ptr [g_00858b68]
        mov     edx, dword ptr [g_00858b6c]
        mov     dword ptr [g_00858b88], ecx
        mov     dword ptr [g_00858b8c], edx
        mov     byte ptr [g_00858b90], 0x0
        add     esp, 0x10
        ret
    }
}
