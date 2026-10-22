/*
 * FUN_0048f830 (426 B) — MLR image-instance allocator variant (__thiscall,
 * RET 0x4). Allocates via FUN_004225b0 (0x38-byte objects); takes a single
 * extra pointer argument (EBX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b95a4;
extern int g_007b95c8;

extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004225b0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0048f830(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ebx + 0x10]
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        xor     edi, edi
        push    eax
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], edi
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_00412ab0
        mov     ebp, dword ptr [esi + 0x20]
        add     esp, 0x4
        test    ebp, ebp
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x14], edi
        jle     L_8a8
L_86c:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, edi
        shl     edx, cl
        add     eax, edx
        cmp     edx, eax
        jge     L_89b
        lea     ebx, [esi + edx*4 + 0x28]
L_880:
        mov     edi, dword ptr [ebx]
        test    edi, edi
        jz      L_88f
        mov     ecx, dword ptr [esp + 0x18]
        cmp     dword ptr [edi + 0x14], ecx
        jz      L_90b
L_88f:
        inc     edx
        add     ebx, 0x4
        cmp     edx, eax
        jl      L_880
        mov     edi, dword ptr [esp + 0x14]
L_89b:
        inc     edi
        cmp     edi, ebp
        mov     dword ptr [esp + 0x14], edi
        jl      L_86c
        mov     ebx, dword ptr [esp + 0x20]
L_8a8:
        mov     edx, dword ptr [g_007b95a4]
        push    edx
        call    FUN_006f4950
        mov     eax, dword ptr [esi + 0x1002c]
        cmp     eax, dword ptr [esi + 0x10030]
        jge     L_959
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
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_936
        mov     ecx, dword ptr [g_007b95c8]
        push    ecx
        push    0
        lea     edx, [edi + 1]
        push    edx
        push    ebx
        push    esi
        mov     ecx, eax
        call    FUN_004225b0
        jmp     L_938
L_90b:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     esi, dword ptr [esi + edx*4 + 0x28]
        jz      L_92a
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_92a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_92a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
L_936:
        xor     eax, eax
L_938:
        lea     edi, [esi + edi*4 + 0x28]
        mov     dword ptr [edi], eax
        call    FUN_006f49a0
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x1002c]
        inc     ecx
        inc     eax
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x1002c], eax
        jmp     L_9ac
L_959:
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [g_007b95a4]
        shl     ebp, cl
        push    eax
        mov     edi, ebp
        call    FUN_006f4950
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_991
        mov     ecx, dword ptr [g_007b95c8]
        push    ecx
        push    0
        lea     edx, [edi + 1]
        push    edx
        push    ebx
        push    esi
        mov     ecx, eax
        call    FUN_004225b0
        jmp     L_993
L_991:
        xor     eax, eax
L_993:
        lea     edi, [esi + edi*4 + 0x28]
        mov     dword ptr [edi], eax
        call    FUN_006f49a0
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x20]
        inc     ecx
        inc     eax
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x20], eax
L_9ac:
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     edi, dword ptr [edi]
        jz      L_9ce
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_9ce
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_9ce:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }
}
