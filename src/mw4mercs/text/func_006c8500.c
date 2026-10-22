/*
 * FUN_006c8500 (67 B) — __stdcall, RET 0x14 (five stack params).
 *
 * Allocates a 0x28-byte object via FUN_004084c0(0x28, g_0082e224);
 * if non-NULL, initializes it via FUN_006c88a0 and stores the result
 * in *param_1; otherwise stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082e224;
extern void *FUN_004084c0(int size, int allocator);
extern int FUN_006c88a0(void);

__declspec(naked) void __stdcall FUN_006c8500(void *param_1, void *param_2,
                                              void *param_3, void *param_4,
                                              void *param_5)
{
    __asm {
        mov     eax, dword ptr [g_0082e224]
        push    eax
        push    0x28
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      short loc_6c8538
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_006c88a0
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx], eax
        ret     0x14
loc_6c8538:
        mov     edx, dword ptr [esp + 0x4]
        xor     eax, eax
        mov     dword ptr [edx], eax
        ret     0x14
    }
}
