/*
 * FUN_007480B0 (571 B) — Socket server setup + command dispatch loop.
 * Creates/binds/listens a socket via custom function pointers, then loops
 * accepting commands and dispatching on a jump table (cases 0x67-0x6b).
 *
 * __stdcall, RET 4 (1 param). Returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_8aaca0)(int, int, int);         /* DAT_008aaca0 fn ptr */
extern unsigned int g_8b2960;                          /* DAT_008b2960 (socket) */
extern int (__cdecl *g_8aac84)(void);                  /* DAT_008aac84 fn ptr */
extern unsigned char g_87dd0a;                         /* DAT_0087dd0a */
extern unsigned short (__cdecl *g_8aaca4)(int);        /* DAT_008aaca4 fn ptr */
extern int (__cdecl *g_8aaca8)(int);                   /* DAT_008aaca8 fn ptr */
extern int (__cdecl *g_8aacac)(int, void *, int);      /* DAT_008aacac fn ptr */
extern int (__cdecl *g_8aacb0)(int, int);              /* DAT_008aacb0 fn ptr */
extern unsigned char g_8b2970;                         /* DAT_008b2970 */
extern int (__cdecl *g_8aacb4)(int, void *, void *);   /* DAT_008aacb4 fn ptr */
extern unsigned int g_8b2968;                          /* DAT_008b2968 */
extern unsigned int g_8b28e0;                          /* DAT_008b28e0 */
extern unsigned int g_8b28e4;                          /* DAT_008b28e4 */
extern unsigned int g_8b28e8;                          /* DAT_008b28e8 */
extern unsigned int g_8bd2d4;                          /* DAT_008bd2d4 */
extern unsigned int g_8b2974;                          /* DAT_008b2974 */
extern unsigned int g_8b2950;                          /* DAT_008b2950 */
extern unsigned int g_8b295c;                          /* DAT_008b295c */
extern int (__stdcall *g_76b168)(void *);              /* SetEvent IAT */
extern unsigned char g_8b294c;                         /* DAT_008b294c */
extern float g_8b2728;                                 /* DAT_008b2728 */
extern double g_7aa3d8;                                /* _DAT_007aa3d8 */
extern int (__cdecl *g_8aacc8)(int);                   /* DAT_008aacc8 fn ptr */

extern int __cdecl FUN_006fab90(const char *);
extern void __cdecl FUN_00747d50(void);
extern void __cdecl FUN_00747e00(void);
extern void __cdecl FUN_0075db4a(void);                /* _ftol */

__declspec(naked) int __stdcall FUN_007480b0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x2c
        push    esi
        xor     esi, esi
        push    esi
        push    0x1
        push    0x2
        call    dword ptr [g_8aaca0]
        cmp     eax, -0x1
        mov     dword ptr [g_8b2960], eax
        jnz     L_480ed
        call    dword ptr [g_8aac84]
        push    0x7aa3bc
        mov     byte ptr [g_87dd0a], 0x0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_480ed
        int     3
L_480ed:
        push    0xbba
        mov     word ptr [ebp - 0x1c], 0x2
        call    dword ptr [g_8aaca4]
        push    esi
        mov     word ptr [ebp - 0x1a], ax
        call    dword ptr [g_8aaca8]
        mov     ecx, dword ptr [g_8b2960]
        mov     dword ptr [ebp - 0x18], eax
        push    0x10
        lea     eax, [ebp - 0x1c]
        push    eax
        push    ecx
        call    dword ptr [g_8aacac]
        cmp     eax, -0x1
        jnz     L_4814e
        call    dword ptr [g_8aac84]
        cmp     eax, 0x2740
        __asm __emit 0x0F __asm __emit 0x84 __asm __emit 0xAD __asm __emit 0x01 __asm __emit 0x00 __asm __emit 0x00 /* jz L_482e2: rel32 84 AD 01 00 00 (MSVC6 computes 1B6, +9) */
        push    0x7aa3a0
        mov     byte ptr [g_87dd0a], 0x0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_4814e
        int     3
