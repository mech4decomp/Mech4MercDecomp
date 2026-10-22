/*
 * FUN_00674890 (379 B) — GameData field validator / setter dispatcher.
 *
 * Calls FUN_00502370 then dispatches on param_2[4] (case 6..10) via a
 * jump table at 0x00674A0C. Each case validates a field and either calls a
 * virtual setter or emits an _snprintf error message.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00502370(void *a, void *b, void *c, void *d, void *e);
extern void *g_iat_76b424;   /* _snprintf */
extern float g_76c5b0;       /* 0.0f constant */

__declspec(naked) void func_00674890(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     bl, byte ptr [eax]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setnz   bl
        call    FUN_00502370
        mov     cl, al
        mov     eax, dword ptr [esi + 0x10]
        add     eax, -0x6
        add     esp, 0x14
        cmp     eax, 0x4
        ja      L_749a2
        __emit 0xFF  /* __emit: jump-table dispatch FF 24 85 [eax*4+imm32]; MSVC6 re-bases via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x0C
        __emit 0x4A
        __emit 0x67
        __emit 0x00
        /* case 6 */
        test    bl, bl
        jnz     L_748f4
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x20]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], 0x1
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_748f4:
        mov     edi, dword ptr [edi + 0x28]
        test    edi, edi
        jge     L_749a2
        push    edi
        push    0x797304
        jmp     L_7498f
        /* case 7 */
        test    bl, bl
        jnz     L_7492a
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x20]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], 0x0
        call    dword ptr [eax + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_7492a:
        fld     dword ptr [edi + 0x1c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6  /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_749a2
        fld     dword ptr [edi + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    0x7972e0
        push    ebp
        push    eax
        call    dword ptr [g_iat_76b424]
        add     esp, 0x14
        pop     edi
        pop     esi
        xor     cl, cl
        pop     ebp
        mov     al, cl
        pop     ebx
        ret
        /* case 8 */
        test    bl, bl
        jnz     L_74982
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x20]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], 0x0
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
L_74982:
        mov     edi, dword ptr [edi + 0x20]
        test    edi, edi
        jge     L_749a2
        push    edi
        push    0x7972b4
L_7498f:
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx]
        push    ebp
        push    edx
        call    dword ptr [g_iat_76b424]
        add     esp, 0x10
        xor     cl, cl
L_749a2:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, cl
        pop     ebx
        ret
        /* case 9 */
        test    bl, bl
        jnz     L_749c4
        mov     eax, dword ptr [esi]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0x0
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
L_749c4:
        mov     edi, dword ptr [edi + 0x24]
        test    edi, edi
        jge     L_749a2
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [edx]
        push    edi
        push    0x797284
        push    ebp
        push    eax
        call    dword ptr [g_iat_76b424]
        add     esp, 0x10
        pop     edi
        pop     esi
        xor     cl, cl
        pop     ebp
        mov     al, cl
        pop     ebx
        ret
        /* case 10 */
        test    bl, bl
        jnz     L_749a2
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x20]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    dword ptr [edx + 0x4]
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
    }
}
