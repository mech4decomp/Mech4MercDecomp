/*
 * FUN_00560E30 (1097 B) — __thiscall, 3 args (ret 0xc). Parses a numeric
 * string into a grid of float values, interpolates against a lookup table,
 * and emits a formatted output block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00713CC0(void);
extern void __cdecl FUN_0055F430(void);
extern void __cdecl FUN_00560C10(void);
extern void __cdecl FUN_0055E440(void);
extern void __cdecl FUN_00713AE0(void);

extern float g_7DDD84;
extern float g_7DDD80;
extern float g_7DDDB4;
extern float g_76C5B0;
extern unsigned int g_7DDDBC;
extern unsigned int g_7DDDD8;
extern float g_76D070;
extern float g_7DDDB8;
extern float g_76D064;
extern float g_77DFC0;

__declspec(naked) void FUN_00560E30(void)
{
    __asm {
        sub     esp, 0xb0
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    3
        push    0xd
        mov     ebx, ecx
        call    FUN_00713CC0
        xor     ebp, ebp
        push    ebp
        push    0xb
        call    FUN_00713CC0
        push    3
        push    0x10
        call    FUN_00713CC0
        fld     dword ptr [g_7DDD84]
        fmul    dword ptr [esp + 0xc4]
        xor     eax, eax
        mov     ecx, 0x20
        lea     edi, [esp + 0x40]
        fstp    dword ptr [esp + 0xc4]
        rep stosd
        fld     dword ptr [g_7DDD80]
        fmul    dword ptr [esp + 0xc8]
        mov     ecx, dword ptr [ebx + 0x104]
        fstp    dword ptr [esp + 0xc8]
        mov     dword ptr [esp + 0x14], ecx
        fld     dword ptr [g_7DDDB4]
        fcomp   dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 0x40
        jne     l_560ED7
        mov     edi, dword ptr [g_7DDDBC]
        xor     eax, eax
        mov     al, byte ptr [esp + 0x17]
        and     ecx, 0xffffff
        sub     eax, edi
        cmp     eax, ebp
        jge     l_560EC6
        xor     eax, eax
        jmp     l_560ED2
    l_560EC6:
        cmp     eax, 0xff
        jle     l_560ED2
        mov     eax, 0xff
    l_560ED2:
        shl     eax, 0x18
        or      ecx, eax
    l_560ED7:
        lea     eax, [esp + 0x50]
        mov     edx, 4
        mov     edi, 0x3f800000
        mov     esi, 0x3f666666
    l_560EEA:
        mov     dword ptr [eax - 4], edi
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax - 8], esi
        add     eax, 0x20
        dec     edx
        jne     l_560EEA
        mov     ecx, dword ptr [g_7DDDD8]
        call    FUN_0055F430
        push    eax
        push    1
        call    FUN_00713CC0
        mov     eax, dword ptr [esp + 0xc4]
        mov     ecx, dword ptr [esp + 0xc8]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [ebx + 0x10c]
        dec     eax
        mov     dword ptr [esp + 0x14], ecx
        je      l_560FD4
        dec     eax
        je      l_560FAF
        dec     eax
        jne     l_561000
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        fld     dword ptr [ebx + 0x124]
        fsub    dword ptr [ebx + 0x11c]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], ebp
        fisub   dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ebp
        fmul    dword ptr [g_76D070]
        fadd    dword ptr [ebx + 0x11c]
        fmul    dword ptr [g_7DDD84]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [ebx + 0x128]
        fsub    dword ptr [ebx + 0x120]
        fisub   dword ptr [esp + 0x18]
        fmul    dword ptr [g_76D070]
        fadd    dword ptr [ebx + 0x120]
        fmul    dword ptr [g_7DDD80]
        fstp    dword ptr [esp + 0x14]
        jmp     l_561000
    l_560FAF:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x20]
        shr     edx, 1
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x1c], ebp
        fild    qword ptr [esp + 0x18]
        jmp     l_560FF5
    l_560FD4:
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], ebp
        fild    qword ptr [esp + 0x18]
    l_560FF5:
        fsubr   dword ptr [esp + 0xc4]
        fstp    dword ptr [esp + 0x10]
    l_561000:
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 8]
        push    eax
        mov     ecx, ebx
        call    FUN_00560C10
        mov     esi, eax
        inc     esi
        jns     l_561018
        xor     esi, esi
        jmp     l_561022
    l_561018:
        cmp     esi, 0xd
        jle     l_561022
        mov     esi, 0xd
    l_561022:
        or      ecx, 0xffffffff
        lea     edx, [ebx + 4]
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, ebp
        mov     dword ptr [esp + 0x18], ecx
        jle     l_56126C
        mov     ebp, edx
        mov     edx, 0xfffffffc
        sub     edx, ebx
        mov     dword ptr [esp + 0x3c], edx
    l_56104A:
        mov     al, byte ptr [ebp]
        cmp     al, 0x20
        jne     l_56107B
        lea     eax, [esi + esi*4]
        lea     eax, [esi + eax*2]
        shl     eax, 4
        mov     edi, dword ptr [eax + 0x7b4758]
        sub     edi, dword ptr [eax + 0x7b4750]
        mov     dword ptr [esp + 0x24], edi
        fild    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        jmp     l_561260
    l_56107B:
        cmp     al, 0x6d
        jne     l_561086
        mov     eax, 0xa
        jmp     l_56109C
    l_561086:
        cmp     al, 0x30
        jl      l_561260
        cmp     al, 0x39
        jg      l_561260
        movsx   eax, al
        sub     eax, 0x30
    l_56109C:
        add     eax, esi
        lea     ecx, [esi + esi*4]
        lea     eax, [eax + ecx*2]
        shl     eax, 4
        mov     edx, dword ptr [eax + 0x7b4750]
        mov     ecx, dword ptr [eax + 0x7b4758]
        mov     edi, dword ptr [eax + 0x7b4754]
        mov     eax, dword ptr [eax + 0x7b475c]
        mov     dword ptr [esp + 0x2c], ecx
        sub     ecx, edx
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x24], ecx
        fild    dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x30], eax
        sub     eax, edi
        mov     dword ptr [esp + 0x24], eax
        fadd    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x40], ebx
        mov     ebx, dword ptr [esp + 0x14]
        fld     st(0)
        mov     dword ptr [esp + 0xa0], eax
        fadd    dword ptr [g_76D064]
        mov     dword ptr [esp + 0x34], edx
        mov     edx, ebx
        mov     dword ptr [esp + 0x38], edi
        fst     dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x44], ebx
        fstp    dword ptr [esp + 0x80]
        mov     dword ptr [esp + 0x64], edx
        fild    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x14]
        fadd    dword ptr [g_76D064]
        fst     dword ptr [esp + 0x84]
        fstp    dword ptr [esp + 0xa4]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [g_7DDDB8]
        fcomp   dword ptr [g_76C5B0]
        fnstsw  ax
        test    ah, 0x40
        jne     l_5611E2
        push    1
        push    0xb
        call    FUN_00713CC0
        mov     ecx, dword ptr [esp + 0x40]
        push    ecx
        call    FUN_0055E440
        fstp    dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x48]
        push    edx
        call    FUN_0055E440
        fstp    dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x68]
        push    eax
        call    FUN_0055E440
        fstp    dword ptr [esp + 0x6c]
        mov     ecx, dword ptr [esp + 0x70]
        push    ecx
        call    FUN_0055E440
        fstp    dword ptr [esp + 0x74]
        mov     edx, dword ptr [esp + 0x90]
        push    edx
        call    FUN_0055E440
        fstp    dword ptr [esp + 0x94]
        mov     eax, dword ptr [esp + 0x98]
        push    eax
        call    FUN_0055E440
        fstp    dword ptr [esp + 0x9c]
        mov     ecx, dword ptr [esp + 0xb8]
        push    ecx
        call    FUN_0055E440
        fstp    dword ptr [esp + 0xbc]
        mov     edx, dword ptr [esp + 0xc0]
        push    edx
        call    FUN_0055E440
        fstp    dword ptr [esp + 0xc4]
        add     esp, 0x20
    l_5611E2:
        fild    dword ptr [esp + 0x34]
        push    4
        lea     edx, [esp + 0x44]
        push    edx
        fmul    dword ptr [g_77DFC0]
        fst     dword ptr [esp + 0x60]
        fild    dword ptr [esp + 0x40]
        fmul    dword ptr [g_77DFC0]
        fst     dword ptr [esp + 0x64]
        fild    dword ptr [esp + 0x34]
        fmul    dword ptr [g_77DFC0]
        fst     dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x80]
        mov     dword ptr [esp + 0xa0], eax
        fstp    dword ptr [esp + 0x84]
        fild    dword ptr [esp + 0x38]
        fmul    dword ptr [g_77DFC0]
        fst     dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0xa4]
        mov     dword ptr [esp + 0xc4], ecx
        fstp    dword ptr [esp + 0xc0]
        call    FUN_00713AE0
        mov     edx, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x18]
    l_561260:
        inc     ebp
        lea     eax, [edx + ebp]
        cmp     eax, ecx
        jl      l_56104A
    l_56126C:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xb0
        ret     0xc
    }
}
