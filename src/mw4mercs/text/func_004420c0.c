/*
 * FUN_004420c0 (152 B) — MLR mesh constructor (__thiscall, RET 0xc).
 * Sets vtable 0x76e6f0, initializes sub-objects at this+0x64/0x6c, and
 * configures render-state flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00458360(void);
extern void FUN_004911e0(void);
extern void FUN_00491280(void);
extern void FUN_006f4950(void);
extern void FUN_00491440(void);
extern void FUN_006f49a0(void);

extern int g_007b9580;

__declspec(naked) void FUN_004420c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        push    ebx
        push    ebp
        mov     esi, ecx
        push    eax
        call    FUN_00458360
        lea     ecx, [esi + 0x64]
        call    FUN_004911e0
        lea     edi, [esi + 0x6c]
        mov     ecx, edi
        call    FUN_00491280
        mov     ecx, dword ptr [g_007b9580]
        push    ecx
        mov     dword ptr [esi], 0x76e6f0
        call    FUN_006f4950
        push    ebx
        push    ebp
        mov     ecx, edi
        call    FUN_00491440
        call    FUN_006f49a0
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [edi + 0x8]
        mov     ebp, dword ptr [esi + 0x3c]
        mov     ebx, dword ptr [esi + 0x30]
        and     ecx, 0xfbffffff
        mov     dword ptr [edi], ecx
        or      eax, 0x4000000
        mov     ecx, 0xf
        or      ebp, ecx
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [esi + 0x3c], ebp
        mov     edx, dword ptr [edi + 0x10]
        mov     eax, 0xfffffff0
        and     ebx, eax
        mov     dword ptr [esi + 0x30], ebx
        or      edx, ecx
        mov     ecx, dword ptr [edi + 0x4]
        and     ecx, eax
        mov     dword ptr [edi + 0x10], edx
        mov     dword ptr [edi + 0x4], ecx
        pop     edi
        mov     byte ptr [esi + 0x11], 0x2
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
