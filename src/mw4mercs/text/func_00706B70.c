/*
 * FUN_00706B70 (120 B) — __stdcall RET 0x4 (1 param). Builds a 0x50-byte
 * stack struct from several globals (0x8589a4/a8/ac/b0, 0x8aaae4), calls
 * a virtual method (vtable+0x34) with a callback (0x705d60), then sets
 * two float fields on the arg object and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008589ac;
extern int g_008589a4;
extern int g_008589a8;
extern int g_008589b0;
extern int g_008aaae4;

__declspec(naked) void FUN_00706B70(void)
{
    __asm {
        sub     esp, 0x50
        mov     edx, dword ptr [g_008589ac]
        push    edi
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
        push    0x705d60
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
        mov     eax, dword ptr [esp + 0x58]
        mov     dword ptr [eax + 0x20], 0
        mov     dword ptr [eax + 0x24], 0xc0140000
        mov     al, 1
        pop     edi
        add     esp, 0x50
        ret     4
    }
}
