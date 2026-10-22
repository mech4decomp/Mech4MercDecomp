/*
 * FUN_0070a6a0 (369 B) — Display-mode / gamma-table setup.
 *
 * Reads a set of global config dwords (0x00858940/44/50/56/57/58),
 * normalizes a resolution into 0x007b73dc, writes a batch of derived
 * globals, then fills a 256-entry lookup table (0x00859c2b) via
 * _CIpow (0x0075db86). Final conditional init of 0x00858ab0/ab5.
 *
 * __cdecl, no args, returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070b670(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0074aae0(void);
extern void __cdecl FUN_0070c540(void);

extern int  g_858940;
extern int  g_858944;
extern int  g_858950;
extern char g_858956;
extern char g_858957;
extern char g_858958;
extern char g_859aff;

extern int  g_8aaec8;
extern int  g_8aaecc;
extern int  g_8aaed0;
extern int  g_8aaed4;
extern int  g_8aaed8;
extern int  g_8aaedc;
extern int  g_8aaee0;

extern int  g_7b73dc;
extern int  g_85a1e0;
extern int  g_85a1e4;
extern int  g_85a1e8;
extern int  g_85a1ec;
extern int  g_85a268;
extern char g_85a26c;
extern char g_85a1de;
extern char g_85a1dd;
extern int  g_858ab0;
extern char g_858ab5;

extern float  g_7a1678;
extern double g_76d968;
extern double g_7a1668;
extern float  g_76dd60;

__declspec(naked) void __cdecl FUN_0070a6a0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        call    FUN_0070b670
        mov     ecx, dword ptr [g_858940]
        xor     ebx, ebx
        cmp     ecx, 0x200
        mov     dword ptr [g_8aaec8], ebx
        mov     dword ptr [g_8aaecc], ebx
        mov     dword ptr [g_8aaed0], ebx
        jnz     L70A6D2
        mov     dword ptr [g_7b73dc], ecx
        jmp     L70A728
L70A6D2:
        cmp     ecx, 0x280
        jnz     L70A6E2
        mov     dword ptr [g_7b73dc], ecx
        jmp     L70A728
L70A6E2:
        cmp     ecx, 0x320
        jnz     L70A6F2
        mov     dword ptr [g_7b73dc], ecx
        jmp     L70A728
L70A6F2:
        cmp     ecx, 0x400
        jnz     L70A702
        mov     dword ptr [g_7b73dc], ecx
        jmp     L70A728
L70A702:
        cmp     ecx, 0x500
        jnz     L70A712
        mov     dword ptr [g_7b73dc], ecx
        jmp     L70A728
L70A712:
        xor     eax, eax
        cmp     ecx, 0x640
        setnz   al
        dec     eax
        and     eax, 0x640
        mov     dword ptr [g_7b73dc], eax
L70A728:
        mov     eax, dword ptr [g_858950]
        xor     edx, edx
        cmp     eax, 1
        setz    dl
        mov     dword ptr [g_85a1e0], eax
        mov     dword ptr [g_85a1ec], ecx
        mov     ecx, dword ptr [g_858944]
        mov     dword ptr [g_85a1e4], ebx
        mov     dword ptr [g_85a1e8], ecx
        mov     dword ptr [g_85a268], 0x3F800000
        mov     dword ptr [g_8aaed8], edx
        xor     edx, edx
        cmp     eax, 3
        setz    dl
        mov     byte ptr [g_85a26c], bl
        mov     dword ptr [g_8aaed4], edx
        xor     edx, edx
        cmp     eax, ebx
        mov     al, byte ptr [g_858958]
        setz    dl
        mov     byte ptr [g_85a1de], al
        mov     dword ptr [g_8aaedc], edx
        xor     edx, edx
        mov     dl, byte ptr [g_858957]
        xor     esi, esi
        mov     dword ptr [esp + 8], esi
        mov     dword ptr [g_8aaee0], edx
        mov     dl, byte ptr [g_858956]
        mov     byte ptr [g_85a1dd], dl
L70A7AD:
        fild    dword ptr [esp + 8]
        fmul    dword ptr [g_7a1678]
        fld     qword ptr [g_76d968]
        call    FUN_0075db86
        fmul    qword ptr [g_7a1668]
        inc     esi
        cmp     esi, 0x100
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 8]
        mov     dl, byte ptr [esp + 8]
        mov     byte ptr [esi + 0x859C2B], dl
        mov     dword ptr [esp + 8], esi
        jl      L70A7AD
        call    FUN_0074aae0
        mov     al, byte ptr [g_859aff]
        pop     esi
        cmp     al, bl
        pop     ebx
        jnz     L70A80F
        call    FUN_0070c540
        mov     dword ptr [g_858ab0], 1
        mov     byte ptr [g_858ab5], 1
L70A80F:
        pop     ecx
        ret
    }
}
