/*
 * FUN_006591c0 (404 B) - Tree/ordered-list insertion routine.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Same structure as FUN_0064e710 but allocates 0x18 bytes and uses
 * different helper callees (FUN_006595a0 / FUN_006598b0 / FUN_00659600).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006595a0(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_006598b0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_00659600(void);

__declspec(naked) void __stdcall FUN_006591c0(void *p1, void *p2)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebp + 0x4]
        test    edi, edi
        mov     esi, ebp
        mov     al, 0x1
        jz      L1f4
L1da:
        mov     ecx, dword ptr [edx]
        cmp     ecx, dword ptr [edi + 0x10]
        setl    al
        test    al, al
        mov     esi, edi
        jz      L1ed
        mov     edi, dword ptr [edi + 0x8]
        jmp     L1f0
L1ed:
        mov     edi, dword ptr [edi + 0xc]
L1f0:
        test    edi, edi
        __emit 0x75   /* __emit: MSVC6 miscomputes this backward jnz rel8 (75 E6 vs ref 75 E8) */
        __emit 0xE8
L1f4:
        test    al, al
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L2ac
        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L297
        cmp     esi, ebp
        jz      L233
        test    edi, edi
        jnz     L233
        mov     eax, dword ptr [edx]
        cmp     eax, dword ptr [esi + 0x10]
        jl      L233
        push    edx
        mov     ecx, ebx
        call    FUN_006595a0
        mov     ebp, dword ptr [ebx]
        mov     edi, eax
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [ebp + 0xc]
        jnz     L264
        mov     dword ptr [ebp + 0xc], edi
        jmp     L264
L233:
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     edi, eax
        push    ecx
        lea     edx, [edi + 0x10]
        push    edx
        call    FUN_006598b0
        add     esp, 0xc
        cmp     esi, ebp
        mov     dword ptr [esi + 0x8], edi
        jnz     L25c
        mov     dword ptr [ebp + 0x4], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L264
L25c:
        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L264
        mov     dword ptr [ebp + 0x8], edi
L264:
        add     ebp, 0x4
        xor     eax, eax
        push    ebp
        push    edi
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0xc], eax
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
L297:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x4
L2ac:
        mov     eax, dword ptr [edx]
        cmp     dword ptr [ecx + 0x10], eax
        jge     L32f
        cmp     esi, ebp
        jz      L2d9
        test    edi, edi
        jnz     L2d9
        cmp     eax, dword ptr [esi + 0x10]
        jl      L2d9
        push    edx
        mov     ecx, ebx
        call    FUN_006595a0
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L2fc
        mov     dword ptr [eax + 0xc], edi
        jmp     L2fc
L2d9:
        push    edx
        mov     ecx, ebx
        call    FUN_006595a0
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        cmp     esi, eax
        mov     dword ptr [esi + 0x8], edi
        jnz     L2f4
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L2fc
L2f4:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L2fc
        mov     dword ptr [eax + 0x8], edi
L2fc:
        add     eax, 0x4
        xor     ecx, ecx
        push    eax
        push    edi
        mov     dword ptr [edi + 0x4], esi
        mov     dword ptr [edi + 0x8], ecx
        mov     dword ptr [edi + 0xc], ecx
        call    FUN_00411670
        mov     eax, dword ptr [ebx + 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x4], 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x8
L32f:
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_00659600
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
