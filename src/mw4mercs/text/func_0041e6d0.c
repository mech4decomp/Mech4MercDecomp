/*
 * FUN_0041e6d0 (58 B) — __thiscall constructor for the Stream object
 * (vtable 0x76d7b0). Calls base constructor FUN_00415180 with arg1, then
 * initializes the stream fields: [esi+0x10]=[esi+0x18]=arg2,
 * [esi+0x14]=arg2+arg4, [esi+0x1c]=arg3, [esi+0x8]=0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void *);

__declspec(naked) void FUN_0041e6d0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     eax, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [esi+0x10], eax
        mov     dword ptr [esi+0x18], eax
        add     eax, edx
        mov     dword ptr [esi+0x14], eax
        mov     dword ptr [esi], 0x76d7b0
        mov     dword ptr [esi+0x1c], ecx
        mov     dword ptr [esi+0x8], 0
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
