/*
 * FUN_0066bc90 (173 B) - AnimationStateEngine recursive time/weight update.
 * __thiscall, RET 0x8. Walks a state node (via EDI->0x10->0x30 table indexed
 * by param_2 + EDI->0x24), calls its virtual method +0x14 to get a value,
 * accumulates into *param_1, recurses on the child (node->0xc), then clamps
 * via DAT_007b220c and computes node->0x2c / node->0x28 weights.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7b220c;                /* DAT_007b220c */
extern void __cdecl FUN_0066bc90(void);   /* recursive thiscall via ECX */

__declspec(naked) void FUN_0066bc90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     edx, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [edi + 0x10]
        add     eax, edx
        mov     edx, dword ptr [ecx + 0x30]
        mov     esi, dword ptr [edx + eax*4]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     ebx, dword ptr [esp + 0x10]
        fadd    dword ptr [ebx]
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, -1
        fstp    dword ptr [ebx]
        jz      L_bcc7
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_0066bc90
L_bcc7:
        fld     dword ptr [ebx]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF   /* fnstsw ax - MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,1 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_bd06
        mov     ecx, dword ptr [g_7b220c]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        fabs
        fcomp   dword ptr [esp + 0x14]
        __emit 0xDF   /* fnstsw ax - MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41 - MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_bd06
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        fdiv    dword ptr [ebx]
        fstp    dword ptr [esi + 0x2c]
        jmp     L_bd0d
L_bd06:
        mov     dword ptr [esi + 0x2c], 0
L_bd0d:
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, -1
        jnz     L_bd22
        pop     edi
        mov     dword ptr [esi + 0x28], 0
        pop     esi
        pop     ebx
        ret     0x8
L_bd22:
        add     eax, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [ecx + 0x30]
        mov     eax, dword ptr [edx + eax*4]
        fld     dword ptr [eax + 0x2c]
        pop     edi
        fadd    dword ptr [eax + 0x28]
        fstp    dword ptr [esi + 0x28]
        pop     esi
        pop     ebx
        ret     0x8
    }
}
