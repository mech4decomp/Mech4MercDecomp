/*
 * FUN_100095b0 (112 B) - object constructor. Zeroes three 5-dword
 * counter groups (each with a 0x400 capacity dword), sets the vtable
 * pointer to 0x10021368, and zeroes the first two dwords.
 *
 * __fastcall (ECX = this). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __cdecl FUN_100095b0(void)
{
    __asm {
        mov     eax, ecx
        mov     edx, 0x400
        xor     ecx, ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], ecx
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
        mov     dword ptr [eax + 0xc0], ecx
        mov     dword ptr [eax + 0xc4], ecx
        mov     dword ptr [eax + 0xc8], ecx
        mov     dword ptr [eax + 0xcc], ecx
        mov     dword ptr [eax + 0xd0], ecx
        mov     dword ptr [eax + 0xd4], edx
        mov     dword ptr [eax + 0x158], ecx
        mov     dword ptr [eax + 0x15c], ecx
        mov     dword ptr [eax + 0x160], ecx
        mov     dword ptr [eax + 0x164], ecx
        mov     dword ptr [eax + 0x168], ecx
        mov     dword ptr [eax + 0x16c], edx
        mov     dword ptr [eax], 0x10021368
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret
    }
}
