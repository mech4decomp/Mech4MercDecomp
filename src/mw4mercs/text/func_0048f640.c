/*
 * FUN_0048f640 (491 B) — MLR image-instance allocator variant (__thiscall,
 * RET 0xC). Like FUN_0048f380 but allocates via FUN_00422110 (0x50-byte
 * objects) and takes an extra parameter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b95a4;
extern int g_007b95b8;

extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00422110(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0048f640(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10038]
        xor     ebp, ebp
        cmp     eax, ebp
        push    edi
        mov     dword ptr [esp + 0x10], ebp
        jz      L_666
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        call    eax
        add     esp, 0x4
        push    eax
        jmp     L_66b
L_666:
        mov     edx, dword ptr [esp + 0x1c]
        push    edx
L_66b:
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00412ab0
        mov     edi, dword ptr [esi + 0x20]
        add     esp, 0x4
        cmp     edi, ebp
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x14], edi
        jle     L_6c8
L_690:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, ebp
        shl     edx, cl
        add     eax, edx
        cmp     edx, eax
        jge     L_6c3
        lea     ebx, [esi + edx*4 + 0x28]
L_6a4:
        mov     edi, dword ptr [ebx]
        test    edi, edi
        jz      L_6b7
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     dword ptr [edi + 0x14], ecx
        jz      L_73b
L_6b7:
        inc     edx
        add     ebx, 0x4
        cmp     edx, eax
        jl      L_6a4
        mov     edi, dword ptr [esp + 0x14]
L_6c3:
        inc     ebp
        cmp     ebp, edi
        jl      L_690
L_6c8:
        mov     edx, dword ptr [g_007b95a4]
        push    edx
        call    FUN_006f4950
        mov     eax, dword ptr [esi + 0x1002c]
        cmp     eax, dword ptr [esi + 0x10030]
        jge     L_792
        mov     ecx, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x10028]
        dec     ecx
        and     ecx, eax
        mov     edi, dword ptr [edx + ecx*4]
        mov     eax, dword ptr [g_007b95a4]
        mov     ecx, dword ptr [esi + 0x10]
        push    eax
        shl     edi, cl
        call    FUN_006f4950
        push    0x50
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_766
        mov     ecx, dword ptr [g_007b95b8]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    0
        lea     edx, [edi + 1]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_00422110
        mov     ebx, eax
        jmp     L_768
L_73b:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     esi, dword ptr [esi + edx*4 + 0x28]
        jz      L_75a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_75a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_75a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
L_766:
        xor     ebx, ebx
L_768:
        lea     edi, [esi + edi*4 + 0x28]
        mov     dword ptr [edi], ebx
        call    FUN_006f49a0
        push    ebx
        lea     ecx, [esi + 0x8]
        call    FUN_004179b0
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x1002c]
        inc     ecx
        inc     eax
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x1002c], eax
        jmp     L_7fd
L_792:
        mov     edx, dword ptr [g_007b95a4]
        mov     ecx, dword ptr [esi + 0x10]
        push    edx
        shl     edi, cl
        call    FUN_006f4950
        push    0x50
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_7d9
        mov     ecx, dword ptr [g_007b95b8]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    0
        lea     edx, [edi + 1]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edx
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_00422110
        mov     ebx, eax
        jmp     L_7db
L_7d9:
        xor     ebx, ebx
L_7db:
        lea     edi, [esi + edi*4 + 0x28]
        mov     dword ptr [edi], ebx
        call    FUN_006f49a0
        push    ebx
        lea     ecx, [esi + 0x8]
        call    FUN_004179b0
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x20]
        inc     ecx
        inc     eax
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x20], eax
L_7fd:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     edi, dword ptr [edi]
        jz      L_81f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_81f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_81f:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
