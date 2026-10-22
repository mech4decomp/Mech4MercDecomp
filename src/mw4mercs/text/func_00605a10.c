/*
 * FUN_00605a10 (601 B) — __thiscall (RET 0x8). Animation-blend weight
 * computation: sums blend weights across two linked lists, then recursively
 * distributes weights through child blend nodes, dispatching via
 * FUN_00606540 / FUN_00605c80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern int g_007f27a8;
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00605a10(void);
extern void __cdecl FUN_00606540(void);
extern void __cdecl FUN_00605c80(void);

__declspec(naked) void FUN_00605a10(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x24]
        lea     eax, [ecx + 0x1c]
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx + 0x24]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [eax]
        push    edi
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x20], 0x78b9c0
        mov     dword ptr [esp + 0x14], 0
        mov     dword ptr [esp + 0x18], 0
        xor     edi, edi
        call    FUN_0040c0e0
        test    eax, eax
        jz      L_after1
L_loop1:
        fld     dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x20]
        fadd    dword ptr [eax + 0x10]
        inc     edi
        fstp    dword ptr [esp + 0x14]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L_loop1
L_after1:
        test    esi, esi
        jz      L_after2
L_loop2:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 4]
        jz      L_after2
        fld     dword ptr [eax + 0x20]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        jmp     L_after1
L_after2:
        fld     dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x10], 0
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L_skip
        cmp     edi, 1
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [esp + 0x28], eax
        jnz     L_else
        test    eax, eax
        jz      L_else0
        mov     eax, dword ptr [eax]
        push    ebp
        push    eax
        mov     ecx, ebx
        call    FUN_00605a10
        jmp     L_skip
L_else0:
        xor     eax, eax
        push    ebp
        push    eax
        mov     ecx, ebx
        call    FUN_00605a10
        jmp     L_skip
L_else:
        mov     ecx, dword ptr [g_007f27a8]
        call    FUN_00416110
        mov     esi, eax
        test    esi, esi
        jz      L_esi0
        mov     edi, dword ptr [ebp]
        push    0x454eb0
        push    0x46
        push    0xc
        lea     edx, [esi + 0x394]
        push    edx
        call    FUN_00406c90
        push    0x605c70
        push    0x46
        push    0x10
        lea     eax, [esi + 0x6dc]
        push    eax
        call    FUN_00406c90
        push    0x435c30
        push    0x46
        push    0xc
        lea     ecx, [esi + 0xb3c]
        push    ecx
        call    FUN_00406c90
        xor     eax, eax
        test    edi, edi
        mov     dword ptr [esi], edi
        jle     L_esi1
L_zero:
        mov     byte ptr [esi + eax + 4], 0
        mov     ecx, dword ptr [esi]
        inc     eax
        cmp     eax, ecx
        jl      L_zero
        jmp     L_esi1
L_esi0:
        xor     esi, esi
L_esi1:
        mov     edx, dword ptr [esp + 0x28]
L_loop3:
        test    edx, edx
        jz      L_esi2
        mov     ecx, dword ptr [edx]
        test    ecx, ecx
        mov     edx, dword ptr [edx + 4]
        mov     dword ptr [esp + 0x28], edx
        jz      L_esi2
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_loop3
        fld     dword ptr [ecx + 0x10]
        mov     dword ptr [esp + 0x34], 0
        fdiv    dword ptr [esp + 0x1c]
        fld     st(0)
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L_div
        fdiv    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x34]
        jmp     L_afterdiv
L_div:
        fstp    st(0)
L_afterdiv:
        push    esi
        push    ecx
        mov     ecx, ebx
        call    FUN_00605a10
        mov     edx, dword ptr [esp + 0x34]
        push    edx
        push    esi
        push    ebp
        mov     ecx, ebx
        call    FUN_00606540
        jmp     L_esi1
L_esi2:
        test    esi, esi
        jz      L_skip
        mov     ecx, dword ptr [g_007f27a8]
        push    esi
        call    FUN_00416130
L_skip:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L_end
        mov     eax, dword ptr [esp + 0x30]
        mov     esi, dword ptr [eax + 0x24]
L_loop4:
        test    esi, esi
        jz      L_end
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 4]
        jz      L_end
        fld     dword ptr [ecx + 0x20]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_loop4
        fld     dword ptr [ecx + 0x20]
        mov     dword ptr [esp + 0x30], 0
        fdiv    dword ptr [esp + 0x1c]
        fld     st(0)
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x40: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L_div2
        fdiv    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x30]
        push    edx
        push    ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_00605c80
        jmp     L_loop4
L_div2:
        mov     edx, dword ptr [esp + 0x30]
        fstp    st(0)
        push    edx
        push    ecx
        push    ebp
        mov     ecx, ebx
        call    FUN_00605c80
        jmp     L_loop4
L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     8
    }
}
