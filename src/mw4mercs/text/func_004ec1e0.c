/*
 * FUN_004ec1e0 (98 B) — __thiscall constructor (RET 0x10, 4 args).
 * MLR/Adept AudioChannel-style object ctor: calls FUN_00415180(param_1),
 * zeroes/initializes member fields, sets vtable 0x774748, then calls
 * FUN_00724a00(param_2,0), FUN_00725060(param_2,param_4), and __thiscall
 * FUN_004ec300(this). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00415180(int);
extern void __stdcall FUN_00724a00(int, int);
extern void __stdcall FUN_00725060(int, int);
extern void __cdecl FUN_004ec300(void);

__declspec(naked) void* FUN_004ec1e0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     edi, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0x18]
        mov     ebx, dword ptr [esp+0x1c]
        xor     eax, eax
        push    eax
        mov     dword ptr [esi+0x28], eax
        push    edi
        mov     dword ptr [esi+8], eax
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi+0x10], eax
        mov     dword ptr [esi+0x14], eax
        mov     dword ptr [esi+0x18], edi
        mov     dword ptr [esi+0x1c], ecx
        mov     dword ptr [esi+0x20], ebx
        mov     dword ptr [esi+0x24], 4
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi], 0x774748
        call    FUN_00724a00
        push    ebx
        push    edi
        call    FUN_00725060
        mov     ecx, esi
        call    FUN_004ec300
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
