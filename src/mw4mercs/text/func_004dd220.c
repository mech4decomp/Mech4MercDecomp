/*
 * FUN_004dd220 (45 B) — __thiscall ctor (RET 0x8). Initializes an object
 * with vtable 0x773808, zeroes fields +0x8/+0xc/+0x10, stores *param_2 at
 * +0x14, and delegates to FUN_00415180.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_004dd220(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi], 0x773808
        mov     dword ptr [esi + 0x14], edx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
