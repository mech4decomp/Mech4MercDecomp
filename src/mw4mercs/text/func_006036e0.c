/*
 * FUN_006036E0 (45 B) — __thiscall (ECX = this, RET 0xc). Calls
 * FUN_00603a50(param_1, param_2, param_3), stores param_1 at [this+0x8c],
 * installs vtable 0x78b794, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00603a50(void *a, void *b, void *c);

__declspec(naked) void *FUN_006036e0(void *param_1, void *param_2, void *param_3)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_00603a50
        mov     dword ptr [esi + 0x8c], edi
        pop     edi
        mov     dword ptr [esi], 0x78b794
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
