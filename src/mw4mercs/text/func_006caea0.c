/*
 * FUN_006caea0 (69 B) — __stdcall, RET 0x14 (five stack params).
 *
 * Zeroes *param_1, allocates a 0x9c-byte object via FUN_004084d0(0x9c);
 * if non-NULL, constructs it via FUN_006cb0e0(param_2..param_5) and
 * stores the result in *param_1; otherwise stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(int size);
extern void *FUN_006cb0e0(void);

__declspec(naked) void __stdcall FUN_006caea0(void *param_1, void *param_2,
                                              void *param_3, void *param_4,
                                              void *param_5)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0x9c
        mov     dword ptr [esi], 0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      short loc_6caedd
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006cb0e0
        mov     dword ptr [esi], eax
        pop     esi
        ret     0x14
loc_6caedd:
        xor     eax, eax
        mov     dword ptr [esi], eax
        pop     esi
        ret     0x14
    }
}
