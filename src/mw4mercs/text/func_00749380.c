/*
 * FUN_00749380 (257 B) — __cdecl, no args. Walks a linked list from
 * DAT_00857f34, conditionally calling FUN_0075b4d0 / FUN_007498a0.
 * Contains FPU log2 math (FLDLN2/FYL2X/FMUL) and an _ftol conversion.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b79ec;
extern char g_858990;
extern int g_8aaec0;
extern char g_87bc34;
extern int g_7b73d8;
extern int g_8aaeb4;
extern int g_857f34;
extern char g_858ae1;
extern char g_8aa28a;
extern char g_858ae0;
extern int g_856b8c;
extern char g_87dd0a;
extern float g_76c5b0;
extern double g_77b648;

extern long __cdecl FUN_0075db4a(void);
extern void __stdcall FUN_0075b4d0(int a, int b);
extern void __stdcall FUN_007498a0(void);

__declspec(naked) void __stdcall FUN_00749380(void)
{
    __asm {
        mov     al, byte ptr [g_8b79ec]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        push    esi
        jz      L_47e
        cmp     byte ptr [g_858990], bl
        jnz     L_47e
        cmp     dword ptr [g_8aaec0], ebx
        jnz     L_47e
        cmp     byte ptr [g_87bc34], bl
        jz      L_3c9
        cmp     dword ptr [g_7b73d8], ebx
        jz      L_47e
        cmp     dword ptr [g_8aaeb4], ebx
        jnz     L_47e
L_3c9:
        mov     esi, dword ptr [g_857f34]
        cmp     esi, ebx
        jz      L_47e
        push    edi
L_3d8:
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, ebx
        jz      L_3e8
        cmp     eax, 0x1
        jnz     L_472
L_3e8:
        cmp     byte ptr [g_858ae1], bl
        jz      L_444
        cmp     byte ptr [g_8aa28a], bl
        jnz     L_444
        cmp     byte ptr [g_858ae0], bl
        jz      L_444
        cmp     dword ptr [g_856b8c], ebx
        jz      L_46b
        mov     edi, dword ptr [esi + 0x8]
        cmp     edi, ebx
        jz      L_46b
        fld     dword ptr [esi + 0x20]
        mov     byte ptr [g_87dd0a], 0x1
        fcomp   dword ptr [g_76c5b0]
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 40 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jz      L_42e
        push    0xffffd8f0
        push    edi
        jmp     L_460
L_42e:
        fldln2
        fld     dword ptr [esi + 0x20]
        fyl2x
        fmul    qword ptr [g_77b648]
        call    FUN_0075db4a
        push    eax
        push    edi
        jmp     L_460
L_444:
        cmp     dword ptr [g_856b8c], ebx
        jz      L_46b
        mov     eax, dword ptr [esi + 0x8]
        cmp     eax, ebx
        jz      L_46b
        push    0xffffd8f0
        mov     byte ptr [g_87dd0a], 0x1
        push    eax
L_460:
        call    FUN_0075b4d0
        mov     byte ptr [g_87dd0a], bl
L_46b:
        mov     ecx, esi
        call    FUN_007498a0
L_472:
        mov     esi, dword ptr [esi + 0x38]
        cmp     esi, ebx
        jnz     L_3d8
        pop     edi
L_47e:
        pop     esi
        pop     ebx
        ret
    }
}
