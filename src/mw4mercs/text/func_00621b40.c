/*
 * FUN_00621b40 (87 B) — __thiscall (ECX = this) list-scan helper.
 *
 * Iterates a linked list from [this] to [this+4]; for each entry whose
 * object matches a key (type tag 0x2B and name, or a wildcard global
 * name), adds param_2 to the object's [0] field.
 *
 * RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_007dc694;
extern unsigned short g_007dc696;

__declspec(naked) void __stdcall FUN_00621b40(void *param1, void *param2)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [ecx + 0x4]
        push    esi
        mov     esi, dword ptr [ecx]
        cmp     esi, ebp
        jz      L_92
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        mov     edi, dword ptr [esp + 0x14]
L_55:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_89
        cmp     dword ptr [eax + 0x4], 0x2b
        jnz     L_89
        mov     cl, byte ptr [edi]
        cmp     byte ptr [eax + 0x18], cl
        jnz     L_72
        mov     bx, word ptr [eax + 0x1a]
        cmp     bx, word ptr [edi + 0x2]
        jz      L_87
L_72:
        cmp     cl, byte ptr [g_007dc694]
        jnz     L_89
        mov     cx, word ptr [g_007dc696]
        cmp     word ptr [edi + 0x2], cx
        jnz     L_89
L_87:
        add     dword ptr [eax], edx
L_89:
        add     esi, 0x4
        cmp     esi, ebp
        jnz     L_55
        pop     edi
        pop     ebx
L_92:
        pop     esi
        pop     ebp
        ret     0x8
    }
}
