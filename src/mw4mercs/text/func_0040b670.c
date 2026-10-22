/*
 * FUN_0040b670 (1173 B) — __fastcall loader/engine initialization routine.
 * Builds several object pools (0x32 entries each) via FUN_0040b410 /
 * FUN_00417530, then runs a series of list-processing passes through the
 * FUN_004176xx / FUN_004177xx helper family. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(int size);
extern void __cdecl FUN_0040b410(void);
extern void __cdecl FUN_00417530(void *p);
extern void __cdecl FUN_00417640(void *p, int a);
extern void __cdecl FUN_004176c0(void);
extern void __cdecl FUN_00417740(void);
extern void __cdecl FUN_004176d0(void);
extern void __cdecl FUN_004176a0(void);
extern void __cdecl FUN_004176e0(void);
extern void __cdecl FUN_004176f0(void);
extern void __cdecl FUN_00417700(void);
extern void __cdecl FUN_00417720(void);
extern void __cdecl FUN_00417750(int a);
extern void __cdecl FUN_00417780(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00415040(void *p);
extern void __cdecl FUN_00417790(void *p);

__declspec(naked) void FUN_0040b670(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     ebp, ebp
        lea     ebx, [ecx + 0x10]
        lea     esi, [ecx + 0x20]
L_alloc_loop:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_done
        push    ebp
        mov     ecx, eax
        call    FUN_0040b410
        mov     edi, eax
        jmp     L_after_alloc
L_alloc_done:
        xor     edi, edi
L_after_alloc:
        push    edi
        mov     ecx, ebx
        call    FUN_00417530
        push    edi
        mov     ecx, esi
        call    FUN_00417530
        inc     ebp
        cmp     ebp, 0x32
        jl      L_alloc_loop
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x18]
        call    FUN_00417640
        push    0x1
        mov     edi, 0x76cff8
        push    esi
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00417640
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x28], edi
        call    FUN_004176c0
        lea     ecx, [esp + 0x28]
        call    FUN_004176c0
        lea     ecx, [esp + 0x10]
        call    FUN_00417740
        lea     ecx, [esp + 0x28]
        call    FUN_00417740
        lea     ecx, [esp + 0x10]
        call    FUN_004176d0
        lea     ecx, [esp + 0x28]
        call    FUN_004176d0
        lea     ecx, [esp + 0x10]
        call    FUN_00417740
        lea     ecx, [esp + 0x28]
        call    FUN_00417740
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        lea     ecx, [esp + 0x10]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x18]
        call    FUN_00417640
        push    0x1
        push    esi
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00417640
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x28], edi
        call    FUN_00417740
        test    eax, eax
        jz      L_after_loop1
L_loop1:
        lea     ecx, [esp + 0x28]
        call    FUN_00417740
        lea     ecx, [esp + 0x10]
        call    FUN_004176e0
        lea     ecx, [esp + 0x28]
        call    FUN_004176e0
        lea     ecx, [esp + 0x10]
        call    FUN_00417740
        test    eax, eax
        jnz     L_loop1
L_after_loop1:
        lea     ecx, [esp + 0x10]
        call    FUN_004176d0
        lea     ecx, [esp + 0x28]
        call    FUN_004176d0
        lea     ecx, [esp + 0x10]
        call    FUN_00417740
        test    eax, eax
        jz      L_after_loop2
L_loop2:
        lea     ecx, [esp + 0x28]
        call    FUN_00417740
        lea     ecx, [esp + 0x10]
        call    FUN_004176f0
        lea     ecx, [esp + 0x28]
        call    FUN_004176f0
        lea     ecx, [esp + 0x10]
        call    FUN_00417740
        test    eax, eax
        jnz     L_loop2
L_after_loop2:
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        lea     ecx, [esp + 0x10]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x30]
        call    FUN_00417640
        push    0x1
        push    esi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x30], edi
        call    FUN_00417640
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x10], edi
        call    FUN_00417700
        test    eax, eax
        jz      L_after_loop3
L_loop3:
        lea     ecx, [esp + 0x10]
        call    FUN_00417700
        lea     ecx, [esp + 0x28]
        call    FUN_00417700
        test    eax, eax
        jnz     L_loop3
L_after_loop3:
        lea     ecx, [esp + 0x28]
        call    FUN_004176d0
        lea     ecx, [esp + 0x10]
        call    FUN_004176d0
        lea     ecx, [esp + 0x28]
        call    FUN_00417720
        test    eax, eax
        jz      L_after_loop4
L_loop4:
        lea     ecx, [esp + 0x10]
        call    FUN_00417720
        lea     ecx, [esp + 0x28]
        call    FUN_00417720
        test    eax, eax
        jnz     L_loop4
L_after_loop4:
        lea     ecx, [esp + 0x10]
        call    FUN_004176a0
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x18]
        call    FUN_00417640
        push    0x1
        push    esi
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00417640
        mov     dword ptr [esp + 0x28], edi
        xor     ebp, ebp
L_loop5:
        push    ebp
        lea     ecx, [esp + 0x14]
        call    FUN_00417750
        push    ebp
        lea     ecx, [esp + 0x2c]
        call    FUN_00417750
        inc     ebp
        cmp     ebp, 0x32
        jl      L_loop5
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        lea     ecx, [esp + 0x10]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x30]
        call    FUN_00417640
        push    0x1
        push    esi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x30], edi
        call    FUN_00417640
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x10], edi
        call    FUN_00417740
        test    eax, eax
        jz      L_after_loop6
L_loop6:
        lea     ecx, [esp + 0x28]
        call    FUN_00417780
        push    0x0
        lea     ecx, [esp + 0x14]
        call    FUN_00417750
        test    eax, eax
        jz      L_after_call
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_after_call:
        lea     ecx, [esp + 0x28]
        call    FUN_00417740
        test    eax, eax
        jnz     L_loop6
L_after_loop6:
        lea     ecx, [esp + 0x10]
        call    FUN_004176a0
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x18]
        call    FUN_00417640
        push    0x1
        push    esi
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00417640
        mov     dword ptr [esp + 0x28], edi
        xor     ebp, ebp
L_alloc_loop2:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc2_done
        push    ebp
        mov     ecx, eax
        call    FUN_0040b410
        mov     edi, eax
        jmp     L_after_alloc2
L_alloc2_done:
        xor     edi, edi
L_after_alloc2:
        push    edi
        mov     ecx, ebx
        call    FUN_00417530
        push    edi
        mov     ecx, esi
        call    FUN_00417530
        inc     ebp
        cmp     ebp, 0x32
        jl      L_alloc_loop2
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        lea     ecx, [esp + 0x10]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x30]
        call    FUN_00417640
        push    0x1
        mov     ebp, 0x76cff8
        push    esi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x30], ebp
        call    FUN_00417640
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x10], ebp
        call    FUN_00415cc0
        test    eax, eax
        jz      L_after_loop7
L_loop7:
        push    eax
        call    FUN_00415040
        add     esp, 0x4
        mov     esi, eax
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_00417750
        lea     ecx, [esp + 0x28]
        call    FUN_00417780
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_00417750
        test    eax, eax
        jz      L_after_call2
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L_after_call2:
        lea     ecx, [esp + 0x28]
        call    FUN_00415cc0
        test    eax, eax
        jnz     L_loop7
L_after_loop7:
        lea     ecx, [esp + 0x10]
        call    FUN_004176a0
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x30]
        call    FUN_00417640
        mov     dword ptr [esp + 0x28], ebp
        xor     esi, esi
L_alloc_loop3:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc3_done
        push    esi
        mov     ecx, eax
        call    FUN_0040b410
        mov     edi, eax
        jmp     L_after_alloc3
L_alloc3_done:
        xor     edi, edi
L_after_alloc3:
        test    esi, esi
        jnz     L_else
        push    edi
        mov     ecx, ebx
        call    FUN_00417530
        jmp     L_after_if
L_else:
        lea     ecx, [esp + 0x28]
        call    FUN_004176c0
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_00417790
L_after_if:
        inc     esi
        cmp     esi, 0x32
        jl      L_alloc_loop3
        xor     esi, esi
L_loop8:
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_00417750
        inc     esi
        cmp     esi, 0x32
        jl      L_loop8
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x8]
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x30]
        call    FUN_00417640
        mov     dword ptr [esp + 0x28], ebp
        xor     esi, esi
L_alloc_loop4:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc4_done
        push    esi
        mov     ecx, eax
        call    FUN_0040b410
        mov     edi, eax
        jmp     L_after_alloc4
L_alloc4_done:
        xor     edi, edi
L_after_alloc4:
        test    esi, esi
        jnz     L_else2
        push    edi
        mov     ecx, ebx
        call    FUN_00417530
        jmp     L_after_if2
L_else2:
        lea     ecx, [esp + 0x28]
        call    FUN_004176d0
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_00417790
L_after_if2:
        inc     esi
        cmp     esi, 0x32
        jl      L_alloc_loop4
        xor     esi, esi
L_loop9:
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_00417750
        inc     esi
        cmp     esi, 0x32
        jl      L_loop9
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x28]
        call    FUN_004176a0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x30
        ret
    }
}
