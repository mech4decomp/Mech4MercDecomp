/*
 * FUN_0061da20 (232 B) — __thiscall (ECX = this), no stack params, RET 0.
 *
 * Destructor-like: frees elements of a pointer array (FUN_006f4230), resets
 * vtable pointers (0x78c804 / 0x78c938), frees a buffer (FUN_006f4850),
 * reallocates via FUN_0061ef00, and frees the array storage (FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4230(void *p);
extern void __stdcall FUN_006f4850(void *a, void *b);
extern int  __cdecl FUN_0061ef00(int a, int b, int c, int d, int e);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_0061da20(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebp, dword ptr [esi + 0x10]
        push    edi
        mov     dword ptr [esi], 0x78c804
        mov     ebx, dword ptr [esi + 0x14]
        mov     edi, ebp
        cmp     edi, ebx
        jz      L_DA52
L_DA39:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_DA4B
        push    eax
        call    FUN_006f4230
        mov     dword ptr [edi], 0x0
L_DA4B:
        add     edi, 0x4
        cmp     edi, ebx
        jnz     L_DA39
L_DA52:
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [esi + 0x10]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 0x2
        xor     edi, edi
        cmp     ecx, edi
        jle     L_DA72
L_DA65:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [edx], ebx
        add     eax, 0x4
        add     edx, 0x4
        dec     ecx
        jnz     L_DA65
L_DA72:
        mov     eax, dword ptr [esi + 0xc]
        cmp     eax, edi
        mov     dword ptr [esi + 0x14], edx
        jz      L_DA86
        push    edi
        push    eax
        call    FUN_006f4850
        mov     dword ptr [esi + 0xc], edi
L_DA86:
        mov     eax, dword ptr [esi + 0x24]
        cmp     eax, edi
        mov     dword ptr [esi + 0x1c], edi
        jz      L_DA99
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 0x24], edi
L_DA99:
        mov     dword ptr [esi], 0x78c938
        mov     ebx, dword ptr [esi + 0x14]
        mov     edi, ebp
        cmp     edi, ebx
        jz      L_DAC1
L_DAA8:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_DABA
        push    eax
        call    FUN_006f4230
        mov     dword ptr [edi], 0x0
L_DABA:
        add     edi, 0x4
        cmp     edi, ebx
        jnz     L_DAA8
L_DAC1:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi + 0x14]
        push    0x0
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_0061ef00
        mov     dword ptr [esi + 0x14], eax
        mov     eax, dword ptr [esi + 0xc]
        add     esp, 0x14
        test    eax, eax
        jz      L_DAF2
        push    0x0
        push    eax
        call    FUN_006f4850
        mov     dword ptr [esi + 0xc], 0x0
L_DAF2:
        mov     esi, dword ptr [esi + 0x10]
        test    esi, esi
        jz      L_DB02
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_DB02:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
