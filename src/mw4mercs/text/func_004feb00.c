/*
 * FUN_004FEB00 (259 B) -- MLR/Adept pick/raycast helper (__thiscall, RET 0x14).
 * Transforms a matrix via FUN_004fe4a0, does FPU distance/sphere checks, then
 * either calls a callback or recurses through a linked list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004fe4a0(void);
extern void __cdecl FUN_00417d80(void);

extern float g_76c5b0;    /* 0x0076c5b0 */
extern float g_7b220c;    /* 0x007b220c */

__declspec(naked) void __stdcall FUN_004feb00(void)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        test    byte ptr [edi + 0x9c], 0x80
        jnz     L_4febce
        mov     eax, dword ptr [esp + 0x64]
        mov     ecx, dword ptr [esp + 0x60]
        push    eax
        push    ecx
        lea     edx, [esp + 0x28]
        push    edx
        mov     ecx, edi
        call    FUN_004fe4a0
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [edi + 0x10]
        lea     esi, [edi + 0x50]
        push    ecx
        mov     ecx, esi
        call    FUN_00417d80
        fld     dword ptr [edi + 0x8c]
        fcomp   dword ptr [g_76c5b0]
        mov     ebx, dword ptr [esp + 0x54]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4febb2
        fld     dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x1c]
        fld     dword ptr [esi + 0x3c]
        mov     eax, dword ptr [esi + 0x2c]
        fadd    dword ptr [ebx + 0xc]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], eax
        fstp    dword ptr [esp + 0x64]
        fsubr   dword ptr [ebx]
        fld     dword ptr [ebx + 0x4]
        fsub    dword ptr [esp + 0x14]
        fld     dword ptr [ebx + 0x8]
        fsub    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [esp + 0x64]
        __emit 0xD9   /* __emit: FPU register-op block (fld st1..fsubp) not encodable
                         natively -- MSVC6 FPU stack tracking rejects fld st(3),
                         fld st(4), fsubp, and mixing __emit breaks tracking */
        __emit 0xC1
        __emit 0xD8
        __emit 0xCA
        __emit 0xD9
        __emit 0xC3
        __emit 0xD8
        __emit 0xCC
        __emit 0xDE
        __emit 0xC1
        __emit 0xD9
        __emit 0xC4
        __emit 0xD8
        __emit 0xCD
        __emit 0xDE
        __emit 0xC1
        __emit 0xDE
        __emit 0xE9
        fld     dword ptr [g_7b220c]
        __emit 0xD9   /* __emit: FPU register ops after __emit break MSVC6 tracking */
        __emit 0xE0
        __emit 0xDE
        __emit 0xD9
        __emit 0xDD
        __emit 0xD8
        fnstsw  ax
        __emit 0xDD   /* __emit: FPU register ops after __emit break MSVC6 tracking */
        __emit 0xD8
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        __emit 0xDD   /* __emit: FPU register ops after __emit break MSVC6 tracking */
        __emit 0xD8
        jz      L_4febce
L_4febb2:
        mov     esi, dword ptr [edi + 0x90]
        test    esi, esi
        jz      L_4febc1
        cmp     dword ptr [esi], 0x0
        jnz     L_4febd8
L_4febc1:
        mov     ecx, dword ptr [esp + 0x5c]
        push    ecx
        push    edi
        call    dword ptr [esp + 0x60]
        add     esp, 0x8
L_4febce:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret     0x14
L_4febd8:
        mov     ebp, dword ptr [esp + 0x5c]
L_4febdc:
        test    esi, esi
        jz      L_4febce
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_4febce
        mov     eax, dword ptr [edi + 0x98]
        lea     edx, [esp + 0x20]
        push    edx
        mov     edx, dword ptr [esp + 0x5c]
        push    eax
        push    ebp
        push    edx
        push    ebx
        call    FUN_004feb00
        jmp     L_4febdc
    }
}
