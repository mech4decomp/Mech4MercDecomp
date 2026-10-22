/*
 * FUN_006F31E0 (46 B) — Destructor for object with vtable 0x79f6b8.
 *
 * Sets vtable to 0x79f6b8, calls vtable[2] on sub-object at +0x10,
 * calls FUN_004169c0 on sub-object at +0x24 and +0x10, then calls
 * base destructor FUN_00415380.
 *
 * __thiscall (ECX = this), no stack params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004169c0(int param);
extern void __fastcall FUN_00415380(int param);

__declspec(naked) void __stdcall FUN_006f31e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x10]
        push    edi
        lea     edi, dword ptr [esi + 0x10]
        mov     ecx, edi
        mov     dword ptr [esi], 0x0079f6b8
        call    dword ptr [eax + 8]
        lea     ecx, dword ptr [esi + 0x24]
        call    FUN_004169c0
        mov     ecx, edi
        call    FUN_004169c0
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
