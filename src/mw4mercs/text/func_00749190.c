/*
 * FUN_00749190 (255 B) — __fastcall (ECX = this). Clears one of three
 * global "slot" pointers (0x87c110/0x87c118/0x87c120) matching ESI=this->0x10,
 * then either allocates a node (0x84 bytes) or frees via FUN_00740db0,
 * decrements a global counter, calls FUN_00753930(this), clears a flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_87c110;
extern int g_87c118;
extern int g_87c120;
extern int g_87c1d4;
extern int g_87c11c;
extern int g_87c1d8;
extern int g_87c114;
extern int g_87c1dc;
extern int g_87c10c;
extern int g_85a248;
extern int g_8b2520;
extern int *g_8b79e4;
extern int g_8b288c;

extern void __stdcall FUN_0074a620(int a, int b, int c);
extern void *__stdcall FUN_006f3c80(int a, int b);
extern void __stdcall FUN_00735710(int a, void *b);
extern void __stdcall FUN_00740db0(int a);
extern void __fastcall FUN_00753930(void *this);

__declspec(naked) void __fastcall FUN_00749190(void *this)
{
    __asm {
        mov     eax, dword ptr [g_87c110]
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        mov     esi, dword ptr [ebx + 0x10]
        xor     ebp, ebp
        cmp     esi, eax
        mov     eax, dword ptr [g_87c120]
        jz      L_b4
        cmp     esi, dword ptr [g_87c118]
        jz      L_b4
        cmp     esi, eax
        jnz     L_229
L_b4:
        cmp     esi, eax
        jnz     L_d7
        mov     eax, dword ptr [g_85a248]
        push    ebp
        push    ebp
        push    eax
        mov     dword ptr [g_87c1d4], ebp
        mov     dword ptr [g_87c11c], ebp
        mov     dword ptr [g_87c120], ebp
        call    FUN_0074a620
L_d7:
        cmp     esi, dword ptr [g_87c118]
        jnz     L_200
        mov     ecx, dword ptr [g_85a248]
        push    ebp
        push    0x1
        push    ecx
        mov     dword ptr [g_87c1d8], ebp
        mov     dword ptr [g_87c114], ebp
        mov     dword ptr [g_87c118], ebp
        call    FUN_0074a620
L_200:
        cmp     esi, dword ptr [g_87c110]
        jnz     L_229
        mov     edx, dword ptr [g_85a248]
        push    ebp
        push    0x2
        push    edx
        mov     dword ptr [g_87c1dc], ebp
        mov     dword ptr [g_87c10c], ebp
        mov     dword ptr [g_87c110], ebp
        call    FUN_0074a620
L_229:
        test    dword ptr [g_8b2520], 0x400000
        jz      L_26f
        push    edi
        push    ebp
        push    0x84
        call    FUN_006f3c80
        mov     edi, eax
        lea     eax, [edi + 0x4]
        push    eax
        push    esi
        mov     dword ptr [edi], ebp
        mov     dword ptr [eax], 0x7c
        mov     dword ptr [edi + 0x80], esi
        call    FUN_00735710
        mov     eax, dword ptr [g_8b79e4]
        cmp     eax, ebp
        jz      L_266
        mov     dword ptr [edi], eax
L_266:
        mov     dword ptr [g_8b79e4], edi
        pop     edi
        jmp     L_275
L_26f:
        push    esi
        call    FUN_00740db0
L_275:
        dec     dword ptr [g_8b288c]
        mov     ecx, ebx
        call    FUN_00753930
        /* __emit: MSVC6 peephole-encodes AND word ptr [ebx+4],0xfffd as 83 /4 imm8 sign-extended (66 83 63 04 FD); ref needs 81 /4 imm16 (66 81 63 04 FD FF) */
        __emit 0x66
        __emit 0x81
        __emit 0x63
        __emit 0x04
        __emit 0xFD
        __emit 0xFF
        pop     esi
        mov     dword ptr [ebx + 0x10], ebp
        pop     ebp
        pop     ebx
        ret
    }
}
