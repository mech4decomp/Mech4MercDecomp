/*
 * FUN_00706E90 (122 B) — __cdecl RET (no args). Acquires/releases a lock
 * (IAT 0x76b110/0x76b100) around building a 0x50-byte stack struct from
 * globals and calling a virtual method (vtable+0x34). Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b110;   /* IAT */
extern void *g_0076b100;   /* IAT */

extern int g_008589ac;
extern int g_008589a4;
extern int g_008589a8;
extern int g_008589b0;
extern int g_008aaae4;

__declspec(naked) void FUN_00706E90(void)
{
    __asm {
        sub     esp, 0x50
        push    edi
        push    0x8aaa20
        call    dword ptr [g_0076b110]
        mov     edx, dword ptr [g_008589ac]
        xor     eax, eax
        push    0xa0
        push    0
        mov     ecx, 0x14
        lea     edi, [esp + 0xc]
        rep stosd
        mov     eax, dword ptr [g_008589a4]
        mov     ecx, dword ptr [g_008589a8]
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [g_008589b0]
        push    0x742630
        mov     dword ptr [esp + 0x30], edx
        push    0
        mov     dword ptr [esp + 0x38], eax
        mov     eax, dword ptr [g_008aaae4]
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0x18], 0x50
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0x34]
        push    0x8aaa20
        call    dword ptr [g_0076b100]
        xor     eax, eax
        pop     edi
        add     esp, 0x50
        ret
    }
}
