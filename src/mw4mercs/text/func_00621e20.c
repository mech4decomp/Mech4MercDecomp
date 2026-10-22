/*
 * FUN_00621E20 (104 B) — Vector element lookup (__thiscall, RET 0x10).
 *
 * Scans the vector at this[0..1] for an element matching the four
 * criteria (param_1, param_2, param_3, param_4). On match, calls
 * FUN_00621930(element+0x14).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00621930(void);

__declspec(naked) void __fastcall FUN_00621e20(void *this, int param_1, char *param_2, int param_3, int param_4)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     edx, dword ptr [ebp]
        push    edi
        mov     edi, dword ptr [ebp + 0x4]
        cmp     edx, edi
        jz      l_0681
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [esp + 0x18]
    l_0638:
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      l_0666
        mov     ebx, dword ptr [eax + 0x4]
        cmp     ebx, dword ptr [esp + 0x14]
        jnz     l_0666
        mov     bl, byte ptr [eax + 0x18]
        cmp     bl, byte ptr [esi]
        jnz     l_0666
        mov     bx, word ptr [eax + 0x1a]
        cmp     bx, word ptr [esi + 0x2]
        jnz     l_0666
        mov     ebx, dword ptr [esp + 0x1c]
        cmp     dword ptr [eax + 0x8], ebx
        jnz     l_0666
        cmp     dword ptr [eax + 0xc], ecx
        jz      l_0674
    l_0666:
        add     edx, 0x4
        cmp     edx, edi
        jnz     l_0638
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    l_0674:
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [eax + 0x14]
        push    ecx
        mov     ecx, ebp
        call    FUN_00621930
    l_0681:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
