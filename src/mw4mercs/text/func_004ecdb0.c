/*
 * FUN_004ecdb0 (73 B) — __thiscall, RET 0x4 (1 stack arg). Constructor:
 * calls FUN_00415180, zeroes fields, sets vtables 0x76cd9c / 0x774880 /
 * 0x77487c, calls FUN_00416990, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);

__declspec(naked) void FUN_004ecdb0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     ebx, ebx
        push    ebx
        lea     edi, [esi+0x18]
        mov     dword ptr [esi], 0x76cd9c
        push    ebx
        mov     ecx, edi
        mov     dword ptr [esi+8], ebx
        mov     dword ptr [esi+0xc], ebx
        mov     dword ptr [esi+0x14], ebx
        mov     dword ptr [esi+0x10], ebx
        call    FUN_00416990
        mov     dword ptr [edi], 0x774880
        pop     edi
        mov     dword ptr [esi+0x2c], ebx
        mov     byte ptr [esi+0x30], bl
        mov     dword ptr [esi], 0x77487c
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
