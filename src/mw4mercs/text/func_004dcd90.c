/*
 * FUN_004dcd90 (780 B) — cdecl Adept/MLR component loader. Parses a
 * component list, builds a component-array object (vtable 0x76cd64),
 * iterates entries dispatching to FUN_004dccf0, and tears everything down.
 * Uses global state at 0x007db0b0 (current component array) and virtual
 * calls (vtable+0x24).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d24f0(void);
extern void __cdecl FUN_004d2630(void);
extern void __cdecl FUN_004d2840(void);
extern void __cdecl FUN_004d05d0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004c41d0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dcbf0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_004dccf0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_004d21c0(void);

extern void *g_007db0b0;
extern int g_007b8c10;
extern int g_007b8810;

__declspec(naked) void FUN_004dcd90(void)
{
    __asm {
        sub     esp, 0xcc
        push    ebx
        push    edi
        mov     edi, dword ptr [esp + 0xe0]
        mov     eax, dword ptr [edi]
        xor     ebx, ebx
        push    ebx
        push    eax
        lea     ecx, [esp + 0x60]
        call    FUN_004d2000
        cmp     dword ptr [esp + 0x94], ebx
        jz      L_skip
        cmp     dword ptr [esp + 0x74], ebx
        jbe     L_skip
        lea     ecx, [esp + 0x58]
        call    FUN_004d24f0
        test    al, al
        jz      L_skip
        lea     ecx, [esp + 0x58]
        call    FUN_004d2630
        test    al, al
        jnz     L_epilogue
        mov     ecx, dword ptr [g_007db0b0]
        push    ecx
        lea     ecx, [esp + 0x5c]
        call    FUN_004d2840
        jmp     L_epilogue

L_skip:
        mov     edx, dword ptr [g_007b8c10]
        push    ebp
        push    esi
        push    edx
        lea     ecx, [esp + 0xa8]
        call    FUN_004d05d0
        push    ebx
        lea     ecx, [esp + 0xb8]
        call    FUN_0041ee70
        lea     eax, [edi + 0xc]
        push    eax
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0xa8], 0x76d1f0
        call    FUN_00412b80
        mov     eax, dword ptr [g_007b8810]
        mov     ecx, dword ptr [g_007db0b0]
        push    eax
        lea     edx, [esp + 0xa8]
        push    0xc
        mov     dword ptr [esp + 0x60], ecx
        mov     dword ptr [g_007db0b0], edx
        call    FUN_004084c0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, ebx
        jz      L_alloc_fail
        add     edi, 0x44
        push    edi
        mov     ecx, esi
        call    FUN_004c41d0
        mov     edi, esi
        mov     dword ptr [esi], 0x76cd64
        mov     dword ptr [esp + 0x10], edi
        jmp     L_after_alloc
L_alloc_fail:
        mov     dword ptr [esp + 0x10], ebx
        mov     edi, ebx
L_after_alloc:
        mov     ecx, dword ptr [edi + 0x4]
        call    FUN_00417a40
        push    ebx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_0041ee70
        mov     edx, dword ptr [esp + 0x30]
        push    0x4
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x38]
        call    dword ptr [edx + 0x24]
        lea     eax, [esp + 0x30]
        push    0x8
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x30], 0x5031a0
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, ebx
        jz      L_arr_alloc_fail
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi], ebx
        mov     dword ptr [esi + 0x4], ebx
        call    FUN_004dcbf0
        mov     dword ptr [esp + 0x28], esi
        jmp     L_after_arr_alloc
L_arr_alloc_fail:
        mov     dword ptr [esp + 0x28], ebx
L_after_arr_alloc:
        mov     ebp, dword ptr [esp + 0xe4]
        mov     eax, dword ptr [edi + 0x8]
        cmp     eax, ebx
        jz      L_no_head
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [edi + 0x8], edx
        jmp     L_have_head
L_no_head:
        xor     ecx, ecx
L_have_head:
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x24], ecx
        jz      L_cleanup
        push    0x1
        lea     eax, [esp + 0x60]
        push    eax
        push    0x773784
        call    FUN_00411bf0
        mov     esi, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x30]
        push    0x4
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x38]
        sub     esi, eax
        mov     dword ptr [esp + 0x1c], ebx
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x5c]
        push    ebp
        lea     eax, [esp + 0x20]
        push    eax
        push    ecx
        call    FUN_004dccf0
        mov     edi, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x54]
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x4c]
        sub     edi, eax
        add     eax, esi
        add     esp, 0xc
        cmp     eax, ecx
        mov     dword ptr [esp + 0x44], eax
        jbe     L_bounds1
        mov     dword ptr [esp + 0x48], eax
L_bounds1:
        mov     edx, edi
        sub     edx, esi
        push    0x4
        lea     eax, [esp + 0x18]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x38]
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x48]
        add     eax, edi
        cmp     eax, ecx
        mov     dword ptr [esp + 0x44], eax
        jbe     L_bounds2
        mov     dword ptr [esp + 0x48], eax
L_bounds2:
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, eax
        inc     eax
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [edx]
        lea     esi, [eax + ecx*0x8]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [ecx + 0x14]
        push    edx
        lea     ecx, [esi + 0x4]
        call    FUN_00412780
        mov     edi, dword ptr [esp + 0x10]
        mov     dword ptr [esi], ebx
        xor     ebx, ebx
        /* __emit: backward near jmp rel-offset miscomputed by MSVC6 (off-by-7
           because call relocs sit between branch and target) */
        __emit 0xE9
        __emit 0x1E
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF

L_cleanup:
        mov     ebp, dword ptr [esp + 0x28]
        cmp     ebp, ebx
        jz      L_free_cc
        mov     ecx, dword ptr [ebp]
        cmp     ecx, ebx
        jz      L_free_ebp
        mov     eax, dword ptr [ecx - 0x4]
        lea     ebx, [ecx - 0x4]
        lea     ecx, [ecx + eax*0x8]
        dec     eax
        js      L_free_buf
        lea     esi, [ecx + 0x4]
        lea     edi, [eax + 0x1]
L_free_loop:
        sub     esi, 0x8
        mov     ecx, esi
        call    FUN_0040d9b0
        dec     edi
        jnz     L_free_loop
        mov     edi, dword ptr [esp + 0x10]
L_free_buf:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_free_ebp:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_free_cc:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
        lea     eax, [esp + 0xa4]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x68]
        call    FUN_004d2680
        lea     ecx, [esp + 0x60]
        call    FUN_004d2630
        test    al, al
        pop     esi
        pop     ebp
        jnz     L_restore
        mov     ecx, dword ptr [g_007db0b0]
        lea     edx, [esp + 0x9c]
        push    edx
        call    FUN_00412e70
L_restore:
        mov     eax, dword ptr [esp + 0x50]
        lea     ecx, [esp + 0x28]
        mov     dword ptr [g_007db0b0], eax
        call    FUN_0041ef60
        lea     ecx, [esp + 0x9c]
        call    FUN_00412b60
L_epilogue:
        mov     eax, dword ptr [esp + 0xd8]
        mov     cx, word ptr [esp + 0x98]
        mov     dx, word ptr [esp + 0x9a]
        mov     word ptr [eax], cx
        lea     ecx, [esp + 0x58]
        mov     word ptr [eax + 0x2], dx
        call    FUN_004d21c0
        pop     edi
        pop     ebx
        add     esp, 0xcc
        ret
    }
}
