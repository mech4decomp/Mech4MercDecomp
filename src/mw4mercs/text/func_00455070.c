/*
 * FUN_00455070 (73 B) — MLR material/render helper constructor (default).
 * __thiscall (ECX = this). Initializes sub-objects and default fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00458560(void);
extern void __cdecl FUN_004911e0(void);
extern void __cdecl FUN_00491280(void);

__declspec(naked) void FUN_00455070(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00458560
        lea     ecx, [esi+0x68]
        call    FUN_004911e0
        lea     ecx, [esi+0x70]
        call    FUN_00491280
        xor     eax, eax
        mov     dword ptr [esi+0x88], eax
        mov     dword ptr [esi+0x90], eax
        mov     dword ptr [esi], 0x76eb50
        mov     dword ptr [esi+0x8c], 0x3f800000
        mov     byte ptr [esi+0x64], 1
        mov     byte ptr [esi+0x11], 2
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
