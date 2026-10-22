/*
 * FUN_0040f980 (1139 B) — binary-search-tree node insertion keyed by a
 * string. Walks the tree comparing strings, allocates a new node via
 * FUN_00411530, links it in, and returns it through the output pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00411530(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_00411560(void);
extern void __cdecl FUN_00410d30(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_004115f0(void);
extern void __cdecl FUN_00411610(void);
extern void __cdecl FUN_00410ec0(void);
extern int g_0000000c;

__declspec(naked) void FUN_0040f980(void)
{
    __asm {
        sub     esp, 0x34
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx+8]
        push    ebx
        mov     ebx, dword ptr [esp+0x40]
        cmp     ebx, eax
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp+0x14], ecx
        jnz     L_fbf2

        mov     eax, dword ptr [ecx+4]
        test    eax, eax
        jbe     L_fa9f

        mov     eax, dword ptr [esp+0x50]
        mov     edi, dword ptr [eax]
        mov     esi, dword ptr [ebx+0x10]
        mov     eax, edi
    L_f9b2:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_f9d6
        test    cl, cl
        jz      L_f9d2
        mov     bl, byte ptr [eax+1]
        mov     cl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     L_f9d6
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_f9b2
    L_f9d2:
        xor     eax, eax
        jmp     L_f9db
    L_f9d6:
        sbb     eax, eax
        sbb     eax, -1
    L_f9db:
        xor     ebx, ebx
        cmp     eax, ebx
        jge     L_fa9f

        mov     ebp, dword ptr [esp+0x4c]
        cmp     ebp, edx
        jz      L_fa47
        cmp     ebp, ebx
        jnz     L_fa47
        mov     esi, dword ptr [ebp+0x10]
        mov     eax, edi
    L_f9f6:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_fa1a
        test    cl, cl
        jz      L_fa16
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jnz     L_fa1a
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_f9f6
    L_fa16:
        xor     eax, eax
        jmp     L_fa1f
    L_fa1a:
        sbb     eax, eax
        sbb     eax, -1
    L_fa1f:
        cmp     eax, ebx
        jl      L_fa47
        mov     eax, dword ptr [esp+0x50]
        mov     edi, dword ptr [esp+0x14]
        push    eax
        mov     ecx, edi
        call    FUN_00411530
        mov     esi, eax
        mov     eax, dword ptr [edi]
        cmp     dword ptr [eax+0xc], ebx
        __emit 0x89  /* __emit: mov dword ptr [0xC], esi = 89 35 0C 00 00 00; MSVC6 rejects mov [imm32],reg as C2415 */
        __emit 0x35
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jnz     L_fa72
        mov     dword ptr [eax+0xc], esi
        jmp     L_fa72

    L_fa47:
        mov     ecx, dword ptr [esp+0x50]
        mov     edi, dword ptr [esp+0x14]
        push    ecx
        mov     ecx, edi
        call    FUN_00411530
        mov     esi, eax
        mov     eax, dword ptr [edi]
        cmp     ebp, eax
        mov     dword ptr [ebp+8], esi
        jnz     L_fa6a
        mov     dword ptr [eax+4], esi
        mov     dword ptr [eax+0xc], esi
        jmp     L_fa72
    L_fa6a:
        cmp     ebp, dword ptr [eax+8]
        jnz     L_fa72
        mov     dword ptr [eax+8], esi

    L_fa72:
        add     eax, 4
        push    eax
        push    esi
        mov     dword ptr [esi+4], ebp
        mov     dword ptr [esi+8], ebx
        mov     dword ptr [esi+0xc], ebx
        call    FUN_00411670
        mov     eax, dword ptr [edi+4]
        add     esp, 8
        inc     eax
        mov     dword ptr [edi+4], eax
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc

    L_fa9f:
        mov     edi, dword ptr [edx+4]
        test    edi, edi
        mov     esi, edx
        mov     dword ptr [esp+0x1c], esi
        mov     al, 1
        jz      L_fb03
        mov     edx, dword ptr [esp+0x50]
        mov     ebp, dword ptr [edx]
    L_fab4:
        mov     esi, dword ptr [edi+0x10]
        mov     dword ptr [esp+0x1c], edi
        mov     eax, ebp
    L_fabd:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_fae5
        test    cl, cl
        jz      L_fae1
        mov     dl, byte ptr [eax+1]
        mov     bl, byte ptr [esi+1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_fae5
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fabd
    L_fae1:
        xor     eax, eax
        jmp     L_faea
    L_fae5:
        sbb     eax, eax
        sbb     eax, -1
    L_faea:
        test    eax, eax
        setl    al
        test    al, al
        jz      L_faf8
        mov     edi, dword ptr [edi+8]
        jmp     L_fafb
    L_faf8:
        mov     edi, dword ptr [edi+0xc]
    L_fafb:
        test    edi, edi
        jnz     L_fab4
        mov     esi, dword ptr [esp+0x1c]

    L_fb03:
        test    al, al
        mov     dword ptr [esp+0x18], esi
        jz      L_fb59
        mov     ebx, dword ptr [esp+0x14]
        lea     eax, [esp+0x14]
        push    eax
        mov     ecx, ebx
        call    FUN_00411560
        mov     ecx, dword ptr [esp+0x18]
        cmp     ecx, dword ptr [eax]
        jnz     L_fb4a
        mov     eax, dword ptr [esp+0x50]
        lea     edx, [esp+0x4c]
        push    edx
        push    eax
        push    esi
        push    edi
        lea     ecx, [esp+0x30]
        push    ecx
        mov     ecx, ebx
        mov     byte ptr [esp+0x60], 1
        call    FUN_00410d30
        push    eax
        lea     ecx, [esp+0x34]
        jmp     L_fbcf
    L_fb4a:
        lea     edx, [esp+0x18]
        push    edx
        call    FUN_004114b0
        add     esp, 4
        jmp     L_fb5d

    L_fb59:
        mov     ebx, dword ptr [esp+0x14]
    L_fb5d:
        mov     ebp, dword ptr [esp+0x50]
        mov     eax, dword ptr [esp+0x18]
        mov     esi, dword ptr [ebp]
        mov     eax, dword ptr [eax+0x10]
    L_fb6b:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_fb8f
        test    cl, cl
        jz      L_fb8b
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jnz     L_fb8f
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fb6b
    L_fb8b:
        xor     eax, eax
        jmp     L_fb94
    L_fb8f:
        sbb     eax, eax
        sbb     eax, -1
    L_fb94:
        test    eax, eax
        jge     L_fbbc
        mov     ecx, dword ptr [esp+0x1c]
        lea     eax, [esp+0x50]
        push    eax
        push    ebp
        push    ecx
        push    edi
        lea     edx, [esp+0x2c]
        push    edx
        mov     ecx, ebx
        mov     byte ptr [esp+0x64], 1
        call    FUN_00410d30
        push    eax
        lea     ecx, [esp+0x3c]
        jmp     L_fbcf
    L_fbbc:
        lea     eax, [esp+0x13]
        lea     ecx, [esp+0x18]
        push    eax
        push    ecx
        mov     byte ptr [esp+0x1b], 0
        lea     ecx, [esp+0x44]

    L_fbcf:
        call    FUN_004115f0
        push    eax
        lea     ecx, [esp+0x28]
        call    FUN_00411610
        mov     eax, dword ptr [esp+0x48]
        mov     edx, dword ptr [esp+0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc

    L_fbf2:
        cmp     ebx, edx
        jnz     L_fcfd
        mov     eax, dword ptr [esp+0x50]
        mov     ebp, dword ptr [eax]
        mov     edi, dword ptr [edx+0xc]
        mov     eax, dword ptr [edi+0x10]
        mov     esi, ebp
    L_fc08:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_fc2c
        test    cl, cl
        jz      L_fc28
        mov     bl, byte ptr [eax+1]
        mov     cl, bl
        cmp     bl, byte ptr [esi+1]
        jnz     L_fc2c
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fc08
    L_fc28:
        xor     eax, eax
        jmp     L_fc31
    L_fc2c:
        sbb     eax, eax
        sbb     eax, -1
    L_fc31:
        test    eax, eax
        jge     L_fcee
        cmp     edi, edx
        jz      L_fc94
        mov     esi, dword ptr [edi+0x10]
        mov     eax, ebp
    L_fc42:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_fc6a
        test    cl, cl
        jz      L_fc66
        mov     dl, byte ptr [eax+1]
        mov     bl, byte ptr [esi+1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_fc6a
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fc42
    L_fc66:
        xor     eax, eax
        jmp     L_fc6f
    L_fc6a:
        sbb     eax, eax
        sbb     eax, -1
    L_fc6f:
        test    eax, eax
        jl      L_fc94
        mov     eax, dword ptr [esp+0x50]
        mov     ebx, dword ptr [esp+0x14]
        push    eax
        mov     ecx, ebx
        call    FUN_00411530
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, dword ptr [eax+0xc]
        mov     dword ptr [edi+0xc], esi
        jnz     L_fcbf
        mov     dword ptr [eax+0xc], esi
        jmp     L_fcbf
    L_fc94:
        mov     ecx, dword ptr [esp+0x50]
        mov     ebx, dword ptr [esp+0x14]
        push    ecx
        mov     ecx, ebx
        call    FUN_00411530
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, eax
        mov     dword ptr [edi+8], esi
        jnz     L_fcb7
        mov     dword ptr [eax+4], esi
        mov     dword ptr [eax+0xc], esi
        jmp     L_fcbf
    L_fcb7:
        cmp     edi, dword ptr [eax+8]
        jnz     L_fcbf
        mov     dword ptr [eax+8], esi
    L_fcbf:
        add     eax, 4
        xor     ecx, ecx
        push    eax
        push    esi
        mov     dword ptr [esi+4], edi
        mov     dword ptr [esi+8], ecx
        mov     dword ptr [esi+0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx+4]
        add     esp, 8
        inc     eax
        mov     dword ptr [ebx+4], eax
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc

    L_fcee:
        mov     edx, dword ptr [esp+0x50]
        push    edx
        lea     eax, [esp+0x40]
        push    eax
        jmp     L_fdd8

    L_fcfd:
        lea     edx, [esp+0x4c]
        push    edx
        mov     dword ptr [esp+0x50], ebx
        call    FUN_004114b0
        mov     ebp, dword ptr [esp+0x54]
        mov     edi, dword ptr [ebp]
        mov     eax, dword ptr [esp+0x50]
        mov     eax, dword ptr [eax+0x10]
        add     esp, 4
        mov     esi, edi
    L_fd1e:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_fd42
        test    cl, cl
        jz      L_fd3e
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jnz     L_fd42
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fd1e
    L_fd3e:
        xor     eax, eax
        jmp     L_fd47
    L_fd42:
        sbb     eax, eax
        sbb     eax, -1
    L_fd47:
        test    eax, eax
        jge     L_fdd2
        mov     esi, dword ptr [ebx+0x10]
        mov     eax, edi
    L_fd54:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_fd78
        test    cl, cl
        jz      L_fd74
        mov     dl, byte ptr [eax+1]
        mov     cl, dl
        cmp     dl, byte ptr [esi+1]
        jnz     L_fd78
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L_fd54
    L_fd74:
        xor     eax, eax
        jmp     L_fd7d
    L_fd78:
        sbb     eax, eax
        sbb     eax, -1
    L_fd7d:
        test    eax, eax
        jge     L_fdd2
        mov     eax, dword ptr [esp+0x4c]
        mov     ecx, dword ptr [eax+0xc]
        test    ecx, ecx
        push    ebp
        jnz     L_fdb0
        mov     ecx, dword ptr [esp+0x18]
        push    eax
        push    0
        lea     eax, [esp+0x5c]
        push    eax
        call    FUN_00410d30
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    L_fdb0:
        mov     ecx, dword ptr [esp+0x18]
        push    ebx
        push    ebx
        lea     edx, [esp+0x5c]
        push    edx
        call    FUN_00410d30
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc

    L_fdd2:
        push    ebp
        lea     edx, [esp+0x40]
        push    edx
    L_fdd8:
        mov     ecx, dword ptr [esp+0x1c]
        call    FUN_00410ec0
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp+0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }
}
