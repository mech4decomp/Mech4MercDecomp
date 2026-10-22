/*
 * FUN_0069a260 (19 B) - HUD list/vector node init (__fastcall/this, ECX).
 * Initializes a node: [node+4]=0, [node+8]=node, [node]=0, [node+0xc]=node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069a260(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0x8], eax
        mov     byte ptr [eax], 0x0
        mov     dword ptr [eax + 0xc], eax
        ret
    }
}
