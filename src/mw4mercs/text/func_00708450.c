/*
 * FUN_00708450 (350 B) — gosScript message pump: drains the Win32 message
 * queue (PeekMessage/TranslateMessage/DispatchMessage), with foreground-
 * window dialog handling, then does timing/sleep bookkeeping.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00896cb5;
extern char g_00858bb0;
extern int g_00858bb4;
extern int g_00859278;
extern int g_00858bf8;
extern int g_00858c04;
extern char g_00858ac4;
extern char g_00858ae0;
extern char g_00858ae1;
extern int g_00858aa0;
extern double g_00858c20;
extern int g_00858c24;
extern double g_0077eca8;
extern double g_0076d970;
extern double g_0077b648;
extern char g_008b27d1;
extern void *g_0076b4c0;   /* IAT: WaitMessage */
extern void *g_0076b550;   /* IAT: PeekMessageA */
extern void *g_0076b4c4;   /* IAT: GetForegroundWindow */
extern void *g_0076b554;   /* IAT: TranslateMessage */
extern void *g_0076b558;   /* IAT: DispatchMessageA */
extern void *g_0076b4c8;   /* IAT: GetForegroundWindow */
extern void *g_0076b0d8;   /* IAT: Sleep */
extern void __cdecl FUN_0072cde0(void);
extern void __cdecl FUN_00709120(void);
extern double __cdecl FUN_00707e90(void);
extern int __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00708450(void)
{
    __asm {
        mov     al, byte ptr [g_00896cb5]
        sub     esp, 8
        test    al, al
        jz      L_8462
        call    dword ptr [g_0076b4c0]
    L_8462:
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [g_0076b550]
        push    edi
        push    1
        push    0
        push    0
        push    0
        push    offset g_00858bb0
        call    esi
        test    eax, eax
        jz      L_84ec
        mov     edi, dword ptr [g_0076b4c4]
        mov     ebp, dword ptr [g_0076b554]
        mov     ebx, dword ptr [g_0076b558]
    L_8491:
        cmp     dword ptr [g_00858bb4], 0x12
        jz      L_84ec
        cmp     dword ptr [g_00859278], 1
        jnz     L_84bd
        call    dword ptr [g_0076b4c8]
        cmp     eax, dword ptr [g_00858bf8]
        jz      L_84bd
        push    offset g_00858bb0
        push    eax
        call    edi
        test    eax, eax
        jnz     L_84d9
    L_84bd:
        push    offset g_00858bb0
        call    FUN_0072cde0
        test    al, al
        jnz     L_84d9
        push    offset g_00858bb0
        call    ebp
        push    offset g_00858bb0
        call    ebx
    L_84d9:
        push    1
        push    0
        push    0
        push    0
        push    offset g_00858bb0
        call    esi
        test    eax, eax
        jnz     L_8491
    L_84ec:
        mov     eax, dword ptr [g_00858c04]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      L_8508
        mov     dword ptr [g_00858c04], 0
        call    FUN_00709120
    L_8508:
        cmp     dword ptr [g_00858bb4], 0x12
        jnz     L_8518
        mov     byte ptr [g_00858ac4], 1
    L_8518:
        mov     al, byte ptr [g_00858ae0]
        test    al, al
        jz      L_8582
        mov     al, byte ptr [g_00858ae1]
        test    al, al
        jz      L_8582
        cmp     dword ptr [g_00858aa0], 3
        jnz     L_85aa
        call    FUN_00707e90
        __emit 0xDD   /* __emit: MSVC6 drops the 00 disp byte for fst [esp+0] */
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fsub    qword ptr [g_00858c20]
        fsubr   qword ptr [g_0077eca8]
        fcom    qword ptr [g_0076d970]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_8569
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        push    eax
        call    dword ptr [g_0076b0d8]
        jmp     L_856b
    L_8569:
        fstp    st(0)
    L_856b:
        __emit 0x8B   /* __emit: MSVC6 drops the 00 disp byte for mov eax,[esp+0] */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     ecx, dword ptr [esp+4]
        mov     dword ptr [g_00858c20], eax
        mov     dword ptr [g_00858c24], ecx
        add     esp, 8
        ret
    L_8582:
        mov     eax, dword ptr [g_00858aa0]
        sub     eax, 0
        jz      L_8599
        dec     eax
        jnz     L_85aa
        call    dword ptr [g_0076b4c0]
        add     esp, 8
        ret
    L_8599:
        mov     al, byte ptr [g_008b27d1]
        test    al, al
        jnz     L_85aa
        push    0x14
        call    dword ptr [g_0076b0d8]
    L_85aa:
        add     esp, 8
        ret
    }
}
