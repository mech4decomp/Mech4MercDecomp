/*
 * In-.text data block at 0x4E97EB (1253 B). Contains:
 *   - 5x NOP pad
 *   - tiny thunk: mov dword ptr [ecx+0x13c], 0x4E9800 ; ret   (vtable-style ptr store)
 *   - 5x NOP pad
 *   - main __thiscall function at 0x4E9800 (RET 0xC, 3 stack params)
 *     - builds a local list, iterates a linked list of objects, does
 *       FPU distance/angle math, calls vtable methods, and fills an
 *       8-entry array at [esp+0x84].
 *   - trailing NOP
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004C8460(void);
extern void __cdecl FUN_004E2EE0(void);
extern void __cdecl FUN_004E8C50(void);
extern void __cdecl FUN_00419480(void);

extern unsigned int g_7dc728;   /* mov eax/ecx, [0x7dc728] */
extern float g_76d064;
extern float g_76c5b0;
extern float g_76d070;
extern float g_76dd60;
extern float g_7b220c;

__declspec(naked) void func_004E97EB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     dword ptr [ecx + 0x13c], 0x4e9800
        ret
        nop
        nop
        nop
        nop
        nop

        sub     esp, 0xcc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0xa4]
        mov     dword ptr [esp + 0x34], ebx
        call    FUN_00491280
        mov     esi, dword ptr [ebx + 0x140]
        mov     edi, dword ptr [esp + 0xe4]
        push    esi
        push    edi
        lea     ecx, [esp + 0xac]
        mov     dword ptr [esp + 0xc4], 0
        call    FUN_00491670
        add     esi, 0x18
        push    esi
        lea     eax, [edi + 0x18]
        push    eax
        lea     ecx, [esp + 0xc4]
        push    ecx
        call    FUN_004C8460
        mov     ebx, dword ptr [ebx + 0x144]
        add     esp, 0xc
        test    ebx, ebx
        mov     dword ptr [esp + 0x1c], eax
        je      L_4e9875
        mov     edx, dword ptr [ebx + 4]
        mov     esi, dword ptr [ebx]
        mov     dword ptr [esp + 0x50], edx
        mov     ebx, edx
        jmp     L_4e9877
    L_4e9875:
        xor     esi, esi
    L_4e9877:
        mov     ebp, dword ptr [esp + 0xe0]
        push    ebp
        mov     ecx, esi
        call    dword ptr [esi + 0x130]
        cmp     eax, -1
        je      L_4e9897
        push    eax
        push    edi
        push    ebp
        mov     ecx, esi
        call    dword ptr [esi + 0x13c]
    L_4e9897:
        mov     eax, dword ptr [g_7dc728]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [eax + 0x154]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [g_76d064]
        fdiv    dword ptr [eax + 0x158]
        fstp    dword ptr [esp + 0x3c]
        jmp     L_4e98c2
    L_4e98be:
        mov     ebx, dword ptr [esp + 0x50]
    L_4e98c2:
        test    ebx, ebx
        je      L_4e9cc2
        mov     esi, dword ptr [ebx]
        test    esi, esi
        mov     eax, dword ptr [ebx + 4]
        mov     dword ptr [esp + 0x44], esi
        mov     dword ptr [esp + 0x50], eax
        je      L_4e9cc2
        push    ebp
        mov     ecx, esi
        call    dword ptr [esi + 0x130]
        mov     edi, eax
        cmp     edi, -1
        mov     dword ptr [esp + 0x40], edi
        je      L_4e98be
        mov     ecx, dword ptr [esi + 0x12c]
        lea     edx, [esi + 0xf0]
        mov     dword ptr [esp + 0x18], ecx
        fld     dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esi + 0x140]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_4e9ca1
        test    ecx, ecx
        je      L_4e9ca1
        test    dword ptr [ecx + 4], 0x3e0
        je      L_4e9ca1
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_00419480
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_7dc728]
        fsub    dword ptr [ecx + 0x15c]
        fmul    dword ptr [esp + 0x38]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_4e9968
        __emit 0xDD
        __emit 0xD8
        xor     bl, bl
        jmp     L_4e997c
    L_4e9968:
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x14]
        mov     bl, byte ptr [esp + 0x14]
    L_4e997c:
        fld     dword ptr [esp + 0x30]
        mov     al, byte ptr [ecx + 0x150]
        fadd    dword ptr [esp + 0x18]
        fsub    dword ptr [ecx + 0x15c]
        fmul    dword ptr [esp + 0x38]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x14]
        mov     dl, byte ptr [esp + 0x14]
        cmp     dl, al
        mov     byte ptr [esp + 0x12], dl
        jb      L_4e99b6
        dec     al
        mov     byte ptr [esp + 0x12], al
    L_4e99b6:
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x18]
        fsub    dword ptr [ecx + 0x160]
        fmul    dword ptr [esp + 0x3c]
        fcom    dword ptr [g_76c5b0]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        je      L_4e99de
        __emit 0xDD
        __emit 0xD8
        mov     byte ptr [esp + 0x13], 0
        jmp     L_4e99f6
    L_4e99de:
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x14]
        mov     dl, byte ptr [esp + 0x14]
        mov     byte ptr [esp + 0x13], dl
    L_4e99f6:
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x18]
        fsub    dword ptr [ecx + 0x160]
        mov     cl, byte ptr [ecx + 0x151]
        fmul    dword ptr [esp + 0x3c]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x14]
        mov     al, byte ptr [esp + 0x14]
        cmp     al, cl
        mov     byte ptr [esp + 0x11], al
        jb      L_4e9a30
        dec     cl
        mov     byte ptr [esp + 0x11], cl
    L_4e9a30:
        mov     ebp, dword ptr [esp + 0x1c]
        lea     ecx, [esp + 0x6c]
        call    FUN_00491280
        mov     ecx, 6
        lea     esi, [esp + 0xa4]
        lea     edi, [esp + 0x6c]
        rep movsd
        xor     eax, eax
        mov     edi, ebp
        cmp     edi, eax
        mov     dword ptr [esp + 0x84], eax
        jle     L_4e9a71
    L_4e9a5e:
        mov     ecx, dword ptr [esp + eax*4 + 0xbc]
        mov     dword ptr [esp + eax*4 + 0x84], ecx
        inc     eax
        cmp     eax, edi
        jl      L_4e9a5e
    L_4e9a71:
        cmp     bl, byte ptr [esp + 0x12]
        mov     byte ptr [esp + 0x24], bl
        ja      L_4e9b8f
    L_4e9a7f:
        mov     al, byte ptr [esp + 0x13]
        cmp     al, byte ptr [esp + 0x11]
        mov     byte ptr [esp + 0x20], al
        ja      L_4e9b79
    L_4e9a91:
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [g_7dc728]
        push    edx
        push    eax
        call    FUN_004E2EE0
        mov     esi, eax
        mov     al, byte ptr [esi + 0x178]
        test    al, al
        je      L_4e9ab9
        mov     ecx, esi
        call    FUN_004E8C50
    L_4e9ab9:
        cmp     ebp, edi
        mov     eax, dword ptr [esi + 0x140]
        jne     L_4e9bd1
        xor     edi, edi
        lea     edx, [esp + ebp*4 + 0x84]
        lea     esi, [eax + 0x18]
    L_4e9ad3:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        je      L_4e9b5f
        fld     dword ptr [ecx + 8]
        fcomp   dword ptr [g_7b220c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_4e9b52
        fld     dword ptr [ecx + 0x24]
        mov     eax, dword ptr [ecx + 0x34]
        fsubr   dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x64], eax
        fld     dword ptr [esp + 0x2c]
        mov     eax, dword ptr [ecx + 0x44]
        fsub    dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x68], eax
        fld     dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x68]
        fld     dword ptr [ecx + 0x84]
        fadd    dword ptr [eax + 0x12c]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        fcompp
        __emit 0xDD
        __emit 0xD8
        __emit 0xDD
        __emit 0xD8
        __emit 0xDF
        __emit 0xE0
        __emit 0xDD
        __emit 0xD8
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0xDD
        __emit 0xD8
        jne     L_4e9b52
        mov     dword ptr [edx], ecx
        inc     ebp
        add     edx, 4
        cmp     ebp, 8
        je      L_4e9b9f
    L_4e9b52:
        inc     edi
        add     esi, 4
        cmp     edi, 8
        jl      L_4e9ad3
    L_4e9b5f:
        mov     edi, dword ptr [esp + 0x1c]
    L_4e9b63:
        mov     al, byte ptr [esp + 0x20]
        mov     cl, byte ptr [esp + 0x11]
        inc     al
        cmp     al, cl
        mov     byte ptr [esp + 0x20], al
        jbe     L_4e9a91
    L_4e9b79:
        mov     al, byte ptr [esp + 0x24]
        mov     cl, byte ptr [esp + 0x12]
        inc     al
        cmp     al, cl
        mov     byte ptr [esp + 0x24], al
        jbe     L_4e9a7f
    L_4e9b8f:
        cmp     ebp, 8
        jge     L_4e9b9f
        mov     dword ptr [esp + ebp*4 + 0x84], 0
    L_4e9b9f:
        mov     eax, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0xe0]
        push    eax
        lea     ecx, [esp + 0x70]
        push    ecx
        mov     ecx, dword ptr [esp + 0x4c]
        push    edx
        call    dword ptr [ecx + 0x13c]
        mov     ebp, dword ptr [esp + 0xe0]
        mov     dword ptr [ebp + 0x264], 0
        jmp     L_4e98be
    L_4e9bd1:
        mov     dword ptr [esp + 0x14], 0
        lea     esi, [esp + ebp*4 + 0x84]
        lea     ebx, [eax + 0x18]
    L_4e9be3:
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        je      L_4e9b63
        fld     dword ptr [ecx + 8]
        fcomp   dword ptr [g_7b220c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jne     L_4e9c87
        fld     dword ptr [ecx + 0x24]
        mov     edx, dword ptr [ecx + 0x34]
        fsubr   dword ptr [esp + 0x28]
        mov     eax, dword ptr [ecx + 0x44]
        fld     dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x58], edx
        fsub    dword ptr [esp + 0x58]
        mov     edx, dword ptr [esp + 0x34]
        fld     dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x5c], eax
        fsub    dword ptr [esp + 0x5c]
        fld     dword ptr [ecx + 0x84]
        fadd    dword ptr [edx + 0x12c]
        fld     st(1)
        fmul    st(0), st(2)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fld     st(1)
        fmul    st(0), st(2)
        fcompp
        __emit 0xDD
        __emit 0xD8
        __emit 0xDD
        __emit 0xD8
        __emit 0xDF
        __emit 0xE0
        __emit 0xDD
        __emit 0xD8
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        __emit 0xDD
        __emit 0xD8
        jne     L_4e9c87
        cmp     edi, ebp
        mov     eax, edi
        jge     L_4e9c74
        lea     edx, [esp + edi*4 + 0x84]
    L_4e9c68:
        cmp     ecx, dword ptr [edx]
        je      L_4e9c74
        inc     eax
        add     edx, 4
        cmp     eax, ebp
        jl      L_4e9c68
    L_4e9c74:
        cmp     eax, ebp
        jne     L_4e9c87
        mov     dword ptr [esi], ecx
        inc     ebp
        add     esi, 4
        cmp     ebp, 8
        je      L_4e9b9f
    L_4e9c87:
        mov     eax, dword ptr [esp + 0x14]
        inc     eax
        add     ebx, 4
        cmp     eax, 8
        mov     dword ptr [esp + 0x14], eax
        jl      L_4e9be3
        jmp     L_4e9b63
    L_4e9ca1:
        push    edi
        lea     eax, [esp + 0xa8]
        push    eax
        push    ebp
        mov     ecx, esi
        call    dword ptr [esi + 0x13c]
        mov     dword ptr [ebp + 0x264], 0
        jmp     L_4e98be
    L_4e9cc2:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xcc
        ret     0xc
        nop
    }
}
