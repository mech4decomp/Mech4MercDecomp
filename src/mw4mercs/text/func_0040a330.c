/*
 * FUN_0040a330 (1206 B) — engine init/config routine. Builds a 0x32-entry
 * table on the stack, then drives a series of container/iterator setup and
 * teardown passes over two sub-objects (at +0x10 and +0x28 of the object
 * in ECX) via the FUN_004171xx / FUN_004172xx helper family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00409fe0(void);
extern void __cdecl FUN_00416f20(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171c0(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_004171e0(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_00417200(void);
extern void __cdecl FUN_00417220(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_00417260(void);
extern void __cdecl FUN_004172a0(void);
extern void __cdecl FUN_004172c0(void);
extern void __cdecl FUN_00415cc0(void);

__declspec(naked) void FUN_0040a330(void)
{
    __asm {
        sub     esp, 0xf4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        xor     ebp, ebp
        xor     eax, eax
        lea     ecx, [esp+0x3c]
fill:
        mov     dword ptr [ecx], eax
        inc     eax
        add     ecx, 4
        cmp     eax, 0x32
        jl      fill
        xor     ecx, ecx
        mov     dword ptr [esp+0x10], ecx
shuffle:
        mov     eax, 0x32
        sub     eax, ecx
        push    eax
        call    FUN_00415040
        mov     ecx, dword ptr [esp+0x14]
        mov     esi, dword ptr [esp+ecx*4+0x40]
        add     eax, ecx
        mov     edx, dword ptr [esp+eax*4+0x40]
        lea     eax, [esp+eax*4+0x40]
        add     esp, 4
        mov     dword ptr [eax], esi
        mov     dword ptr [esp+ecx*4+0x3c], edx
        inc     ecx
        cmp     ecx, 0x32
        mov     dword ptr [esp+0x10], ecx
        jl      shuffle
        lea     esi, [edi+0x10]
        mov     dword ptr [esp+0x10], ebp
        add     edi, 0x28
loop1:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      l1_nofree
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+ecx*4+0x3c]
        push    edx
        mov     ecx, eax
        call    FUN_00409fe0
        mov     ebx, eax
        jmp     l1_cont
l1_nofree:
        xor     ebx, ebx
l1_cont:
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [esp+eax*4+0x3c]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00416f20
        mov     edx, dword ptr [esp+0x10]
        lea     eax, [esp+edx*4+0x3c]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00416f20
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      loop1
        mov     dword ptr [esp+0x10], ebp
loop2:
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_00416f60
        lea     edx, [esp+0x10]
        push    edx
        mov     ecx, edi
        call    FUN_00416f60
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      loop2
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00417170
        mov     ebp, 0x76cf08
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00417170
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x14], ebp
        call    FUN_004171c0
        lea     ecx, [esp+0x14]
        call    FUN_004171c0
        lea     ecx, [esp+0x28]
        call    FUN_00417280
        lea     ecx, [esp+0x14]
        call    FUN_00417280
        lea     ecx, [esp+0x28]
        call    FUN_004171e0
        lea     ecx, [esp+0x14]
        call    FUN_004171e0
        lea     ecx, [esp+0x28]
        call    FUN_00417280
        lea     ecx, [esp+0x14]
        call    FUN_00417280
        lea     ecx, [esp+0x14]
        call    FUN_004171b0
        lea     ecx, [esp+0x28]
        call    FUN_004171b0
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00417170
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00417170
        xor     ebx, ebx
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_00417280
        test    eax, eax
        jz      l3_done
loop3:
        lea     ecx, [esp+0x14]
        call    FUN_00417280
        lea     ecx, [esp+0x28]
        call    FUN_00417200
        lea     ecx, [esp+0x14]
        call    FUN_00417200
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00417280
        test    eax, eax
        jnz     loop3
l3_done:
        lea     ecx, [esp+0x28]
        call    FUN_004171e0
        lea     ecx, [esp+0x14]
        call    FUN_004171e0
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x10], 0x31
        call    FUN_00417280
        test    eax, eax
        jz      l4_done
loop4:
        lea     ecx, [esp+0x14]
        call    FUN_00417280
        lea     ecx, [esp+0x28]
        call    FUN_00417220
        lea     ecx, [esp+0x14]
        call    FUN_00417220
        mov     edx, dword ptr [esp+0x10]
        dec     edx
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00417280
        test    eax, eax
        jnz     loop4
l4_done:
        lea     ecx, [esp+0x14]
        call    FUN_004171b0
        lea     ecx, [esp+0x28]
        call    FUN_004171b0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00417170
        push    edi
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00417170
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x28], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_00417230
        test    eax, eax
        jz      l5_done
loop5:
        lea     ecx, [esp+0x28]
        call    FUN_00417230
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00417230
        test    eax, eax
        jnz     loop5
l5_done:
        lea     ecx, [esp+0x14]
        call    FUN_004171e0
        lea     ecx, [esp+0x28]
        call    FUN_004171e0
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], 0x31
        call    FUN_00417260
        test    eax, eax
        jz      l6_done
loop6:
        lea     ecx, [esp+0x28]
        call    FUN_00417260
        mov     edx, dword ptr [esp+0x10]
        dec     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00417260
        test    eax, eax
        jnz     loop6
l6_done:
        lea     ecx, [esp+0x28]
        call    FUN_004171b0
        lea     ecx, [esp+0x14]
        call    FUN_004171b0
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00417170
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00417170
        xor     eax, eax
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x10], eax
loop7:
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_004172a0
        mov     eax, dword ptr [esp+0x10]
        push    eax
        lea     ecx, [esp+0x18]
        call    FUN_004172a0
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      loop7
        lea     ecx, [esp+0x14]
        call    FUN_004171b0
        lea     ecx, [esp+0x28]
        call    FUN_004171b0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00417170
        push    edi
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00417170
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x28], ebp
        mov     dword ptr [esp+0x10], ebx
        call    FUN_00417280
        test    eax, eax
        jz      l8_done
loop8:
        lea     ecx, [esp+0x14]
        call    FUN_004172c0
        push    ebx
        lea     ecx, [esp+0x2c]
        call    FUN_004172a0
        cmp     eax, ebx
        jz      l8_skip
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
l8_skip:
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00417280
        test    eax, eax
        jnz     loop8
l8_done:
        lea     ecx, [esp+0x28]
        call    FUN_004171b0
        lea     ecx, [esp+0x14]
        call    FUN_004171b0
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_00417170
        push    edi
        lea     ecx, [esp+0x18]
        mov     dword ptr [esp+0x2c], ebp
        call    FUN_00417170
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x10], ebx
        jmp     l9_cont
l9_nofree:
        xor     ebx, ebx
l9_cont:
        push    0x14
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      l9_skip
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+ecx*4+0x3c]
        push    edx
        mov     ecx, eax
        call    FUN_00409fe0
        mov     ebx, eax
l9_skip:
        mov     eax, dword ptr [esp+0x10]
        lea     ecx, [esp+eax*4+0x3c]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_00416f20
        mov     edx, dword ptr [esp+0x10]
        lea     eax, [esp+edx*4+0x3c]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_00416f20
        mov     eax, dword ptr [esp+0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp+0x10], eax
        jl      l9_nofree
        lea     ecx, [esp+0x14]
        call    FUN_004171b0
        lea     ecx, [esp+0x28]
        call    FUN_004171b0
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_00417170
        push    edi
        lea     ecx, [esp+0x2c]
        mov     dword ptr [esp+0x18], ebp
        call    FUN_00417170
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x28], ebp
        mov     dword ptr [esp+0x10], 0
        call    FUN_00415cc0
        test    eax, eax
        jz      l10_done
loop10:
        push    eax
        call    FUN_00415040
        add     esp, 4
        mov     esi, eax
        push    esi
        lea     ecx, [esp+0x18]
        call    FUN_004172a0
        lea     ecx, [esp+0x14]
        call    FUN_004172c0
        push    esi
        lea     ecx, [esp+0x2c]
        call    FUN_004172a0
        test    eax, eax
        jz      l10_skip
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
l10_skip:
        mov     edx, dword ptr [esp+0x10]
        inc     edx
        lea     ecx, [esp+0x14]
        mov     dword ptr [esp+0x10], edx
        call    FUN_00415cc0
        test    eax, eax
        jnz     loop10
l10_done:
        lea     ecx, [esp+0x28]
        call    FUN_004171b0
        lea     ecx, [esp+0x14]
        call    FUN_004171b0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0xf4
        ret
    }
}
