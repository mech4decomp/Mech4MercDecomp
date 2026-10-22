/*
 * In-.text data block at 0x58EA90 (1784 B). Contains:
 *   - main __thiscall function at 0x58EA90 (RET 0x10, 4 params).
 *     Updates a unit's position/heading accumulators (0x9cc/0x9d0/0x9dc)
 *     using FUN_0075DB4A (float->int), looks up a target via
 *     FUN_004CDFA0/FUN_004CEEB0, and updates a 2D histogram table
 *     (indexed by [edi,ebx]) at [ebp+...].
 *   - 5x NOP pad
 *   - second __thiscall function at 0x58F090 (RET, no params). Iterates
 *     a list of objects and calls vtable methods.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_004CDFA0(void);
extern void __cdecl FUN_004CEEB0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00621FD0(void);
extern void __cdecl FUN_00545760(void);
extern void __cdecl FUN_00559AB0(void);
extern void __cdecl FUN_00559BE0(void);
extern void __cdecl FUN_00416B60(void);
extern void __cdecl FUN_004179B0(void);
extern void __cdecl FUN_004154D0(void);

extern unsigned int g_7dab40;
extern unsigned int g_7dab44;
extern float g_76d064;
extern unsigned int g_7f1f84;
extern unsigned char g_7dc694;
extern unsigned short g_7dc696;
extern unsigned int g_7db094;
extern unsigned int g_78157c;
extern unsigned int g_781584;
extern unsigned int g_781580;
extern unsigned int g_7f2120;

__declspec(naked) void __stdcall func_0058EA90(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        mov     ebx, dword ptr [g_7dab40]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [g_7dab44]
        mov     eax, dword ptr [edi]
        mov     esi, ecx
        xor     eax, ebx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x17]
        test    dl, dl
        mov     dword ptr [esp + 0x24], esi
        je      L_58f081
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        and     dl, 1
        cmp     dl, 1
        je      L_58f081
        mov     ecx, dword ptr [eax + 0xc]
        fld     dword ptr [esp + 0x2c]
        mov     eax, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        xor     eax, 0x85739531
        mov     dword ptr [esp + 0x20], ecx
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0075DB4A
        mov     ebp, eax
        mov     dword ptr [esp + 0x10], ebp
        fild    dword ptr [esp + 0x10]
        fsubr   dword ptr [esp + 0x2c]
        fadd    dword ptr [esi + 0x9cc]
        fcom    dword ptr [g_76d064]
        fst     dword ptr [esi + 0x9cc]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_58eb3d
        fld     st(0)
        call    FUN_0075DB4A
        mov     dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        add     ebp, eax
        mov     dword ptr [esp + 0x10], ebp
        fsubr   st(0), st(1)
        fstp    dword ptr [esi + 0x9cc]
        __emit 0xDD
        __emit 0xD8
        jmp     L_58eb3f
    L_58eb3d:
        __emit 0xDD
        __emit 0xD8
    L_58eb3f:
        mov     eax, dword ptr [esp + 0x30]
        mov     cl, byte ptr [eax]
        mov     dx, word ptr [eax + 2]
        mov     byte ptr [esp + 0x30], cl
        mov     word ptr [esp + 0x32], dx
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [edi]
        and     ecx, 0xff
        xor     eax, ebx
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        je      L_58eccd
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, eax
        call    FUN_004CEEB0
        mov     edi, eax
        cmp     edi, ebx
        je      L_58eccd
        mov     eax, dword ptr [g_7f1f84]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jne     L_58eccd
        fld     dword ptr [g_76d064]
        fld     dword ptr [esi + 0x3b8]
        fld     dword ptr [edi + 0x3b8]
        fcompp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_58ebd6
        __emit 0xDD
        __emit 0xD8
        fld     dword ptr [esi + 0x3b8]
        fdiv    dword ptr [edi + 0x3b8]
    L_58ebd6:
        fmul    dword ptr [esp + 0x2c]
        fld     st(0)
        call    FUN_0075DB4A
        mov     dword ptr [esp + 0x14], eax
        fisub   dword ptr [esp + 0x14]
        fadd    dword ptr [esi + 0x9d0]
        fcom    dword ptr [g_76d064]
        fst     dword ptr [esi + 0x9d0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_58ec27
        fld     st(0)
        call    FUN_0075DB4A
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        fsubr   st(0), st(1)
        fstp    dword ptr [esi + 0x9d0]
        __emit 0xDD
        __emit 0xD8
        jmp     L_58ec29
    L_58ec27:
        __emit 0xDD
        __emit 0xD8
    L_58ec29:
        mov     eax, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [eax + 0x670]
        fld     st(0)
        call    FUN_0075DB4A
        mov     dword ptr [esp + 0x18], eax
        fisub   dword ptr [esp + 0x18]
        fadd    dword ptr [esi + 0x9dc]
        fcom    dword ptr [g_76d064]
        fst     dword ptr [esi + 0x9dc]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_58ec89
        fld     st(0)
        call    FUN_0075DB4A
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x2c], eax
        fild    dword ptr [esp + 0x2c]
        add     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        fsubr   st(0), st(1)
        fstp    dword ptr [esi + 0x9dc]
        __emit 0xDD
        __emit 0xD8
        jmp     L_58ec8b
    L_58ec89:
        __emit 0xDD
        __emit 0xD8
    L_58ec8b:
        mov     ecx, dword ptr [edi + 0x10]
        shr     ecx, 0x13
        and     cl, 1
        cmp     cl, 1
        jne     L_58eccd
        mov     dl, byte ptr [edi + 0x15c]
        cmp     dl, byte ptr [g_7dc694]
        jne     L_58ecb7
        mov     ax, word ptr [edi + 0x15e]
        cmp     ax, word ptr [g_7dc696]
        je      L_58eccd
    L_58ecb7:
        mov     cl, byte ptr [edi + 0x15c]
        mov     byte ptr [esp + 0x30], cl
        mov     dx, word ptr [edi + 0x15e]
        mov     word ptr [esp + 0x32], dx
    L_58eccd:
        mov     al, byte ptr [g_7dc694]
        cmp     byte ptr [esp + 0x30], al
        jne     L_58ecea
        mov     cx, word ptr [g_7dc696]
        cmp     word ptr [esp + 0x32], cx
        je      L_58f081
    L_58ecea:
        mov     edx, dword ptr [esp + 0x1c]
        lea     edi, [esi + 0x14]
        mov     esi, dword ptr [edx + 0x225c]
        push    ebp
        push    edi
        push    0xd
        mov     ecx, esi
        mov     dword ptr [esp + 0x38], edi
        call    FUN_00621FD0
        push    ebp
        lea     eax, [esp + 0x34]
        push    eax
        push    0xa
        mov     ecx, esi
        call    FUN_00621FD0
        push    1
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0x17
        mov     ecx, esi
        call    FUN_00621FD0
        mov     ecx, dword ptr [esp + 0x20]
        push    edi
        lea     edx, [esp + 0x34]
        push    edx
        call    FUN_00545760
        test    al, al
        jne     L_58ed6a
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        push    0x2d
        mov     ecx, esi
        mov     ebx, 0xf
        mov     ebp, 0xc
        call    FUN_00621FD0
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        push    0x33
        mov     ecx, esi
        call    FUN_00621FD0
        jmp     L_58ed74
    L_58ed6a:
        mov     ebx, 0xe
        mov     ebp, 0xb
    L_58ed74:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00621FD0
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        push    ebp
        mov     ecx, esi
        call    FUN_00621FD0
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     ebp, dword ptr [eax + 0xc]
        xor     ebp, 0x85739531
        mov     cl, byte ptr [ebp + 0x16]
        test    cl, cl
        je      L_58f081
        mov     edx, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [edx + 0x5d0]
        mov     ebx, dword ptr [esp + 0x34]
        and     edi, 0xff
        cmp     ecx, -1
        mov     dword ptr [esp + 0x20], edi
        je      L_58eddf
        lea     esi, [ecx + 0xff]
        jmp     L_58ede9
    L_58eddf:
        mov     edx, dword ptr [esp + 0x2c]
        xor     ecx, ecx
        mov     cl, byte ptr [edx]
        mov     esi, ecx
    L_58ede9:
        mov     ecx, dword ptr [esp + 0x38]
        cmp     ecx, 5
        jge     L_58edf6
        test    ebx, ebx
        jge     L_58edfc
    L_58edf6:
        lea     ebx, [ecx + 0xc8]
    L_58edfc:
        mov     edx, dword ptr [g_7db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     edi, ecx
        jne     L_58ee4e
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        test    eax, eax
        je      L_58ee4e
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, eax
        call    FUN_004CEEB0
        test    eax, eax
        je      L_58ee4e
        mov     ecx, dword ptr [eax + 4]
        cmp     dword ptr [ecx], 0x429
        jne     L_58ee4e
        mov     eax, dword ptr [eax + 0x5d0]
        cmp     eax, -1
        je      L_58ee4e
        lea     edi, [eax + 0xff]
    L_58ee4e:
        test    edi, edi
        jl      L_58f081
        cmp     dword ptr [esp + 0x38], 3
        jl      L_58ee6d
        cmp     ebx, 0xc8
        jl      L_58eed5
        cmp     ebx, 0xcb
        je      L_58eed5
    L_58ee6d:
        cmp     edi, 0xff
        jl      L_58eea8
        lea     edx, [edi + edi*8]
        lea     eax, [edi + edx*4]
        lea     eax, [eax + eax*2]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        sub     eax, edi
        add     eax, ebx
        mov     edx, dword ptr [ebp + eax*4 - 0x2255c]
        inc     edx
        cmp     ebx, 0xc8
        mov     dword ptr [ebp + eax*4 - 0x2255c], edx
        jl      L_58eed5
        inc     dword ptr [ebp + eax*4 - 0x228d0]
        jmp     L_58eed5
    L_58eea8:
        mov     ecx, edi
        shl     ecx, 7
        add     ecx, edi
        shl     ecx, 3
        sub     ecx, edi
        lea     eax, [ebx + ecx*2]
        mov     edx, dword ptr [ebp + eax*4 + 0x398c]
        inc     edx
        cmp     ebx, 0xc8
        mov     dword ptr [ebp + eax*4 + 0x398c], edx
        jl      L_58eed5
        inc     dword ptr [ebp + eax*4 + 0x3618]
    L_58eed5:
        cmp     edi, 0xff
        jl      L_58ef35
        fild    dword ptr [esp + 0x10]
        lea     edx, [edi + edi*8]
        lea     eax, [edi + edx*4]
        lea     eax, [eax + eax*2]
        lea     eax, [eax + eax*4]
        fld     st(0)
        shl     eax, 2
        sub     eax, edi
        lea     ecx, [eax + ebx]
        fadd    dword ptr [ebp + ecx*4 - 0x221e8]
        lea     ecx, [ebp + ecx*4 - 0x221e8]
        add     eax, esi
        lea     eax, [ebp + eax*4 - 0x21b00]
        fstp    dword ptr [ecx]
        lea     edx, [edi + edi*8]
        mov     ecx, 1
        fld     st(0)
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        lea     eax, [edi + edx*4]
        lea     eax, [eax + eax*2]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        sub     eax, edi
        mov     dword ptr [ebp + eax*4 - 0x228e8], ecx
        jmp     L_58ef87
    L_58ef35:
        fild    dword ptr [esp + 0x10]
        mov     eax, edi
        shl     eax, 7
        add     eax, edi
        shl     eax, 3
        fld     st(0)
        sub     eax, edi
        shl     eax, 1
        lea     ecx, [eax + ebx]
        fadd    dword ptr [ebp + ecx*4 + 0x3d00]
        lea     ecx, [ebp + ecx*4 + 0x3d00]
        add     eax, esi
        mov     edx, edi
        fstp    dword ptr [ecx]
        shl     edx, 7
        lea     eax, [ebp + eax*4 + 0x43e8]
        fld     st(0)
        add     edx, edi
        fadd    dword ptr [eax]
        shl     edx, 3
        sub     edx, edi
        mov     ecx, 1
        fstp    dword ptr [eax]
        mov     dword ptr [ebp + edx*8 + 0x35f0], 1
    L_58ef87:
        cmp     esi, 0xff
        jl      L_58efce
        lea     eax, [esi + esi*8]
        fld     st(0)
        lea     eax, [esi + eax*4]
        lea     eax, [eax + eax*2]
        lea     edx, [eax + eax*4]
        shl     edx, 2
        sub     edx, esi
        add     edx, edi
        fadd    dword ptr [ebp + edx*4 - 0x216a4]
        lea     eax, [ebp + edx*4 - 0x216a4]
        fstp    dword ptr [eax]
        lea     eax, [esi + esi*8]
        lea     eax, [esi + eax*4]
        lea     eax, [eax + eax*2]
        lea     edx, [eax + eax*4]
        shl     edx, 2
        sub     edx, esi
        mov     dword ptr [ebp + edx*4 - 0x228e8], ecx
        jmp     L_58f002
    L_58efce:
        mov     eax, esi
        fld     st(0)
        shl     eax, 7
        add     eax, esi
        shl     eax, 3
        sub     eax, esi
        lea     edx, [edi + eax*2]
        fadd    dword ptr [ebp + edx*4 + 0x4844]
        lea     eax, [ebp + edx*4 + 0x4844]
        fstp    dword ptr [eax]
        mov     eax, esi
        shl     eax, 7
        add     eax, esi
        shl     eax, 3
        sub     eax, esi
        mov     dword ptr [ebp + eax*8 + 0x35f0], ecx
    L_58f002:
        cmp     esi, 0xff
        jl      L_58f04f
        lea     edx, [esi + esi*8]
        lea     eax, [esi + edx*4]
        lea     eax, [eax + eax*2]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        sub     eax, esi
        add     eax, ebx
        fadd    dword ptr [ebp + eax*4 - 0x21e74]
        lea     eax, [ebp + eax*4 - 0x21e74]
        lea     edx, [esi + esi*8]
        pop     edi
        fstp    dword ptr [eax]
        lea     eax, [esi + edx*4]
        lea     eax, [eax + eax*2]
        lea     eax, [eax + eax*4]
        shl     eax, 2
        sub     eax, esi
        pop     esi
        mov     dword ptr [ebp + eax*4 - 0x228e8], ecx
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x10
    L_58f04f:
        mov     edx, esi
        shl     edx, 7
        add     edx, esi
        shl     edx, 3
        sub     edx, esi
        lea     eax, [ebx + edx*2]
        fadd    dword ptr [ebp + eax*4 + 0x4074]
        mov     edx, esi
        shl     edx, 7
        lea     eax, [ebp + eax*4 + 0x4074]
        add     edx, esi
        fstp    dword ptr [eax]
        shl     edx, 3
        sub     edx, esi
        mov     dword ptr [ebp + edx*8 + 0x35f0], ecx
    L_58f081:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x10
        nop
        nop
        nop
        nop
        nop

        sub     esp, 8
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8d8]
        mov     ecx, eax
        and     ecx, 1
        cmp     cl, 1
        push    edi
        je      L_58f182
        mov     edi, dword ptr [esi + 0x3b0]
        mov     edx, dword ptr [g_78157c]
        mov     ecx, dword ptr [g_781584]
        or      eax, 0x1f
        test    edi, edi
        mov     dword ptr [esi + 0x8d8], eax
        mov     eax, dword ptr [g_781580]
        mov     dword ptr [esi + 0x5d8], edx
        mov     dword ptr [esi + 0x5dc], eax
        mov     dword ptr [esi + 0x5e0], ecx
        je      L_58f0f8
        mov     ecx, edi
        mov     byte ptr [edi + 0x6bc], 1
        call    FUN_00559AB0
        push    0x75
        mov     ecx, edi
        call    FUN_00559BE0
    L_58f0f8:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x68]
        test    al, al
        je      L_58f182
        push    ebx
        add     esi, 0x384
        push    ebp
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], esi
    L_58f117:
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_00416B60
        mov     ebp, eax
        test    ebp, ebp
        je      L_58f172
        lea     ebx, [ebp + 0x94]
    L_58f131:
        mov     edi, dword ptr [ebx]
    L_58f133:
        test    edi, edi
        je      L_58f172
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 4]
        je      L_58f172
        mov     eax, dword ptr [g_7f2120]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je      L_58f133
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xac]
        push    esi
        lea     ecx, [ebp + 0x9c]
        call    FUN_004179B0
        push    ebx
        mov     ecx, esi
        call    FUN_004154D0
        jmp     L_58f131
    L_58f172:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        cmp     eax, 0xa
        mov     dword ptr [esp + 0x10], eax
        jl      L_58f117
        pop     ebp
        pop     ebx
    L_58f182:
        pop     edi
        pop     esi
        add     esp, 8
        ret
    }
}
