/*
 * FUN_00429860 (65 B) — __cdecl factory: allocates a 0x3c-byte object,
 * constructs it via FUN_00429730(param_1, param_2), returns it (or 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9590;
extern void __cdecl FUN_006f4950(int);
extern void * __cdecl FUN_004084d0(unsigned int);
extern int __cdecl FUN_00429730(int, int);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00429860(void)
{
    __asm {
        mov     eax, dword ptr [g_007b9590]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x3c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_429896
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_00429730
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
L_429896:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
