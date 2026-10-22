/*
 * FUN_00733410 (350 B) — Global update/dispatch routine.
 *
 * Walks a linked list of objects (head at 0x00857f38), and for each
 * qualifying entry performs a log/telemetry call (FUN_0075b4d0) with an
 * optional FPU-computed argument, plus per-object maintenance calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_008aa288;
extern unsigned char g_008aa289;
extern unsigned char g_008aa280;
extern unsigned char g_008aa28a;
extern unsigned char g_00858ae1;
extern unsigned char g_00858ae0;
extern unsigned char g_0087bc34;
extern unsigned char g_0087dd0a;
extern unsigned int  g_008aaec0;
extern unsigned int  g_007b73d8;
extern unsigned int  g_008aaeb4;
extern unsigned int  g_00857f38;
extern unsigned int  g_00856b8c;
extern float         g_0076c5b0;
extern double        g_0077b648;
extern void         *g_0076b0d8;

extern void __cdecl FUN_007335c0(void);
extern void __cdecl FUN_00733570(void);
extern int  __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075b4d0(void *a, int b);
extern void __cdecl FUN_00734260(void *a);
extern void __cdecl FUN_00733880(void *a);

__declspec(naked) void FUN_00733410(void)
{
    __asm {
        mov     al, byte ptr [g_008aa288]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        jnz     L_3356c
        cmp     dword ptr [g_008aaec0], ebx
        jnz     L_33457
        cmp     byte ptr [g_008aa289], bl
        jnz     L_33457
        cmp     byte ptr [g_0087bc34], bl
        jz      L_33448
        cmp     dword ptr [g_007b73d8], ebx
        jz      L_33457
        cmp     dword ptr [g_008aaeb4], ebx
        jnz     L_33457
L_33448:
        cmp     byte ptr [g_008aa280], bl
        jz      L_33464
        call    FUN_007335c0
        jmp     L_33464
L_33457:
        cmp     byte ptr [g_008aa280], bl
        jnz     L_33464
        call    FUN_00733570
L_33464:
        push    ebp
        mov     ebp, dword ptr [g_00857f38]
        push    esi
        push    edi
        cmp     ebp, ebx
        mov     eax, ebp
        jz      L_3355a
L_3346d:
        mov     esi, dword ptr [eax + 0xc]
        cmp     esi, ebx
        mov     ebp, dword ptr [ebp + 0x4]
        jz      L_3355a
        mov     ecx, dword ptr [esi + 0xa8]
        cmp     ecx, 0x4
        jz      L_334a4
        mov     eax, dword ptr [esi + 0xac]
        cmp     eax, ebx
        jz      L_334a4
        cmp     eax, 0x1
        jz      L_334a4
        cmp     ecx, 0x2
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (off-by-0xA) when call-relocs sit between branch and target */
        __emit 0x75
        __emit 0xC9
L_334a4:
        cmp     byte ptr [g_00858ae1], bl
        jz      L_33506
        cmp     byte ptr [g_008aa28a], bl
        jnz     L_33506
        cmp     byte ptr [g_00858ae0], bl
        jz      L_33506
        cmp     dword ptr [g_00856b8c], ebx
        jz      L_3352d
        mov     edi, dword ptr [esi + 0xc]
        cmp     edi, ebx
        jz      L_3352d
        fld     dword ptr [esi + 0xe0]
        mov     byte ptr [g_0087dd0a], 0x1
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_334ed
        push    0xffffd8f0
        push    edi
        jmp     L_33522
L_334ed:
        fldln2
        fld     dword ptr [esi + 0xe0]
        fyl2x
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        push    eax
        push    edi
        jmp     L_33522
L_33506:
        cmp     dword ptr [g_00856b8c], ebx
        jz      L_3352d
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        jz      L_3352d
        push    0xffffd8f0
        mov     byte ptr [g_0087dd0a], 0x1
        push    eax
L_33522:
        call    FUN_0075b4d0
        mov     byte ptr [g_0087dd0a], bl
L_3352d:
        cmp     byte ptr [g_008aa280], bl
        jnz     L_33543
        mov     ecx, esi
        call    FUN_00734260
        push    ebx
        call    dword ptr [g_0076b0d8]
L_33543:
        cmp     dword ptr [esi + 0xe8], ebx
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (off-by-0xA) when call-relocs sit between branch and target */
        __emit 0x0F
        __emit 0x85
        __emit 0x1E
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        push    esi
        call    FUN_00733880
        /* __emit: MSVC6 miscomputes backward jmp rel-offset (off-by-0xA) when call-relocs sit between branch and target */
        __emit 0xE9
        __emit 0x13
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
L_3355a:
        mov     al, byte ptr [g_00858ae1]
        pop     edi
        cmp     al, bl
        setz    al
        pop     esi
        mov     byte ptr [g_008aa28a], al
        pop     ebp
L_3356c:
        pop     ebx
        ret
    }
}
