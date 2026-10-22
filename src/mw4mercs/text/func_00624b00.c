/*
 * FUN_00624b00 (119 B) — __thiscall recursive tree/container destructor.
 * Recursively destroys child at [this+0xc], frees each element in the
 * [this+0x14..0x18] array via FUN_006250d0, frees the array buffer via
 * FUN_00624b80, then operator-deletes this (FUN_004084e0) and walks the
 * sibling chain at [this+0x8]. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006250d0(void *p);
extern void __cdecl FUN_00624b80(void *p, int n);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00624b00(void)
{
    __asm {
        push    ecx
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    edi, edi
        mov     dword ptr [esp + 0x4], ecx
        jz      L_624b72
        push    ebx
        push    ebp
        push    esi
L_624b11:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00624b00
        mov     ebp, dword ptr [edi + 0x14]
        mov     ebx, dword ptr [edi + 0x18]
        mov     ecx, dword ptr [edi + 0x8]
        mov     esi, ebp
        cmp     esi, ebx
        mov     dword ptr [esp + 0x18], ecx
        jz      L_624b41
L_624b31:
        push    esi
        call    FUN_006250d0
        add     esi, 0x4
        add     esp, 0x4
        cmp     esi, ebx
        jnz     L_624b31
L_624b41:
        test    ebp, ebp
        jz      L_624b5a
        mov     edx, dword ptr [edi + 0x1c]
        sub     edx, ebp
        sar     edx, 0x2
        shl     edx, 0x2
        push    edx
        push    ebp
        call    FUN_00624b80
        add     esp, 0x8
L_624b5a:
        test    edi, edi
        jz      L_624b67
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_624b67:
        mov     edi, dword ptr [esp + 0x18]
        test    edi, edi
        jnz     L_624b11
        pop     esi
        pop     ebp
        pop     ebx
L_624b72:
        pop     edi
        pop     ecx
        ret     0x4
    }
}
