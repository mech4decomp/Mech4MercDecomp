/*
 * FUN_00677830 (142 B @ 0x677830) - __cdecl. Dispatches through a vtable,
 * formats an error via _snprintf IAT when a float field exceeds a threshold.
 * (Block 0x677829 is 259 B and contains a second function at 0x6778C0.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00675850(void);
extern float g_0076c5b0;
extern void *g_0076b424;   /* _snprintf IAT */
extern char g_797bd8[];

__declspec(naked) void FUN_00677830(void)
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
        setne   bl
        call    FUN_00675850
        mov     cl, al
        mov     eax, dword ptr [esi + 0x10]
        add     esp, 0x14
        cmp     eax, 0x14
        jne     L_6778b7
        test    bl, bl
        jne     L_677881
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x1c]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], 0
        call    dword ptr [edx + 4]
        mov     cl, 1
L_677881:
        fld     dword ptr [edi + 0x78]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax (ref is no-WAIT DF E0) */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_6778b7
        fld     dword ptr [edi + 0x78]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ecx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    OFFSET g_797bd8
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add     esp, 0x14
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
L_6778b7:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, cl
        pop     ebx
        ret
    }
}
