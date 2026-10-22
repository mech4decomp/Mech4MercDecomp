/*
 * FUN_004225b0 (108 B) — MLR object ctor (__thiscall, RET 0x14).
 * Calls base ctor FUN_00415180, sets vtable 0x76ddc0, initializes
 * member fields, and calls FUN_00412780 / FUN_00412ab0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415180(void);
extern void FUN_00412780(void);
extern void FUN_00412ab0(void);

__declspec(naked) void FUN_004225b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        xor     ebx, ebx
        mov     dword ptr [esi + 0x2c], eax
        mov     eax, dword ptr [eax + 0x10]
        lea     edi, [esi + 0x10]
        mov     dword ptr [esi + 0x30], ecx
        mov     dword ptr [edi], ebx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi + 0xc], ebx
        mov     dword ptr [esi], 0x76ddc0
        mov     dword ptr [esi + 0x1c], edx
        call    FUN_00412780
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_00412ab0
        mov     edx, dword ptr [esp + 0x20]
        add     esp, 0x4
        mov     dword ptr [esi + 0x14], eax
        pop     edi
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x28], ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     byte ptr [esi + 0x24], 0x1
        mov     dword ptr [esi + 0x20], edx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x14
    }
}
