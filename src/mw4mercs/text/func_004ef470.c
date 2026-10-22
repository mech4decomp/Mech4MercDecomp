/*
 * FUN_004ef470 (114 B) — MLR/Adept application core, __thiscall with 3 stack
 * args (RET 0xc). Initializes a gosFXComponent: calls FUN_004ef510 /
 * FUN_004f0ce0, sets vtable PTR_FUN_00774c60, dispatches a virtual call,
 * sets scale fields (0x178/0x17c/0x180 = 1.0f), ORs a flag, calls a virtual
 * method, then FUN_006f4950 / FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ef510(void);
extern void __cdecl FUN_004f0ce0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern int g_007daa50;

__declspec(naked) void FUN_004ef470(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    edi
        mov     esi, ecx
        call    FUN_004ef510
        mov     ecx, dword ptr [esp + 0x10]
        add     esp, 0x4
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        push    ecx
        mov     ecx, esi
        call    FUN_004f0ce0
        mov     edx, dword ptr [edi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi], 0x774c60
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esi + 0x24]
        mov     eax, 0x3f800000
        mov     dword ptr [ecx + 0x178], eax
        mov     dword ptr [ecx + 0x17c], eax
        mov     dword ptr [ecx + 0x180], eax
        or      dword ptr [ecx + 0x18], 0x4
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [g_007daa50]
        push    eax
        call    FUN_006f4950
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
