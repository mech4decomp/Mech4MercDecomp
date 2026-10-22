/*
 * FUN_004927a0 (1139 B) — __thiscall string-keyed tree/map insertion
 * (MLR material/render-state registry). Walks a binary tree comparing
 * string keys, allocates a new node via FUN_00493120, links it into the
 * tree, and returns the new node through the out-param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_00492d60(void);
extern void __cdecl FUN_00492ef0(void);
extern void __cdecl FUN_00493120(void);
extern void __cdecl FUN_00493150(void);
extern void __cdecl FUN_00493160(void);
extern void __cdecl FUN_00493180(void);

extern int g_0000000c;

__declspec(naked) void FUN_004927a0(void)
{
    __asm {
        sub     esp, 0x34
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [edx + 0x8]
        push    ebx
        mov     ebx, dword ptr [esp + 0x40]
        cmp     ebx, eax
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ecx
        jnz     L_492a12
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jbe     L_4928bf
        mov     eax, dword ptr [esp + 0x50]
        mov     edi, dword ptr [eax]
        mov     esi, dword ptr [ebx + 0x10]
        mov     eax, edi
    L_4927d2:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_4927f6
        test    cl, cl
        jz      L_4927f2
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_4927f6
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_4927d2
    L_4927f2:
        xor     eax, eax
        jmp     L_4927fb
    L_4927f6:
        sbb     eax, eax
        sbb     eax, -0x1
    L_4927fb:
        xor     ebx, ebx
        cmp     eax, ebx
        jge     L_4928bf
        mov     ebp, dword ptr [esp + 0x4c]
        cmp     ebp, edx
        jz      L_492867
        cmp     ebp, ebx
        jnz     L_492867
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, edi
    L_492816:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_49283a
        test    cl, cl
        jz      L_492836
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_49283a
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492816
    L_492836:
        xor     eax, eax
        jmp     L_49283f
    L_49283a:
        sbb     eax, eax
        sbb     eax, -0x1
    L_49283f:
        cmp     eax, ebx
        jl      L_492867
        mov     eax, dword ptr [esp + 0x50]
        mov     edi, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    FUN_00493120
        mov     esi, eax
        mov     eax, dword ptr [edi]
        cmp     dword ptr [eax + 0xc], ebx
        __emit 0x89  /* __emit: mov dword ptr [0xC], esi = 89 35 0C 00 00 00; MSVC6 rejects mov [imm32],reg as C2415 */
        __emit 0x35
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        jnz     L_492892
        mov     dword ptr [eax + 0xc], esi
        jmp     L_492892
    L_492867:
        mov     ecx, dword ptr [esp + 0x50]
        mov     edi, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, edi
        call    FUN_00493120
        mov     esi, eax
        mov     eax, dword ptr [edi]
        cmp     ebp, eax
        mov     dword ptr [ebp + 0x8], esi
        jnz     L_49288a
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_492892
    L_49288a:
        cmp     ebp, dword ptr [eax + 0x8]
        jnz     L_492892
        mov     dword ptr [eax + 0x8], esi
    L_492892:
        add     eax, 0x4
        push    eax
        push    esi
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        call    FUN_00411670
        mov     eax, dword ptr [edi + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [edi + 0x4], eax
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc
    L_4928bf:
        mov     edi, dword ptr [edx + 0x4]
        test    edi, edi
        mov     esi, edx
        mov     dword ptr [esp + 0x1c], esi
        mov     al, 0x1
        jz      L_492923
        mov     edx, dword ptr [esp + 0x50]
        mov     ebp, dword ptr [edx]
    L_4928d4:
        mov     esi, dword ptr [edi + 0x10]
        mov     dword ptr [esp + 0x1c], edi
        mov     eax, ebp
    L_4928dd:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_492905
        test    cl, cl
        jz      L_492901
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_492905
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_4928dd
    L_492901:
        xor     eax, eax
        jmp     L_49290a
    L_492905:
        sbb     eax, eax
        sbb     eax, -0x1
    L_49290a:
        test    eax, eax
        setl    al
        test    al, al
        jz      L_492918
        mov     edi, dword ptr [edi + 0x8]
        jmp     L_49291b
    L_492918:
        mov     edi, dword ptr [edi + 0xc]
    L_49291b:
        test    edi, edi
        jnz     L_4928d4
        mov     esi, dword ptr [esp + 0x1c]
    L_492923:
        test    al, al
        mov     dword ptr [esp + 0x18], esi
        jz      L_492979
        mov     ebx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, ebx
        call    FUN_00493150
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, dword ptr [eax]
        jnz     L_49296a
        mov     eax, dword ptr [esp + 0x50]
        lea     edx, [esp + 0x4c]
        push    edx
        push    eax
        push    esi
        push    edi
        lea     ecx, [esp + 0x30]
        push    ecx
        mov     ecx, ebx
        mov     byte ptr [esp + 0x60], 0x1
        call    FUN_00492d60
        push    eax
        lea     ecx, [esp + 0x34]
        jmp     L_4929ef
    L_49296a:
        lea     edx, [esp + 0x18]
        push    edx
        call    FUN_004114b0
        add     esp, 0x4
        jmp     L_49297d
    L_492979:
        mov     ebx, dword ptr [esp + 0x14]
    L_49297d:
        mov     ebp, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [ebp]
        mov     eax, dword ptr [eax + 0x10]
    L_49298b:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_4929af
        test    cl, cl
        jz      L_4929ab
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_4929af
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_49298b
    L_4929ab:
        xor     eax, eax
        jmp     L_4929b4
    L_4929af:
        sbb     eax, eax
        sbb     eax, -0x1
    L_4929b4:
        test    eax, eax
        jge     L_4929dc
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x50]
        push    eax
        push    ebp
        push    ecx
        push    edi
        lea     edx, [esp + 0x2c]
        push    edx
        mov     ecx, ebx
        mov     byte ptr [esp + 0x64], 0x1
        call    FUN_00492d60
        push    eax
        lea     ecx, [esp + 0x3c]
        jmp     L_4929ef
    L_4929dc:
        lea     eax, [esp + 0x13]
        lea     ecx, [esp + 0x18]
        push    eax
        push    ecx
        mov     byte ptr [esp + 0x1b], 0x0
        lea     ecx, [esp + 0x44]
    L_4929ef:
        call    FUN_00493160
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00493180
        mov     eax, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], edx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    L_492a12:
        cmp     ebx, edx
        jnz     L_492b1d
        mov     eax, dword ptr [esp + 0x50]
        mov     ebp, dword ptr [eax]
        mov     edi, dword ptr [edx + 0xc]
        mov     eax, dword ptr [edi + 0x10]
        mov     esi, ebp
    L_492a28:
        mov     bl, byte ptr [eax]
        mov     cl, bl
        cmp     bl, byte ptr [esi]
        jnz     L_492a4c
        test    cl, cl
        jz      L_492a48
        mov     bl, byte ptr [eax + 0x1]
        mov     cl, bl
        cmp     bl, byte ptr [esi + 0x1]
        jnz     L_492a4c
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492a28
    L_492a48:
        xor     eax, eax
        jmp     L_492a51
    L_492a4c:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492a51:
        test    eax, eax
        jge     L_492b0e
        cmp     edi, edx
        jz      L_492ab4
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, ebp
    L_492a62:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_492a8a
        test    cl, cl
        jz      L_492a86
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_492a8a
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492a62
    L_492a86:
        xor     eax, eax
        jmp     L_492a8f
    L_492a8a:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492a8f:
        test    eax, eax
        jl      L_492ab4
        mov     eax, dword ptr [esp + 0x50]
        mov     ebx, dword ptr [esp + 0x14]
        push    eax
        mov     ecx, ebx
        call    FUN_00493120
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, dword ptr [eax + 0xc]
        mov     dword ptr [edi + 0xc], esi
        jnz     L_492adf
        mov     dword ptr [eax + 0xc], esi
        jmp     L_492adf
    L_492ab4:
        mov     ecx, dword ptr [esp + 0x50]
        mov     ebx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, ebx
        call    FUN_00493120
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_492ad7
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_492adf
    L_492ad7:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_492adf
        mov     dword ptr [eax + 0x8], esi
    L_492adf:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    esi
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret     0xc
    L_492b0e:
        mov     edx, dword ptr [esp + 0x50]
        push    edx
        lea     eax, [esp + 0x40]
        push    eax
        jmp     L_492bf8
    L_492b1d:
        lea     edx, [esp + 0x4c]
        push    edx
        mov     dword ptr [esp + 0x50], ebx
        call    FUN_004114b0
        mov     ebp, dword ptr [esp + 0x54]
        mov     edi, dword ptr [ebp]
        mov     eax, dword ptr [esp + 0x50]
        mov     eax, dword ptr [eax + 0x10]
        add     esp, 0x4
        mov     esi, edi
    L_492b3e:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_492b62
        test    cl, cl
        jz      L_492b5e
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_492b62
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492b3e
    L_492b5e:
        xor     eax, eax
        jmp     L_492b67
    L_492b62:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492b67:
        test    eax, eax
        jge     L_492bf2
        mov     esi, dword ptr [ebx + 0x10]
        mov     eax, edi
    L_492b74:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L_492b98
        test    cl, cl
        jz      L_492b94
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L_492b98
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_492b74
    L_492b94:
        xor     eax, eax
        jmp     L_492b9d
    L_492b98:
        sbb     eax, eax
        sbb     eax, -0x1
    L_492b9d:
        test    eax, eax
        jge     L_492bf2
        mov     eax, dword ptr [esp + 0x4c]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        push    ebp
        jnz     L_492bd0
        mov     ecx, dword ptr [esp + 0x18]
        push    eax
        push    0x0
        lea     eax, [esp + 0x5c]
        push    eax
        call    FUN_00492d60
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    L_492bd0:
        mov     ecx, dword ptr [esp + 0x18]
        push    ebx
        push    ebx
        lea     edx, [esp + 0x5c]
        push    edx
        call    FUN_00492d60
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    L_492bf2:
        push    ebp
        lea     edx, [esp + 0x40]
        push    edx
    L_492bf8:
        mov     ecx, dword ptr [esp + 0x1c]
        call    FUN_00492ef0
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x34
        ret     0xc
    }
}
