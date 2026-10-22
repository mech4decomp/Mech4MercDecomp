/*
 * FUN_006137B0 (104 B) — Constructor (__thiscall, RET 4).
 *
 * Initializes a small object: sets vtable 0x78C280, zeroes several
 * fields, calls FUN_00415180(DAT_007b8c10), then FUN_00412a00 twice
 * and a virtual call through param_1's vtable+0x20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412a00(void);

__declspec(naked) void * __fastcall FUN_006137b0(void *this, int *param_1)
{
    __asm {
        mov     eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ebx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        lea     eax, [esi + 0x1c]
        lea     edi, [esi + 0x10]
        mov     word ptr [edi], 0xffff
        mov     word ptr [edi + 0x2], cx
        lea     ebp, [esi + 0x18]
        mov     dword ptr [ebp], ecx
        push    eax
        mov     dword ptr [eax], ecx
        push    ebx
        mov     dword ptr [esi + 0x8], ecx
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi], 0x78c280
        call    FUN_00412a00
        mov     edx, dword ptr [ebx]
        add     esp, 0x8
        push    0x4
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
        push    ebp
        push    ebx
        mov     dword ptr [esi + 0x14], 0xffffffff
        call    FUN_00412a00
        add     esp, 0x8
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
