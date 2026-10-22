/*
 * FUN_00683bc0 (119 B) — HUD element list: find the element with the
 * smallest aim-distance (float at +0x9c of a nested object), scanning the
 * list; returns the best element (or first if none better than -1000.0f).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00683530(int, int);

__declspec(naked) int FUN_00683bc0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    0x6
        push    esi
        call    FUN_00683530
        add     esp, 0x8
        test    eax, eax
        jnz     L_683c31
        mov     edx, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esi]
        mov     ecx, esi
        cmp     ecx, edx
        mov     dword ptr [esp + 0xc], 0xc47a0000
        mov     edi, edx
        jz      L_683c23
L_683bed:
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        jz      L_683c1c
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x9c]
        add     eax, 0x80
        fcom    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_683c1a
        fstp    dword ptr [esp + 0xc]
        mov     edi, ecx
        jmp     L_683c1c
L_683c1a:
        fstp    st(0)
L_683c1c:
        add     ecx, 0x4
        cmp     ecx, edx
        jnz     L_683bed
L_683c23:
        cmp     edi, edx
        jnz     L_683c2f
        mov     eax, dword ptr [esi]
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
L_683c2f:
        mov     eax, dword ptr [edi]
L_683c31:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    }
}
