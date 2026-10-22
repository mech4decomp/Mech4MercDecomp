/*
 * FUN_005da6d0 (256 B) — __thiscall (ECX = this). Vector-style insert:
 * grows the backing buffer via FUN_005da8b0 when needed, then fills
 * `param_1` elements from param_2. Three growth/overwrite paths.
 *
 * __thiscall, RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005da8b0(void *this, unsigned int a, void *b);
extern void __stdcall FUN_005da7e0(void *dst, void *src);
extern void __stdcall FUN_005da7d0(void *this);

__declspec(naked) void FUN_005da6d0(void)
{
    __asm {
        sub     esp, 0xC
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp]
        mov     eax, dword ptr [ebp + 0x8]
        sub     eax, ebx
        push    esi
        mov     esi, dword ptr [esp + 0x1C]
        sar     eax, 0x2
        cmp     esi, eax
        push    edi
        jbe     L754
        mov     cl, byte ptr [ebp + 0x8]
        lea     edx, [esp + 0x20]
        push    edx
        mov     byte ptr [esp + 0x24], cl
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_005da8b0
        test    esi, esi
        mov     edi, dword ptr [esp + 0x10]
        jbe     L71E
L70A:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        push    edi
        call    FUN_005da7e0
        add     esp, 0x8
        add     edi, 0x4
        dec     esi
        jnz     L70A
L71E:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [ebp], eax
        mov     ecx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x4], edi
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_005da7d0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     0x8
L754:
        mov     edx, dword ptr [ebp + 0x4]
        mov     ecx, edx
        sub     ecx, ebx
        sar     ecx, 0x2
        cmp     esi, ecx
        jbe     L796
        mov     eax, ebx
        cmp     eax, edx
        mov     ebx, dword ptr [esp + 0x24]
        jz      L777
        mov     edi, dword ptr [ebx]
L76E:
        mov     dword ptr [eax], edi
        add     eax, 0x4
        cmp     eax, edx
        jnz     L76E
L777:
        sub     esi, ecx
        jz      L789
L77B:
        test    edx, edx
        jz      L783
        mov     eax, dword ptr [ebx]
        mov     dword ptr [edx], eax
L783:
        add     edx, 0x4
        dec     esi
        jnz     L77B
L789:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], edx
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     0x8
L796:
        test    esi, esi
        jbe     L7A9
        mov     eax, dword ptr [esp + 0x24]
        mov     eax, dword ptr [eax]
        mov     edi, ebx
        mov     ecx, esi
        rep stosd
        lea     ebx, [ebx + esi*0x4]
L7A9:
        mov     eax, edx
        sub     eax, edx
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, ebx
        jle     L7C3
        sub     edx, ebx
L7B8:
        mov     esi, dword ptr [edx + ecx*0x1]
        mov     dword ptr [ecx], esi
        add     ecx, 0x4
        dec     eax
        jnz     L7B8
L7C3:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], ecx
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret     0x8
    }
}
