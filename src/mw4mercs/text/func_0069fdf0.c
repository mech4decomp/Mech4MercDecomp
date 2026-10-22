/*
 * FUN_0069FDF0 (377 B) — ordered tree/map insertion (__thiscall, RET 8).
 *
 * Inserts a key (param_1) into the red-black-tree-like structure rooted at
 * *this, balancing and updating node links. Two stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0069ff70(void *p);
extern void __cdecl FUN_00411670(void *a, void *b);
extern void __cdecl FUN_004114b0(void *p);
extern void *__cdecl FUN_00647fb0(void *a, void *b, void *c, void *d);
extern void *__cdecl FUN_00647f90(void *a, void *b);
extern void __cdecl FUN_00647970(void *p);

__declspec(naked) void func_0069fdf0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x24
        push    ebx
        mov     ebx, ecx
        cmp     eax, dword ptr [esp + 0x30]
        jz      L_69ff62
        push    ebp
        push    esi
        push    edi
L_69fe07:
        mov     ecx, dword ptr [esp + 0x38]
        lea     ebp, [ecx + 0x10]
        mov     ecx, dword ptr [ebx]
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        mov     edi, ecx
        mov     al, 0x1
        jz      L_69fe36
L_69fe1e:
        mov     edx, dword ptr [ebp]
        cmp     edx, dword ptr [esi + 0x10]
        setl    al
        test    al, al
        mov     edi, esi
        jz      L_69fe2f
        mov     esi, dword ptr [esi + 0x8]
        jmp     L_69fe32
L_69fe2f:
        mov     esi, dword ptr [esi + 0xc]
L_69fe32:
        test    esi, esi
        __emit 0x75  /* __emit: MSVC6 miscomputes backward rel8 (E5 vs ref E8) for this loop branch */
        __emit 0xE8
L_69fe36:
        test    al, al
        mov     dword ptr [esp + 0x14], edi
        jz      L_69feca
        cmp     edi, dword ptr [ecx + 0x8]
        jnz     L_69febd
        cmp     edi, ecx
        jz      L_69fe70
        test    esi, esi
        jnz     L_69fe70
        mov     edx, dword ptr [ebp]
        cmp     edx, dword ptr [edi + 0x10]
        jl      L_69fe70
        push    ebp
        mov     ecx, ebx
        call    FUN_0069ff70
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edi + 0xc], esi
        cmp     edi, dword ptr [eax + 0xc]
        jnz     L_69fe93
        mov     dword ptr [eax + 0xc], esi
        jmp     L_69fe93
L_69fe70:
        push    ebp
        mov     ecx, ebx
        call    FUN_0069ff70
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        cmp     edi, eax
        mov     dword ptr [edi + 0x8], esi
        jnz     L_69fe8b
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0xc], esi
        jmp     L_69fe93
L_69fe8b:
        cmp     edi, dword ptr [eax + 0x8]
        jnz     L_69fe93
        mov     dword ptr [eax + 0x8], esi
L_69fe93:
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
        mov     dword ptr [esp + 0x1c], esi
        mov     byte ptr [esp + 0x20], 0x1
        jmp     L_69ff19
L_69febd:
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_004114b0
        add     esp, 0x4
L_69feca:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx + 0x10]
        cmp     edx, dword ptr [ebp]
        jge     L_69fef7
        push    ebp
        push    edi
        push    esi
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, ebx
        call    FUN_00647fb0
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x24]
        mov     dword ptr [esp + 0x24], ecx
        mov     byte ptr [esp + 0x28], 0x1
        push    edx
        jmp     L_69ff10
L_69fef7:
        lea     eax, [esp + 0x13]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x34]
        mov     byte ptr [esp + 0x1b], 0x0
        call    FUN_00647f90
        push    eax
L_69ff10:
        lea     ecx, [esp + 0x20]
        call    FUN_00647970
L_69ff19:
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        jz      L_69ff38
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jz      L_69ff51
L_69ff2d:
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jnz     L_69ff2d
        jmp     L_69ff51
L_69ff38:
        mov     ecx, dword ptr [eax + 0x4]
        cmp     eax, dword ptr [ecx + 0xc]
        jnz     L_69ff4a
L_69ff40:
        mov     eax, ecx
        mov     ecx, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0xc]
        jz      L_69ff40
L_69ff4a:
        cmp     dword ptr [eax + 0xc], ecx
        jz      L_69ff51
        mov     eax, ecx
L_69ff51:
        cmp     eax, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x38], eax
        jnz     L_69fe07
        pop     edi
        pop     esi
        pop     ebp
L_69ff62:
        pop     ebx
        add     esp, 0x24
        ret     0x8
    }
}
