/*
 * DirectDrawCreateEx (499 B) — COM factory. Validates the IID GUID,
 * allocates a 0x34-byte object, fills two vtables, and dispatches to
 * either the real DirectDrawCreateEx (IAT) or an alternate entry
 * (DAT_5e03a4c0) depending on whether that pointer is set.
 *
 * __stdcall, RET 0x10 (4 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e001510(void);
extern void *__cdecl FUN_5e02b45e(unsigned int);   /* operator new */
extern void __cdecl FUN_5e02b453(void *);          /* operator delete */
extern int (*g_5e03a4a8)(void);                    /* IAT: real DirectDrawCreateEx */
extern int (*g_5e03a4c0)(void);                    /* DAT_5e03a4c0 (alt entry) */

__declspec(naked) void __stdcall DirectDrawCreateEx(void)
{
    __asm {
        sub     esp, 0x10
        mov     ecx, 4
        xor     eax, eax
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x24]
        push    edi
        mov     edi, 0x5e0354e0
        repe    cmpsd
        jz      L_11e6
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebp
        add     esp, 0x10
        ret     0x10
    L_11e6:
        call    FUN_5e001510
        mov     esi, dword ptr [esp + 0x20]
        xor     ebp, ebp
        cmp     esi, ebp
        jz      L_121a
        xor     ecx, ecx
        lea     edi, [esp + 0xc]
        mov     dword ptr [esp + 0x10], ecx
        xor     edx, edx
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0xc], ebp
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, 4
        repe    cmpsd
        jnz     L_121a
        mov     dword ptr [esp + 0x20], ebp
    L_121a:
        mov     eax, dword ptr [esp + 0x24]
        push    0x34
        mov     dword ptr [eax], ebp
        call    FUN_5e02b45e
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_13a5
        mov     eax, dword ptr [g_5e03a4c0]
        push    ebx
        lea     edi, [esi + 0x8]
        lea     ebx, [esi + 0x20]
        mov     dword ptr [esi + 0x4], 0x5e03540c
        mov     dword ptr [esi + 0x18], ebp
        mov     dword ptr [edi], 0x5e035394
        mov     dword ptr [ebx], ebp
        mov     dword ptr [esi + 0x24], ebp
        mov     dword ptr [esi + 0xc], 0x5e035370
        lea     ebp, [esi + 0x28]
        mov     dword ptr [esi + 0x10], 0x5e035340
        mov     dword ptr [esi + 0x14], 0x5e035320
        mov     dword ptr [esi + 0x2c], 0
        test    eax, eax
        mov     dword ptr [ebp], 0
        mov     dword ptr [esi + 0x30], 0
        mov     dword ptr [esi], 0x5e0352c4
        mov     dword ptr [esi + 0x4], 0x5e035254
        mov     dword ptr [edi], 0x5e0351dc
        mov     dword ptr [esi + 0xc], 0x5e0351b8
        mov     dword ptr [esi + 0x10], 0x5e035188
        mov     dword ptr [esi + 0x14], 0x5e035168
        jz      L_1306
        mov     ecx, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        push    0x5e0354e0
        push    ebp
        push    edx
        call    eax
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jl      L_1366
        mov     eax, dword ptr [ebp]
        lea     ecx, [esi + 0x2c]
        push    ecx
        push    0x5e0355b0
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx]
        mov     ebp, dword ptr [ebp]
        push    ebx
        push    0x5e0354b0
        push    ebp
        mov     eax, dword ptr [ebp]
        call    dword ptr [eax]
        mov     ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 0x4]
        pop     ebx
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [edx], edi
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x10
        ret     0x10
    L_1306:
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x24]
        push    eax
        push    ebx
        push    ecx
        call    dword ptr [g_5e03a4a8]
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jl      L_1366
        mov     eax, dword ptr [ebx]
        push    ebp
        push    0x5e0354d0
        push    eax
        mov     edx, dword ptr [eax]
        call    dword ptr [edx]
        mov     eax, dword ptr [ebx]
        lea     ecx, [esi + 0x24]
        push    ecx
        push    0x5e035580
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx]
        mov     ebx, dword ptr [ebx]
        lea     eax, [esi + 0x2c]
        push    eax
        push    0x5e0355a0
        mov     ecx, dword ptr [ebx]
        push    ebx
        call    dword ptr [ecx]
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x4]
        pop     ebx
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [eax], edi
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x10
        ret     0x10
    L_1366:
        push    esi
        mov     dword ptr [esi], 0x5e0352c4
        mov     dword ptr [esi + 0x4], 0x5e035254
        mov     dword ptr [edi], 0x5e0351dc
        mov     dword ptr [esi + 0xc], 0x5e0351b8
        mov     dword ptr [esi + 0x10], 0x5e035188
        mov     dword ptr [esi + 0x14], 0x5e035168
        call    FUN_5e02b453
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 4
        pop     ebx
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x10
        ret     0x10
    L_13a5:
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebp
        add     esp, 0x10
        ret     0x10
    }
}
