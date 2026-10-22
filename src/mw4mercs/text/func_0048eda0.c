/*
 * FUN_0048eda0 (525 B) — MLR light/render-record builder (__thiscall, RET 0x4).
 * Iterates lights, computes per-light matrices/colors, builds render records,
 * and dispatches a virtual call on the object at [this+0x110].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern float g_0076fe78;

__declspec(naked) void FUN_0048eda0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        mov     edx, dword ptr [ecx + 0x114]
        mov     eax, dword ptr [ecx + 0x124]
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ebx, dword ptr [esi + 0x10]
        shl     edx, 0x5
        add     edx, eax
        push    edi
        xor     edi, edi
        xor     eax, eax
        cmp     ebx, edi
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x18], edx
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x4], edi
        jle     L_efa4
L_eddb:
        mov     ebx, dword ptr [esi + 0xc]
        cmp     byte ptr [ebx + eax], 0x1
        jnz     L_ef7e
        mov     ebx, dword ptr [esi + 0x14]
        add     ebx, 0x4
        cmp     edi, ebx
        mov     dword ptr [esi + 0x14], ebx
        jge     L_ef7e
        mov     ecx, edi
        shl     ecx, 0x5
        lea     edx, [ecx + edx + 0x8]
        jmp     L_ee0d
L_ee04:
        mov     esi, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]
L_ee0d:
        mov     ecx, dword ptr [esi]
        fld     dword ptr [g_0076d064]
        shl     eax, 0x2
        and     edi, 0x3
        add     edi, eax
        mov     eax, edi
        shl     eax, 0x4
        fsub    dword ptr [ecx + eax]
        add     ecx, eax
        mov     ebx, dword ptr [ecx + 0x8]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [edx - 0x8]
        fld     dword ptr [g_0076d064]
        fsub    dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0xc]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [edx - 0x4]
        mov     dword ptr [edx], ebx
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [esi + 0x4]
        add     ecx, eax
        mov     dword ptr [ebp - 0x10], ecx
        fld     dword ptr [g_0076fe78]
        mov     esi, dword ptr [ebp - 0x10]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0xc], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0xc], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0xc], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x14]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x14]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0xc]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0xc], ecx
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [ecx + 0x14]
        mov     dword ptr [edx + 0x8], eax
        mov     eax, dword ptr [ecx + 0x8]
        lea     edi, [eax + edi*0x8]
        mov     eax, dword ptr [edi]
        mov     dword ptr [edx + 0x10], eax
        mov     eax, dword ptr [edi + 0x4]
        mov     dword ptr [edx + 0x14], eax
        mov     eax, dword ptr [ebp - 0x4]
        inc     eax
        add     edx, 0x20
        cmp     eax, esi
        mov     dword ptr [ebp - 0x4], eax
        jl      L_ee04
        mov     edx, dword ptr [ebp - 0x18]
        mov     esi, ecx
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edi, eax
        mov     eax, dword ptr [ebp - 0x8]
L_ef7e:
        mov     ebx, dword ptr [esi + 0x10]
        inc     eax
        cmp     eax, ebx
        mov     dword ptr [ebp - 0x8], eax
        jl      L_eddb
        test    edi, edi
        jle     L_efa4
        add     dword ptr [ecx + 0x114], edi
        mov     ecx, dword ptr [ecx + 0x110]
        mov     eax, dword ptr [ecx]
        push    esi
        push    edx
        call    dword ptr [eax + 0x10]
L_efa4:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
