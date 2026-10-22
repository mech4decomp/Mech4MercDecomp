/*
 * FUN_006810a0 (242 B) — __thiscall constructor. Calls FUN_00415180(),
 * zeroes a block of fields, wires up sub-object pointers (0x70..0x94),
 * sets vtable 0x798a3c, and selects a size/count pair based on param_1:
 *   1 -> 0x58, 2 -> 0x60/9, else 0x50/1.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(unsigned long a);
extern unsigned long g_007b8c10;   /* DAT_007b8c10 */
extern unsigned long g_vtable_798a3c; /* PTR_FUN_00798a3c */

__declspec(naked) void *__stdcall FUN_006810a0(void *param_1, void *param_2)
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
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi + 0x38], eax
        lea     ecx, [esi + 0x20]
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x40], eax
        lea     edx, [esi + 0x28]
        mov     dword ptr [esi + 0x44], eax
        lea     edi, [esi + 0x30]
        mov     dword ptr [esi + 0x48], eax
        mov     dword ptr [esi + 0x70], ecx
        lea     ebx, [esi + 0x38]
        mov     dword ptr [esi + 0x4c], eax
        mov     dword ptr [esi + 0x50], eax
        mov     dword ptr [esi + 0x54], eax
        mov     dword ptr [esi + 0x58], eax
        lea     ecx, [esi + 0x40]
        mov     dword ptr [esi + 0x80], ecx
        mov     dword ptr [esi + 0x5c], eax
        mov     dword ptr [esi + 0x60], eax
        mov     dword ptr [esi + 0x64], eax
        lea     ebp, [esi + 0x68]
        lea     ecx, [esi + 0x48]
        mov     dword ptr [ebp], eax
        mov     dword ptr [esi + 0x84], ecx
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [ebp + 4], eax
        mov     eax, dword ptr [esp + 0x18]
        lea     ecx, [esi + 0x50]
        mov     dword ptr [esi + 0x88], ecx
        mov     dword ptr [esi + 0x14], eax
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esi + 0x58]
        mov     dword ptr [esi + 0x8c], ecx
        mov     dword ptr [esi + 0x10], eax
        dec     eax
        lea     ecx, [esi + 0x60]
        mov     dword ptr [esi], offset g_vtable_798a3c
        mov     dword ptr [esi + 0x74], edx
        mov     dword ptr [esi + 0x78], edi
        mov     dword ptr [esi + 0x7c], ebx
        mov     dword ptr [esi + 0x90], ecx
        mov     dword ptr [esi + 0x94], ebp
        mov     dword ptr [esi + 0x18], 0x50
        mov     dword ptr [esi + 0x1c], 0x1
        jz      L82
        dec     eax
        jnz     L89
        pop     edi
        mov     dword ptr [esi + 0x18], 0x60
        mov     dword ptr [esi + 0x1c], 0x9
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
L82:
        mov     dword ptr [esi + 0x18], 0x58
L89:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
