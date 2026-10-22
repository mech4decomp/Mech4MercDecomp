/*
 * FUN_00662fb0 (801 B) — ABL candidate handler: dispatches through many
 * vtable slots (0x110, 0x8, 0x4, 0xcc, 0x12c, 0x128, 0x34) with FPU
 * distance math and several helper calls (0x6a6400, 0x6a58c0, 0x6a7570,
 * 0x6a7510, 0x665910, 0x663390, 0x58ea70, 0x5d2900, 0x40cbb0, 0x6632e0,
 * 0x663310).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a6400(void);
extern void __cdecl FUN_006a58c0(void);
extern void __cdecl FUN_006a7570(void);
extern void __cdecl FUN_006a7510(void);
extern void __cdecl FUN_00665910(void);
extern void __cdecl FUN_00663390(void);
extern void __cdecl FUN_0058ea70(void);
extern void __cdecl FUN_005d2900(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_006632e0(void);
extern void __cdecl FUN_00663310(void);

extern float g_0076c5b0;
extern float g_0077431c;
extern float g_00795440;
extern float g_0077b63c;

__declspec(naked) void FUN_00662fb0(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x60]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x110]
        test    al, al
        mov     edi, dword ptr [esp + 0x6c]
        mov     bl, 1
        jnz     L083
        mov     ecx, dword ptr [esp + 0x70]
        mov     edx, dword ptr [esp + 0x68]
        push    ecx
        push    edi
        push    edx
        lea     eax, [esp + 0x34]
        push    esi
        push    eax
        call    FUN_006a6400
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x24], ecx
        mov     edx, dword ptr [eax + 4]
        push    0
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x30], edx
        mov     eax, dword ptr [eax + 8]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_006a58c0
        fstp    dword ptr [esp + 0x88]
        mov     edx, dword ptr [esi]
        add     esp, 0x24
        push    0
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        cmp     al, bl
        jnz     L083
        mov     eax, dword ptr [esp + 0x74]
        sub     eax, 0
        jz      L053
        dec     eax
        jz      L04c
        dec     eax
        jnz     L053
        lea     ecx, [esp + 0x10]
        push    ecx
        push    esi
        call    FUN_00665910
        add     esp, 8
        mov     byte ptr [esp + 0x74], al
        jmp     L057
L04c:
        mov     byte ptr [esp + 0x74], 0
        jmp     L057
L053:
        mov     byte ptr [esp + 0x74], bl
L057:
        mov     eax, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esi]
        push    0
        push    0
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xcc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret
L083:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x12c]
        fcom    dword ptr [g_0076c5b0]
        __emit 0xDF   /* __emit: FNSTSW AX no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xE0
        __emit 0xF6   /* __emit: TEST AH,0x40 (F6 C4 40); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jnz     L17c
        fmul    dword ptr [g_0077431c]
        mov     eax, dword ptr [esi]
        push    0x3f4ccccd
        push    0x41400000
        fstp    dword ptr [esp + 0x6c]
        mov     ebp, dword ptr [esp + 0x6c]
        push    ebp
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x128]
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_006a7570
        push    ebp
        push    edi
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x34]
        push    esi
        push    eax
        call    FUN_006a6400
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x24], ecx
        mov     edx, dword ptr [eax + 4]
        push    0
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x30], edx
        mov     eax, dword ptr [eax + 8]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_006a58c0
        fstp    dword ptr [esp + 0x88]
        mov     edx, dword ptr [esi]
        add     esp, 0x24
        push    0
        push    0
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        cmp     al, bl
        jnz     L17e
        mov     eax, dword ptr [esp + 0x74]
        sub     eax, 0
        jz      L14c
        dec     eax
        jz      L145
        dec     eax
        jnz     L14c
        lea     ecx, [esp + 0x10]
        push    ecx
        push    esi
        call    FUN_00665910
        add     esp, 8
        mov     byte ptr [esp + 0x74], al
        jmp     L150
L145:
        mov     byte ptr [esp + 0x74], 0
        jmp     L150
L14c:
        mov     byte ptr [esp + 0x74], bl
L150:
        mov     eax, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esi]
        push    0
        push    0
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     eax, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xcc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret
L17c:
        fstp    st(0)
L17e:
        fld     dword ptr [g_00795440]
        mov     ebp, dword ptr [esp + 0x74]
        fadd    dword ptr [g_0077b63c]
        push    0x3f4ccccd
        push    0x41400000
        lea     ecx, [esp + 0x48]
        fstp    dword ptr [esp + 0x7c]
        mov     edi, dword ptr [esp + 0x7c]
        push    edi
        push    0
        call    FUN_006a7510
        push    edi
        lea     ecx, [esp + 0x68]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x34]
        push    esi
        push    eax
        mov     dword ptr [esp + 0x78], 0x795448
        call    FUN_006a6400
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x24], ecx
        mov     edx, dword ptr [eax + 4]
        add     esp, 0x14
        mov     dword ptr [esp + 0x14], edx
        mov     eax, dword ptr [eax + 8]
        mov     edx, dword ptr [esi]
        push    0
        mov     dword ptr [esp + 0x1c], eax
        mov     ebx, 1
        push    ebx
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 8]
        cmp     al, bl
        jnz     L2c9
        test    ebp, ebp
        jz      L27b
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     edi, dword ptr [eax + 0xd8]
        lea     eax, [esp + 0x28]
        add     edi, 0x80
        push    eax
        mov     ecx, edi
        call    FUN_00663390
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_0058ea70
        push    edi
        lea     ecx, [esp + 0x38]
        call    FUN_005d2900
        push    eax
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0040cbb0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_006632e0
        lea     edx, [esp + 0x18]
        push    edi
        fstp    dword ptr [esp + 0x80]
        push    edx
        call    FUN_00663310
        fcomp   dword ptr [esp + 0x84]
        add     esp, 0x10
        __emit 0xDF   /* __emit: FNSTSW AX no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xE0
        __emit 0xF6   /* __emit: TEST AH,0x41 (F6 C4 41); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L27b
        mov     ebp, ebx
L27b:
        sub     ebp, 0
        jz      L2a1
        dec     ebp
        jz      L29a
        dec     ebp
        jnz     L2a1
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        call    FUN_00665910
        add     esp, 8
        mov     byte ptr [esp + 0x74], al
        jmp     L2a5
L29a:
        mov     byte ptr [esp + 0x74], 0
        jmp     L2a5
L2a1:
        mov     byte ptr [esp + 0x74], bl
L2a5:
        mov     eax, dword ptr [esp + 0x74]
        mov     edx, dword ptr [esi]
        push    0
        push    0
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     edx, dword ptr [esi]
        push    0x3f800000
        mov     ecx, esi
        call    dword ptr [edx + 0xcc]
L2c9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret
    }
}
