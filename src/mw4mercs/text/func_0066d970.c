/*
 * FUN_0066d970 (50 B) — __thiscall destructor. Sets vtable 0x797180,
 * calls virtual method 0 (with arg 1) on the sub-objects at [this+0x80]
 * and [this+0x84] if non-null, then calls FUN_00561730().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561730(void);

__declspec(naked) void FUN_0066d970(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x80]
        test    ecx, ecx
        mov     dword ptr [esi], 0x797180
        jz      L_skip1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_skip1:
        mov     ecx, dword ptr [esi + 0x84]
        test    ecx, ecx
        jz      L_skip2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_skip2:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        ret
    }
}
