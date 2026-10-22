/*
 * FUN_1003de52 (815 B) -- __cdecl.
 * Heap integrity validator: walks the buddy-allocator arena pages and
 * free-lists, verifying block sizes, bitmap consistency, and list links.
 * Returns 0 on success or a negative error code on the first inconsistency.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076858;
extern unsigned int g_1007685c;
extern void *g_1004914c;

__declspec(naked) void FUN_1003de52(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x13c
        mov     eax, dword ptr [g_10076858]
        push    ebx
        push    esi
        push    edi
        lea     eax, [eax + eax*4]
        shl     eax, 0x2
        push    eax
        push    dword ptr [g_1007685c]
        call    dword ptr [g_1004914c]
        test    eax, eax
        jz      L_82
        or      eax, 0xffffffff
        jmp     L_13f
    L_82:
        mov     ebx, dword ptr [g_1007685c]
        xor     edi, edi
        cmp     dword ptr [g_10076858], edi
        mov     dword ptr [ebp - 0x38], ebx
        mov     dword ptr [ebp - 0x20], edi
        jle     L_13d
        jmp     L_a0
    L_9e:
        xor     edi, edi
    L_a0:
        mov     esi, dword ptr [ebx + 0x10]
        push    0x41c4
        push    esi
        call    dword ptr [g_1004914c]
        test    eax, eax
        jnz     L_144
        mov     eax, dword ptr [ebx + 0xc]
        mov     dword ptr [ebp - 0x2c], edi
        mov     dword ptr [ebp - 0xc], eax
        lea     eax, [esi + 0x144]
        mov     dword ptr [ebp - 0x28], eax
        mov     eax, dword ptr [ebx + 0x8]
        add     esi, 0xc4
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x3c], esi
        jmp     L_e2
    L_e0:
        xor     edi, edi
    L_e2:
        push    0x40
        mov     dword ptr [ebp - 0x24], edi
        mov     dword ptr [ebp - 0x1c], edi
        mov     dword ptr [ebp - 0x4], edi
        xor     eax, eax
        pop     ecx
        cmp     dword ptr [ebp - 0x14], eax
        lea     edi, [ebp - 0x13c]
        rep stosd
        jl      L_db
        push    0x8000
        push    dword ptr [ebp - 0xc]
        call    dword ptr [g_1004914c]
        test    eax, eax
        jnz     L_148
        mov     eax, dword ptr [ebp - 0xc]
        xor     ebx, ebx
        lea     edx, [eax + 0xffc]
    L_22:
        cmp     dword ptr [edx - 0xff4], -1
        lea     esi, [edx - 0xff0]
        jnz     L_158
        cmp     dword ptr [edx], -1
        jnz     L_158
    L_3e:
        mov     ecx, dword ptr [esi]
        test    cl, 0x1
        mov     edi, ecx
        jz      L_59
        dec     ecx
        cmp     ecx, 0x400
        jg      L_14c
        inc     dword ptr [ebp - 0x4]
        jmp     L_75
    L_59:
        mov     eax, ecx
        sar     eax, 0x4
        dec     eax
        cmp     eax, 0x3f
        jle     L_67
        push    0x3f
        pop     eax
    L_67:
        inc     dword ptr [ebp + eax*4 - 0x13c]
        lea     eax, [ebp + eax*4 - 0x13c]
    L_75:
        cmp     ecx, 0x10
        jl      L_154
        test    cl, 0xf
        jnz     L_154
        cmp     ecx, 0xff0
        jg      L_154
        cmp     dword ptr [ecx + esi - 0x4], edi
        lea     eax, [ecx + esi]
        jnz     L_150
        mov     esi, eax
        cmp     esi, edx
        jc      L_3e
        jnz     L_150
        add     edx, 0x1000
        inc     ebx
        cmp     ebx, 0x8
        jl      L_22
        mov     esi, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x4]
        cmp     dword ptr [esi], eax
        jnz     L_15c
        and     dword ptr [ebp - 0x8], 0
        lea     eax, [ebp - 0x13c]
        mov     dword ptr [ebp - 0x4], eax
    L_d7:
        mov     eax, dword ptr [esi + 0x4]
        and     dword ptr [ebp - 0x10], 0
        lea     edi, [esi + 0x8]
        mov     edx, esi
        cmp     eax, esi
        mov     dword ptr [ebp - 0x34], edx
        jz      L_a3
    L_ee:
        mov     ebx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x10]
        cmp     ecx, dword ptr [ebx]
        jz      L_76
        mov     ecx, dword ptr [ebp - 0xc]
        cmp     eax, ecx
        jc      L_16c
        add     ecx, 0x8000
        cmp     eax, ecx
        jnc     L_16c
        mov     ecx, eax
        and     cx, 0xf000
        add     ecx, 0xc
        lea     edx, [ecx + 0xff0]
        cmp     ecx, edx
        jz      L_160
    L_29:
        cmp     ecx, eax
        jz      L_38
        mov     ebx, dword ptr [ecx]
        and     ebx, 0xfffffffe
        add     ecx, ebx
        cmp     ecx, edx
        jnz     L_29
    L_38:
        cmp     ecx, edx
        jz      L_160
        mov     ecx, dword ptr [eax]
        sar     ecx, 0x4
        dec     ecx
        cmp     ecx, 0x3f
        jle     L_4e
        push    0x3f
        pop     ecx
    L_4e:
        cmp     ecx, dword ptr [ebp - 0x8]
        jnz     L_164
        mov     ecx, dword ptr [ebp - 0x34]
        cmp     dword ptr [eax + 0x8], ecx
        jnz     L_168
        inc     dword ptr [ebp - 0x10]
        mov     edx, eax
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x34], edx
        cmp     eax, esi
        jnz     L_ee
    L_76:
        cmp     dword ptr [ebp - 0x10], 0
        jz      L_a3
        mov     ecx, dword ptr [ebp - 0x8]
        cmp     ecx, 0x20
        jge     L_93
        mov     eax, 0x80000000
        shr     eax, cl
        or      dword ptr [ebp - 0x24], eax
        or      dword ptr [ebp - 0x2c], eax
        jmp     L_a3
    L_93:
        add     ecx, -0x20
        mov     eax, 0x80000000
        shr     eax, cl
        or      dword ptr [ebp - 0x1c], eax
        or      dword ptr [ebp - 0x18], eax
    L_a3:
        cmp     dword ptr [edx + 0x4], esi
        jnz     L_174
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [ecx]
        jnz     L_174
        cmp     dword ptr [edi], edx
        jnz     L_170
        inc     dword ptr [ebp - 0x8]
        add     dword ptr [ebp - 0x4], 0x4
        cmp     dword ptr [ebp - 0x8], 0x40
        mov     esi, edi
        jl      L_d7
        mov     esi, dword ptr [ebp - 0x3c]
        mov     ebx, dword ptr [ebp - 0x38]
    L_db:
        mov     eax, dword ptr [ebp - 0x24]
        cmp     eax, dword ptr [esi - 0x80]
        jnz     L_178
        mov     eax, dword ptr [ebp - 0x1c]
        cmp     eax, dword ptr [esi]
        jnz     L_178
        add     dword ptr [ebp - 0xc], 0x8000
        add     dword ptr [ebp - 0x28], 0x204
        shl     dword ptr [ebp - 0x14], 0x1
        inc     dword ptr [ebp - 0x30]
        add     esi, 0x4
        cmp     dword ptr [ebp - 0x30], 0x20
        mov     dword ptr [ebp - 0x3c], esi
        jl      L_e0
        mov     eax, dword ptr [ebp - 0x2c]
        cmp     eax, dword ptr [ebx]
        jnz     L_17c
        mov     eax, dword ptr [ebp - 0x18]
        cmp     eax, dword ptr [ebx + 0x4]
        jnz     L_17c
        add     ebx, 0x14
        inc     dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x38], ebx
        cmp     eax, dword ptr [g_10076858]
        jl      L_9e
    L_13d:
        xor     eax, eax
    L_13f:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L_144:
        push    -0x2
        jmp     L_17e
    L_148:
        push    -0x4
        jmp     L_17e
    L_14c:
        push    -0x6
        jmp     L_17e
    L_150:
        push    -0x8
        jmp     L_17e
    L_154:
        push    -0x7
        jmp     L_17e
    L_158:
        push    -0x5
        jmp     L_17e
    L_15c:
        push    -0x9
        jmp     L_17e
    L_160:
        push    -0xb
        jmp     L_17e
    L_164:
        push    -0xc
        jmp     L_17e
    L_168:
        push    -0xd
        jmp     L_17e
    L_16c:
        push    -0xa
        jmp     L_17e
    L_170:
        push    -0xf
        jmp     L_17e
    L_174:
        push    -0xe
        jmp     L_17e
    L_178:
        push    -0x10
        jmp     L_17e
    L_17c:
        push    -0x11
    L_17e:
        pop     eax
        jmp     L_13f
    }
}
