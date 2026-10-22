/*
 * FUN_0064e480 (192 B) — ABL list/object helper (__thiscall, RET 0x8).
 * Removes an element from a list and updates a tree/object structure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_0064e210(void);

__declspec(naked) void FUN_0064e480(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     ecx, ebx
        call    FUN_005faef0
        mov     edi, dword ptr [eax + 4]
        mov     ecx, ebx
        call    FUN_005faef0
        mov     esi, dword ptr [eax]
        cmp     esi, edi
        jz      L4b0
L4a1:
        mov     eax, dword ptr [esp + 0x18]
        cmp     dword ptr [esi], eax
        jz      L4b0
        add     esi, 4
        cmp     esi, edi
        jnz     L4a1
L4b0:
        mov     ecx, ebx
        call    FUN_005faef0
        cmp     esi, dword ptr [eax + 4]
        jz      L539
        mov     ecx, dword ptr [ebp]
        mov     eax, dword ptr [ecx + 4]
        test    eax, eax
        mov     edx, ecx
        jz      L4df
L4c8:
        mov     edi, dword ptr [eax + 0x10]
        cmp     edi, dword ptr [esp + 0x18]
        jl      L4d8
        mov     edx, eax
        mov     eax, dword ptr [eax + 8]
        jmp     L4db
L4d8:
        mov     eax, dword ptr [eax + 0xc]
L4db:
        test    eax, eax
        jnz     L4c8
L4df:
        cmp     edx, ecx
        mov     dword ptr [esp + 0x14], edx
        jz      L4f6
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edx + 0x10]
        jl      L4f6
        lea     eax, [esp + 0x14]
        jmp     L4fe
L4f6:
        mov     dword ptr [esp + 0x18], ecx
        lea     eax, [esp + 0x18]
L4fe:
        mov     ecx, dword ptr [ebx + 0x30]
        push    ecx
        mov     ecx, dword ptr [eax]
        add     ecx, 0x14
        call    FUN_0064e210
        mov     ecx, ebx
        call    FUN_005faef0
        mov     edi, dword ptr [eax + 4]
        lea     edx, [esi + 4]
        cmp     edx, edi
        jz      L533
        mov     ecx, edi
        sub     ecx, edx
        sar     ecx, 2
        test    ecx, ecx
        jle     L533
L528:
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [esi], edx
        add     esi, 4
        dec     ecx
        jnz     L528
L533:
        add     edi, -4
        mov     dword ptr [eax + 4], edi
L539:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
