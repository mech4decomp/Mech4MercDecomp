/*
 * FUN_00648260 (404 B) — __thiscall (ECX=this), 2 stack params, RET 8.
 * Returns param_1 in EAX.
 *
 * Binary-search-tree insert: walks the tree, allocates/links a new node,
 * and returns it via param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00648560(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006485e0(void);
extern void __cdecl FUN_00411670(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_006485c0(void);

__declspec(naked) int *__stdcall FUN_00648260(void *param_1, void *param_2)
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
        jz      L_648294
L_64827a:
        mov     ecx, dword ptr [edx]
        cmp     ecx, dword ptr [edi + 0x10]
        setc    al
        test    al, al
        mov     esi, edi
        jz      L_64828d
        mov     edi, dword ptr [edi + 0x8]
        jmp     L_648290
L_64828d:
        mov     edi, dword ptr [edi + 0xc]
L_648290:
        test    edi, edi
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 (75 E6, ref 75 E8) */
        __emit 0xE8
L_648294:
        test    al, al
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_64834c
        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L_648337
        cmp     esi, ebp
        jz      L_6482d3
        test    edi, edi
        jnz     L_6482d3
        mov     eax, dword ptr [edx]
        cmp     eax, dword ptr [esi + 0x10]
        jc      L_6482d3
        push    edx
        mov     ecx, ebx
        call    FUN_00648560
        mov     ebp, dword ptr [ebx]
        mov     edi, eax
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [ebp + 0xc]
        jnz     L_648304
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_648304
L_6482d3:
        push    0x18
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x28]
        mov     edi, eax
        push    ecx
        lea     edx, [edi + 0x10]
        push    edx
        call    FUN_006485e0
        add     esp, 0xc
        cmp     esi, ebp
        mov     dword ptr [esi + 0x8], edi
        jnz     L_6482fc
        mov     dword ptr [ebp + 0x4], edi
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_648304
L_6482fc:
        cmp     esi, dword ptr [ebp + 0x8]
        jnz     L_648304
        mov     dword ptr [ebp + 0x8], edi
L_648304:
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
L_648337:
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004114b0
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x28]
        add     esp, 0x4
L_64834c:
        mov     eax, dword ptr [edx]
        cmp     dword ptr [ecx + 0x10], eax
        jnc     L_6483cf
        cmp     esi, ebp
        jz      L_648379
        test    edi, edi
        jnz     L_648379
        cmp     eax, dword ptr [esi + 0x10]
        jc      L_648379
        push    edx
        mov     ecx, ebx
        call    FUN_00648560
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esi + 0xc], edi
        cmp     esi, dword ptr [eax + 0xc]
        jnz     L_64839c
        mov     dword ptr [eax + 0xc], edi
        jmp     L_64839c
L_648379:
        push    edx
        mov     ecx, ebx
        call    FUN_00648560
        mov     edi, eax
        mov     eax, dword ptr [ebx]
        cmp     esi, eax
        mov     dword ptr [esi + 0x8], edi
        jnz     L_648394
        mov     dword ptr [eax + 0x4], edi
        mov     dword ptr [eax + 0xc], edi
        jmp     L_64839c
L_648394:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_64839c
        mov     dword ptr [eax + 0x8], edi
L_64839c:
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
L_6483cf:
        mov     esi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x1c], 0x0
        call    FUN_006485c0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