L_4814e:
        mov     edx, dword ptr [g_8b2960]
        push    0x3
        push    edx
        call    dword ptr [g_8aacb0]
        cmp     eax, -0x1
        jnz     L_48181
        call    dword ptr [g_8aac84]
        push    0x7aa3e0
        mov     byte ptr [g_87dd0a], 0x0
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_48181
        int     3
L_48181:
        mov     al, byte ptr [g_8b2970]
        test    al, al
        __asm __emit 0x0F __asm __emit 0x85 __asm __emit 0x54 __asm __emit 0x01 __asm __emit 0x00 __asm __emit 0x00 /* jnz L_482e2: rel32 85 54 01 00 00 (MSVC6 computes 1 5D, +9) */
        push    ebx
        push    edi
L_48190:
        mov     edx, dword ptr [g_8b2960]
        lea     eax, [ebp - 0x4]
        push    eax
        lea     ecx, [ebp - 0x2c]
        push    ecx
        push    edx
        xor     bl, bl
        mov     dword ptr [ebp - 0x4], 0x10
        call    dword ptr [g_8aacb4]
        cmp     eax, -0x1
        mov     dword ptr [g_8b2968], eax
        jnz     L_481c3
        call    dword ptr [g_8aac84]
        jmp     L_482d3
L_481c3:
        mov     cl, byte ptr [g_8b2970]
        test    cl, cl
        jnz     L_482cc
        jmp     L_481d8
L_481d3:
        mov     eax, dword ptr [g_8b2968]
L_481d8:
        test    bl, bl
        jnz     L_482cc
        push    0x8b28e0
        push    eax
        call    FUN_00747d50
        test    al, al
        jz      L_482c7
        mov     eax, dword ptr [g_8b28e4]
        add     eax, -0x67
        cmp     eax, 0x4
        ja      L_482ba
        jmp     dword ptr [eax*0x4 + 0x7482ec]
        mov     eax, dword ptr [g_8b28e8]
        mov     edx, dword ptr [g_8bd2d4]
        and     eax, 0xfffff
        lea     ecx, [eax + eax*0x4]
        mov     edx, dword ptr [edx + ecx*0x4 + 0x4]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        mov     eax, dword ptr [g_8b2968]
        not     ecx
        push    ecx
        push    edx
        push    eax
        mov     dword ptr [g_8b2974], esi
        call    FUN_00747e00
        test    al, al
        jnz     L_482ba
        jmp     L_482b8
        cmp     dword ptr [g_8b2950], esi
        mov     dword ptr [g_8b2974], esi
        jnz     L_482ba
        mov     ecx, dword ptr [g_8b295c]
        push    ecx
        mov     dword ptr [g_8b2950], 0x1
        call    dword ptr [g_76b168]
        jmp     L_482ba
        mov     edx, dword ptr [g_8b295c]
        push    edx
        mov     byte ptr [g_8b294c], 0x1
        call    dword ptr [g_76b168]
        jmp     L_482b8
        mov     dword ptr [g_8b2974], esi
        jmp     L_482ba
        fld     dword ptr [g_8b2728]
        fmul    qword ptr [g_7aa3d8]
        call    FUN_0075db4a
        mov     ecx, dword ptr [g_8b2968]
        mov     dword ptr [ebp - 0xc], eax
        push    0x8
        lea     eax, [ebp - 0xc]
        push    eax
        push    ecx
        mov     dword ptr [ebp - 0x8], edx
        call    FUN_00747e00
        test    al, al
        jnz     L_482ba
L_482b8:
        mov     bl, 0x1
L_482ba:
        mov     al, byte ptr [g_8b2970]
        test    al, al
        jz      L_481d3
L_482c7:
        mov     eax, dword ptr [g_8b2968]
L_482cc:
        push    eax
        call    dword ptr [g_8aacc8]
L_482d3:
        mov     al, byte ptr [g_8b2970]
        test    al, al
        jz      L_48190
        pop     edi
        pop     ebx
L_482e2:
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
        nop    
__emit 0x0B  /* jump table entry 0 (0x0074820B) */
__emit 0x82
__emit 0x74
__emit 0x00
        __emit 0x46  /* jump table entry 1 (0x00748246) */
        __emit 0x82
        __emit 0x74
        __emit 0x00
    }
}
