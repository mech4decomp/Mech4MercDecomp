/*
 * FUN_004154d0 (58 B) — archive/database registered-class subsystem:
 * __thiscall circular-list walk. Starting at this[0xc], scans the sibling
 * list (next = node[0x10]) for a node whose [0xc] equals the arg; if found
 * and non-null, calls FUN_00417890(node) then FUN_00416130(g_007b8c20,
 * node). this=ECX, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c20;

extern void __cdecl FUN_00417890(void);
extern void __cdecl FUN_00416130(void);

__declspec(naked) void func_004154d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        push    esi
        mov     esi, eax
        test    esi, esi
        jz      L1
        mov     ecx, dword ptr [esp + 0x8]
        cmp     dword ptr [esi + 0xc], ecx
        jz      L2
    L3:
        mov     esi, dword ptr [esi + 0x10]
        cmp     esi, eax
        jz      L1
        cmp     dword ptr [esi + 0xc], ecx
        jnz     L3
    L2:
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00417890
        mov     ecx, dword ptr [g_007b8c20]
        push    esi
        call    FUN_00416130
    L1:
        pop     esi
        ret     4
    }
}
