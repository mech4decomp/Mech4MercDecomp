/*
 * FUN_004B9D50 (132 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * Initializes two stack structs via FUN_00491280/FUN_00491670, copies
 * 6 dwords between them, and calls a virtual method (vtable+0x14) on
 * [ebx+0x144] with a pointer to a stack struct.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);

__declspec(naked) void FUN_004B9D50(void)
{
    __asm {
        sub     esp, 0x5c
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x30]
        call    FUN_00491280
        mov     eax, dword ptr [ebx + 0x140]
        mov     ecx, dword ptr [esp + 0x70]
        push    eax
        push    ecx
        xor     esi, esi
        lea     ecx, [esp + 0x38]
        mov     dword ptr [esp + 0x50], esi
        call    FUN_00491670
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x10], esi
        call    FUN_00491280
        mov     edx, dword ptr [esp + 0x74]
        and     edx, 0x3f
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [ebx + 0x80]
        mov     dword ptr [esp + 0xc], eax
        mov     ecx, 6
        lea     esi, [esp + 0x30]
        lea     edi, [esp + 0x14]
        rep movsd
        mov     ecx, dword ptr [esp + 0x6c]
        mov     edx, dword ptr [ecx + 0x26c]
        mov     ecx, dword ptr [ebx + 0x144]
        mov     dword ptr [esp + 0x2c], edx
        mov     eax, dword ptr [ecx]
        lea     edx, [esp + 0xc]
        push    edx
        call    dword ptr [eax + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x5c
        ret     0xc
    }
}
