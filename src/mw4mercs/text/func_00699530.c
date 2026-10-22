/*
 * FUN_00699530 (257 B) — __thiscall HUD element update: accumulates a
 * float param into +0x10, and if it stays below the +0xc ceiling,
 * walks the sub-object array and writes per-slot byte indices into the
 * +0x1c output buffer. Returns AL=1 if the ceiling was reached.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern void __cdecl FUN_00699140(void);

__declspec(naked) void FUN_00699530(void)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        push    esi
        fcomp   dword ptr [g_0076c5b0]
        mov     esi, ecx
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jz      L_69954c
        mov     dword ptr [esp + 0x8], 0x0
L_69954c:
        fld     dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi + 0x18]
        fadd    dword ptr [esi + 0x10]
        mov     eax, dword ptr [ecx + 0x4]
        fst     dword ptr [esi + 0x10]
        fcomp   dword ptr [eax + 0xc]
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x01
        jnz     L_69956c
        mov     al, 0x1
        pop     esi
        ret     0x4
L_69956c:
        mov     edx, dword ptr [ecx + 0x30]
        push    edi
        shr     edx, 0x4
        xor     edi, edi
        test    edx, edx
        jle     L_69962a
        push    ebx
        push    ebp
        xor     ebp, ebp
L_699581:
        mov     al, byte ptr [esi + 0x24]
        test    al, al
        jz      L_699597
        mov     eax, dword ptr [ecx + 0x2c]
        mov     al, byte ptr [eax + ebp + 0xd]
        test    al, al
        jnz     L_699597
        cmp     al, 0x4
        jz      L_699613
L_699597:
        mov     ecx, dword ptr [ecx + 0x2c]
        lea     eax, [ecx + ebp]
        mov     cl, byte ptr [eax + 0xc]
        test    cl, cl
        jbe     L_699613
        xor     edx, edx
        mov     dl, byte ptr [eax + 0xf]
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [eax + 0x14]
        cmp     dword ptr [ecx + edx*4], 0xff
        jz      L_699613
        mov     edx, dword ptr [esi + 0x1c]
        xor     ebx, ebx
        mov     bl, byte ptr [edx + edi]
        cmp     bl, 0xff
        jz      L_699613
        and     ebx, 0xff
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_00699140
        test    eax, eax
        jz      L_699613
L_6995d8:
        fld     dword ptr [eax]
        fcomp   dword ptr [esi + 0x10]
        /* __emit: fnstsw ax -> MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: test ah,imm8 -> MSVC6 rejects test ah,imm8 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x41
        jz      L_699604
        mov     eax, dword ptr [esi + 0x18]
        mov     ecx, dword ptr [eax + 0x2c]
        xor     edx, edx
        mov     dl, byte ptr [ecx + ebp + 0xc]
        inc     ebx
        cmp     ebx, edx
        jge     L_69960c
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_00699140
        test    eax, eax
        jnz     L_6995d8
        jmp     L_699613
L_699604:
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [eax + edi], bl
        jmp     L_699613
L_69960c:
        mov     ecx, dword ptr [esi + 0x1c]
        mov     byte ptr [ecx + edi], 0xff
L_699613:
        mov     ecx, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ecx + 0x30]
        inc     edi
        shr     edx, 0x4
        add     ebp, 0x10
        cmp     edi, edx
        jl      L_699581
        pop     ebp
        pop     ebx
L_69962a:
        pop     edi
        xor     al, al
        pop     esi
        ret     0x4
    }
}
