/*
 * FUN_004ba210 (94 B) — MLR subsystem __thiscall dtor. RET (void).
 *
 * CFLAGS: /O1
 */

extern void FUN_004084e0(void);
extern void FUN_004c68f0(void);

__declspec(naked) void FUN_004ba210(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x770fac
        mov     eax, dword ptr [esi+0x15c]
        test    eax, eax
        jz      L_4ba22c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4ba22c:
        mov     eax, dword ptr [esi+0x154]
        test    eax, eax
        jz      L_4ba23f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4ba23f:
        mov     eax, dword ptr [esi+0x14c]
        test    eax, eax
        jz      L_4ba252
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4ba252:
        mov     eax, dword ptr [esi+0x144]
        test    eax, eax
        jz      L_4ba265
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4ba265:
        mov     ecx, esi
        call    FUN_004c68f0
        pop     esi
        ret
    }
}
