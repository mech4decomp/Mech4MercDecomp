/*
 * FUN_00422510 (153 B) — MLR object ctor (__thiscall, RET 0x18).
 * Calls base ctor FUN_00415180, sets vtable 0x76ddc0, initializes
 * member fields, calls FUN_00412780 / FUN_00412ab0, and conditionally
 * resolves a handle via FUN_004906f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415180(void);
extern void FUN_00412780(void);
extern void FUN_00412ab0(void);
extern void FUN_004906f0(void);

__declspec(naked) void FUN_00422510(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x1c]
        xor     ebx, ebx
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
        mov     edi, dword ptr [edi]
        push    edi
        call    FUN_00412ab0
        mov     dword ptr [esi + 0x14], eax
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0x4
        cmp     eax, -0x1
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x28], ebx
        mov     byte ptr [esi + 0x24], 0x1
        jle     L91
        mov     ecx, dword ptr [esi + 0x30]
        mov     ecx, dword ptr [ecx + 0x10034]
        push    edi
        call    FUN_004906f0
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [esi + 0x2c], eax
        pop     edi
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x20], edx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x18
L91:
        mov     edx, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [esi + 0x18], ebx
        mov     dword ptr [esi + 0x2c], ebx
        mov     dword ptr [esi + 0x34], ebx
        mov     dword ptr [esi + 0x20], edx
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x18
    }
}
