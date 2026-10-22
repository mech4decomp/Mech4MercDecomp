/*
 * FUN_00588C10 (2298 B) — __thiscall (ECX = this, 1 stack param, RET 4).
 * Gameplay update: reads a mode byte [esi+0x4BC], picks a scale factor,
 * drives a bone (vtable at [esi+0x78]), and performs a large amount of
 * FPU clamping/interpolation on [esi+0x43C]/[esi+0x440] against a set of
 * limits in the target object (ebp+0x2xx), with several helper calls
 * (FUN_0054A780/54A7C0/559BE0/415230/5CED20/5ACAE0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d598;
extern float g_0078156c;
extern float g_00782358;
extern float g_00782354;
extern float g_0076d064;
extern float g_0077de98;
extern float g_0078155c;
extern float g_00782350;
extern float g_0077d0fc;
extern float g_00781574;
extern unsigned long g_007f23d8;

extern void __cdecl FUN_0054a780(void);
extern void __cdecl FUN_0054a7c0(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005ced20(void);
extern void __cdecl FUN_005acae0(void);

__declspec(naked) void FUN_00588C10(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        mov     ebp, eax
        mov     al, byte ptr [esi + 0x2f8]
        xor     ebx, ebx
        cmp     al, bl
        je      l_8c3c
        mov     dword ptr [esi + 0x42c], ebx
        mov     dword ptr [esi + 0x448], ebx
    l_8c3c:
        xor     ecx, ecx
        mov     cl, byte ptr [esi + 0x4bc]
        mov     dword ptr [esp + 0x10], 0x3f800000
        mov     eax, ecx
        and     eax, 0xff
        sub     eax, 2
        je      l_8c76
        sub     eax, 0xa
        je      l_8c6c
        sub     eax, 0xf
        jne     l_8c7e
        mov     dword ptr [esp + 0x10], 0
        jmp     l_8c7e
    l_8c6c:
        mov     dword ptr [esp + 0x10], 0x3f733333
        jmp     l_8c7e
    l_8c76:
        mov     dword ptr [esp + 0x10], 0x3f400000
    l_8c7e:
        cmp     cl, 0x19
        jb      l_8c9f
        cmp     cl, 0x1b
        ja      l_8c9f
        mov     edi, dword ptr [esi + 0x3b0]
        cmp     edi, ebx
        je      l_8cbb
        push    8
        mov     ecx, edi
        call    FUN_0054a780
        push    0x27
        jmp     l_8cb4
    l_8c9f:
        mov     edi, dword ptr [esi + 0x3b0]
        cmp     edi, ebx
        je      l_8cbb
        push    8
        mov     ecx, edi
        call    FUN_0054a7c0
        push    0x28
    l_8cb4:
        mov     ecx, edi
        call    FUN_00559be0
    l_8cbb:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      l_8cfc
        cmp     edi, ebx
        je      l_8cd9
        push    0x21
        mov     ecx, edi
        call    FUN_00559be0
    l_8cd9:
        mov     edi, dword ptr [esi + 0x2fc]
        cmp     edi, ebx
        je      l_8cfc
        mov     eax, dword ptr [g_007f23d8]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je      l_8cfc
        mov     ecx, edi
        call    FUN_005ced20
    l_8cfc:
        fld     dword ptr [esi + 0x42c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_8d25
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fmul    dword ptr [esi + 0x42c]
        fmul    dword ptr [esp + 0x10]
        jmp     l_8d37
    l_8d25:
        fld     dword ptr [ebp + 0x2c4]
        fmul    dword ptr [esi + 0x42c]
        fmul    dword ptr [esp + 0x10]
        fchs
    l_8d37:
        mov     ecx, dword ptr [esi + 0x408]
        fstp    dword ptr [esi + 0x43c]
        call    FUN_005acae0
        fmul    dword ptr [esi + 0x43c]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_0076c5b0]
        mov     dword ptr [esi + 0x43c], eax
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      l_8dc6
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      l_8dc6
        fld     dword ptr [esi + 0x528]
        mov     dword ptr [esi + 0x170], ebx
        fcomp   dword ptr [g_0076c5b0]
        mov     dword ptr [esi + 0x448], ebx
        mov     dword ptr [esi + 0x444], ebx
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jne     l_8db6
        mov     ecx, dword ptr [esi + 0x3b0]
        cmp     ecx, ebx
        je      l_8db6
        push    0x2b
        call    FUN_00559be0
    l_8db6:
        pop     edi
        mov     dword ptr [esi + 0x528], ebx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
    l_8dc6:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        mov     eax, dword ptr [esi + 0xd8]
        je      l_8df6
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fchs
        fld     dword ptr [eax + 0x18]
        fchs
        fld     dword ptr [eax + 0x28]
        fchs
        jmp     l_8e07
    l_8df6:
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fld     dword ptr [eax + 0x18]
        fld     dword ptr [eax + 0x28]
    l_8e07:
        fmul    dword ptr [esi + 0x49c]
        fxch    st(1)
        fmul    dword ptr [esi + 0x498]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [esi + 0x494]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_8e74
        fld     dword ptr [esi + 0x484]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_8e4d
        mov     ecx, dword ptr [esi + 0x484]
        mov     dword ptr [esp + 0x14], ecx
        jmp     l_8e59
    l_8e4d:
        fld     dword ptr [esi + 0x484]
        fchs
        fstp    dword ptr [esp + 0x14]
    l_8e59:
        fld     dword ptr [esi + 0x484]
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esi + 0x484]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_8e9b
        jmp     l_8e95
    l_8e74:
        fld     dword ptr [esi + 0x484]
        mov     dword ptr [esp + 0x14], 0
        fcomp   dword ptr [g_0076c5b0]
        fld     dword ptr [esi + 0x484]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_8e9b
    l_8e95:
        fmul    dword ptr [g_0076d598]
    l_8e9b:
        mov     edx, dword ptr [ebp + 0x2d8]
        fstp    dword ptr [esi + 0x484]
        fld     dword ptr [esi + 0x454]
        mov     dword ptr [esp + 0x18], edx
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_8ef3
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_8ef3
        fld     dword ptr [esi + 0x454]
        fdiv    dword ptr [g_0078156c]
        fmul    dword ptr [g_00782358]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [esp + 0x1c]
        fstp    dword ptr [esi + 0x43c]
    l_8ef3:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [esi + 0x450]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_8f63
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_909a
        fld     dword ptr [esi + 0x484]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_8f36
        fld     dword ptr [g_00782358]
        jmp     l_8f3c
    l_8f36:
        fld     dword ptr [g_00782354]
    l_8f3c:
        fld     dword ptr [esi + 0x484]
        fdiv    dword ptr [esi + 0x450]
        fmul    st(0), st(1)
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [esi + 0x43c]
        fstp    dword ptr [esi + 0x43c]
        fstp    st(0)
        jmp     l_909a
    l_8f63:
        fld     dword ptr [esi + 0x484]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_905f
        fld     dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x43c], ebx
        fcomp   dword ptr [esi + 0x44c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_8fdc
        mov     ecx, dword ptr [esi + 0x3b0]
        cmp     ecx, ebx
        je      l_8fa2
        push    0x1f
        call    FUN_00559be0
    l_8fa2:
        mov     edi, dword ptr [esi + 0x2fc]
        cmp     edi, ebx
        mov     eax, dword ptr [ebp + 0x2ac]
        mov     dword ptr [esp + 0x18], eax
        je      l_909a
        mov     eax, dword ptr [g_007f23d8]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je      l_909a
        mov     ecx, edi
        call    FUN_005ced20
        jmp     l_909a
    l_8fdc:
        mov     edi, dword ptr [esi + 0x2fc]
        cmp     edi, ebx
        je      l_8fff
        mov     eax, dword ptr [g_007f23d8]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je      l_8fff
        mov     ecx, edi
        call    FUN_005ced20
    l_8fff:
        fld     dword ptr [esi + 0x44c]
        fsub    dword ptr [esi + 0x450]
        fmul    dword ptr [g_0077de98]
        fld     st(0)
        fadd    dword ptr [esi + 0x450]
        fld     dword ptr [esp + 0x14]
        fcomp   st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_9036
        mov     ecx, dword ptr [ebp + 0x2a4]
        fstp    st(0)
        fstp    st(0)
        mov     dword ptr [esp + 0x18], ecx
        jmp     l_909a
    l_9036:
        fadd    st(0), st(1)
        fld     dword ptr [esp + 0x14]
        fcompp
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        fstp    st(0)
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_9053
        mov     edx, dword ptr [ebp + 0x2a8]
        mov     dword ptr [esp + 0x18], edx
        jmp     l_909a
    l_9053:
        mov     eax, dword ptr [ebp + 0x2ac]
        mov     dword ptr [esp + 0x18], eax
        jmp     l_909a
    l_905f:
        fld     dword ptr [esi + 0x474]
        fchs
        fcom    dword ptr [g_0078155c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_907c
        fstp    st(0)
        fld     dword ptr [g_0078155c]
    l_907c:
        fmul    dword ptr [g_00782350]
        fdiv    dword ptr [g_0078155c]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [esi + 0x43c]
        fstp    dword ptr [esi + 0x43c]
    l_909a:
        cmp     dword ptr [esi + 0x5b8], ebx
        je      l_90da
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [ebp + 0x2cc]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_90c1
        mov     ecx, dword ptr [ebp + 0x2cc]
        mov     dword ptr [esi + 0x43c], ecx
    l_90c1:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_90da
        mov     dword ptr [esi + 0x43c], ebx
    l_90da:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_9284
        fld     dword ptr [esp + 0x18]
        mov     al, byte ptr [esi + 0x5c8]
        cmp     al, bl
        fmul    dword ptr [esp + 0x24]
        fsubr   dword ptr [esi + 0x440]
        fstp    dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x18], edx
        je      l_912c
        mov     eax, dword ptr [esi + 0x5cc]
        mov     dword ptr [esi + 0x440], eax
        mov     byte ptr [esi + 0x5c8], bl
        jmp     l_938c
    l_912c:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      l_915d
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_915d
        mov     ecx, dword ptr [ebp + 0x2c0]
        jmp     l_9386
    l_915d:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      l_9194
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_9194
        mov     edx, dword ptr [ebp + 0x2b8]
        mov     dword ptr [esi + 0x440], edx
        jmp     l_938c
    l_9194:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [ebp + 0x2b8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_91fe
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [ebp + 0x2d0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_91fe
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [ebp + 0x2b8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_91dc
        mov     eax, dword ptr [ebp + 0x2b8]
        mov     dword ptr [esi + 0x440], eax
        jmp     l_938c
    l_91dc:
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [ebp + 0x2d0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_938c
        mov     ecx, dword ptr [ebp + 0x2d0]
        jmp     l_9386
    l_91fe:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_9249
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [ebp + 0x2d4]
        fadd    dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_938c
        mov     edx, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], edx
        jmp     l_938c
    l_9249:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_938c
        fld     dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x1c]
        fcomp   dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], eax
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_938c
        jmp     l_9380
    l_9284:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [ebp + 0x2c0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_92fc
        fld     dword ptr [ebp + 0x2d0]
        fchs
        fld     dword ptr [esp + 0x24]
        fmul    dword ptr [ebp + 0x2e0]
        fadd    dword ptr [esi + 0x440]
        fcomp   st(1)
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_92fa
        fcom    dword ptr [esi + 0x440]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_92d0
        fstp    dword ptr [esi + 0x440]
        jmp     l_938c
    l_92d0:
        fstp    st(0)
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [ebp + 0x2c0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_938c
        mov     edx, dword ptr [ebp + 0x2c0]
        mov     dword ptr [esi + 0x440], edx
        jmp     l_938c
    l_92fa:
        fstp    st(0)
    l_92fc:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_9346
        fld     dword ptr [ebp + 0x2dc]
        fmul    dword ptr [ebp + 0x2d4]
        fmul    dword ptr [esp + 0x24]
        fsubr   dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_938c
        mov     eax, dword ptr [esi + 0x43c]
        mov     dword ptr [esi + 0x440], eax
        jmp     l_938c
    l_9346:
        fld     dword ptr [esi + 0x43c]
        fcomp   dword ptr [esi + 0x440]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_938c
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [ebp + 0x2e0]
        fmul    dword ptr [esp + 0x24]
        fadd    dword ptr [esi + 0x440]
        fst     dword ptr [esi + 0x440]
        fcomp   dword ptr [esi + 0x43c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_938c
    l_9380:
        mov     ecx, dword ptr [esi + 0x43c]
    l_9386:
        mov     dword ptr [esi + 0x440], ecx
    l_938c:
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [ebp + 0x2c4]
        fcom    dword ptr [esi + 0x440]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        je      l_93ce
        mov     edx, dword ptr [esi]
        fstp    st(0)
        mov     ecx, esi
        call    dword ptr [edx + 0x114]
        fmul    dword ptr [esp + 0x10]
        fcomp   dword ptr [esi + 0x440]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_93d4
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x114]
        fmul    dword ptr [esp + 0x10]
    l_93ce:
        fstp    dword ptr [esi + 0x440]
    l_93d4:
        fld     dword ptr [esi + 0x440]
        mov     ecx, dword ptr [esi + 0x440]
        fmul    dword ptr [g_0077d0fc]
        mov     dword ptr [esi + 0x170], ecx
        fstp    dword ptr [esi + 0x444]
        fld     dword ptr [esi + 0x43c]
        fmul    dword ptr [g_0077d0fc]
        fstp    dword ptr [esi + 0x448]
        fld     dword ptr [esi + 0x528]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      l_9455
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jne     l_9455
        mov     ecx, dword ptr [esi + 0x3b0]
        cmp     ecx, ebx
        je      l_9455
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_944e
        push    0x2c
        jmp     l_94ef
    l_944e:
        push    0x29
        jmp     l_94ef
    l_9455:
        fld     dword ptr [esi + 0x528]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     l_9489
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_9489
        mov     ecx, dword ptr [esi + 0x3b0]
        cmp     ecx, ebx
        je      l_9489
        push    0x2c
        jmp     l_94ef
    l_9489:
        fld     dword ptr [esi + 0x528]
        fcomp   dword ptr [g_00781574]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      l_94bd
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_00781574]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     l_94bd
        mov     ecx, dword ptr [esi + 0x3b0]
        cmp     ecx, ebx
        je      l_94bd
        push    0x2a
        jmp     l_94ef
    l_94bd:
        fld     dword ptr [esi + 0x528]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        jne     l_94f4
        fld     dword ptr [esi + 0x440]
        fcomp   dword ptr [g_0076c5b0]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x40
        je      l_94f4
        mov     ecx, dword ptr [esi + 0x3b0]
        cmp     ecx, ebx
        je      l_94f4
        push    0x2b
    l_94ef:
        call    FUN_00559be0
    l_94f4:
        mov     edx, dword ptr [esi + 0x440]
        pop     edi
        mov     dword ptr [esi + 0x528], edx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
