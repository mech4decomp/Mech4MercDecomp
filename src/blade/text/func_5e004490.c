/*
 * FUN_5e004490 (284 B) — DirectDraw wrapper: vertex-split interpolation loop.
 * 5 stack params (RET 0x14). Calls FUN_5e0042c0 to lerp vertices.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_5e035aa0;
extern void __cdecl FUN_5e0042c0(void);

__declspec(naked) void FUN_5e004490(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [ebp + eax*4 - 4]
        push    edi
        mov     ebx, dword ptr [esi]
        xor     edx, edx
        mov     edi, dword ptr [ecx + 0x2c]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], edi
        jle     L_5a0
        mov     edi, dword ptr [esp + 0x24]
        lea     esi, [ebx + ebx*2]
        mov     dword ptr [esp + 0x10], eax
        lea     esi, [ebx + esi*4]
        lea     esi, [edi + esi*4]
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x20], ebp
L_4d1:
        mov     eax, dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x1c]
        mov     ebp, dword ptr [eax]
        fcomp   dword ptr [g_5e035aa0]
        mov     eax, dword ptr [ebp + 0x2c]
        mov     dword ptr [esp + 0x18], eax
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jz      L_525
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_5e035aa0]
        fnstsw ax
        __emit 0xF6            /* __emit: TEST AH,imm8 (F6 C4 01) */
        les eax, dword ptr [ecx]
        jnz     L_56c
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x1c]
        push    esi
        inc     edx
        push    0x100
        push    ecx
        mov     dword ptr [esp + 0x30], edx
        mov     edx, dword ptr [esp + 0x24]
        fstp    dword ptr [esp]
        push    edx
        mov     dword ptr [edi], esi
        push    ecx
        add     edi, 0x4
        push    ebp
        jmp     L_55f
L_525:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_5e035aa0]
        mov     dword ptr [edi], ecx
        inc     edx
        add     edi, 0x4
        fnstsw ax
        test ah, 0x41
        jz      L_56c
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        push    0x100
        push    ecx
        inc     edx
        mov     dword ptr [edi], esi
        fstp    dword ptr [esp]
        push    eax
        push    ebp
        mov     dword ptr [esp + 0x38], edx
        add     edi, 0x4
        push    ecx
L_55f:
        call    FUN_5e0042c0
        inc     ebx
        add     esi, 0x34
        mov     edx, dword ptr [esp + 0x24]
L_56c:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, ebp
        mov     ebp, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x20], ebp
        mov     dword ptr [esp + 0x10], eax
        jnz     L_4d1
        mov     ecx, dword ptr [esp + 0x28]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], ebx
        mov     eax, edx
        pop     ebx
        pop     ecx
        ret     0x14
L_5a0:
        mov     dword ptr [esi], ebx
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, edx
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
