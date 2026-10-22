/*
 * FUN_00658e40 (106 B) — __thiscall (this in ECX, RET 0x4).
 *
 * Grows a buffer: if capacity is low, calls FUN_00659360 to reallocate,
 * then allocates a 0x200-byte block via FUN_004084d0, copies a value
 * from the stack arg, and updates the buffer pointers at [this+0x10..0x1c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00659360(void);
extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_00658e40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x20]
        mov     eax, dword ptr [esi + 0x1c]
        sub     eax, ecx
        mov     ecx, dword ptr [esi + 0x24]
        sar     eax, 0x2
        sub     ecx, eax
        cmp     ecx, 0x2
        push    edi
        jnc     L_64
        push    0x0
        push    0x1
        mov     ecx, esi
        call    FUN_00659360
    L_64:
        mov     eax, dword ptr [esi + 0x1c]
        push    0x200
        lea     edi, [eax + 0x4]
        call    FUN_004084d0
        mov     dword ptr [edi], eax
        mov     eax, dword ptr [esi + 0x10]
        add     esp, 0x4
        test    eax, eax
        jz      L_8e
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
    L_8e:
        mov     dword ptr [esi + 0x1c], edi
        mov     edi, dword ptr [edi]
        mov     dword ptr [esi + 0x14], edi
        mov     edx, dword ptr [esi + 0x14]
        add     edi, 0x200
        mov     dword ptr [esi + 0x18], edi
        pop     edi
        mov     dword ptr [esi + 0x10], edx
        pop     esi
        ret     0x4
    }
}
