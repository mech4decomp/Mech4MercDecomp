/*
 * FUN_005e1e70 (105 B) — __thiscall (ECX = this). If byte at this+0x41C is
 * clear, sets flag at this+0x10, calls FUN_005e1ee0, then drives a sub-object
 * (this+0xD8) through its vtable methods and sets this+0x41C = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e1ee0(void);

__declspec(naked) void FUN_005e1e70(void)
{
    __asm {
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x41C]
        test    al, al
        jnz     L_ed7
        mov     edx, dword ptr [edi + 0x10]
        or      edx, 0x800000
        push    esi
        mov     dword ptr [edi + 0x10], edx
        call    FUN_005e1ee0
        mov     esi, dword ptr [edi + 0xD8]
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi]
        and     eax, 0xFFFFFFBF
        or      eax, 0x80
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [edx + 0x48]
        or      dword ptr [esi + 0x18], 0xC0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [edi + 0x41C], 0x1
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        pop     esi
L_ed7:
        pop     edi
        ret
    }
}
