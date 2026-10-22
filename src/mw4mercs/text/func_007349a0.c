/*
 * FUN_007349A0 (152 B) — RET 0x8 (2 stack params).
 *
 * If global 0x008AA288 is set, returns immediately. Otherwise, based on a
 * set of globals, calls FUN_007335C0 or FUN_00733570. Then walks a linked
 * list (head at 0x00857F38, next at +0x4, object at +0xC) and, for each node
 * whose object's +0xA8 field is 0/1/2/4, calls FUN_007348C0(param_1,param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* .data globals */
extern char g_8aa288;
extern int  g_8aaec0;
extern char g_87bc34;
extern int  g_7b73d8;
extern int  g_8aaeb4;
extern char g_8aa280;
extern int  g_857f38;

extern void FUN_007335c0(void);
extern void FUN_00733570(void);
extern void FUN_007348c0(void);

__declspec(naked) void func_007349a0(void)
{
    __asm {
        mov     al, byte ptr [g_8aa288]
        test    al, al
        push    ebx
        push    esi
        push    edi
        jnz     L_4a32
        mov     eax, dword ptr [g_8aaec0]
        test    eax, eax
        jnz     L_49e4
        mov     al, byte ptr [g_87bc34]
        test    al, al
        jz      L_49d4
        mov     eax, dword ptr [g_7b73d8]
        test    eax, eax
        jz      L_49e4
        mov     eax, dword ptr [g_8aaeb4]
        test    eax, eax
        jnz     L_49e4
L_49d4:
        mov     al, byte ptr [g_8aa280]
        test    al, al
        jz      L_49f2
        call    FUN_007335c0
        jmp     L_49f2
L_49e4:
        mov     al, byte ptr [g_8aa280]
        test    al, al
        jnz     L_49f2
        call    FUN_00733570
L_49f2:
        mov     esi, dword ptr [g_857f38]
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        test    esi, esi
        mov     eax, esi
        jz      L_4a32
L_4a00:
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_4a32
        mov     eax, dword ptr [ecx + 0xa8]
        cmp     eax, 0x4
        jz      L_4a29
        test    eax, eax
        jz      L_4a29
        cmp     eax, 0x1
        jz      L_4a29
        cmp     eax, 0x2
        /* __emit: MSVC6 miscomputes backward Jcc rel8 displacement (off by 6)
           when a call-reloc sits between branch and target */
        __emit 0x75
        __emit 0xD7
L_4a29:
        push    edi
        push    ebx
        call    FUN_007348c0
        /* __emit: MSVC6 miscomputes backward JMP rel8 displacement (off by 6) */
        __emit 0xEB
        __emit 0xCE
L_4a32:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }
}
