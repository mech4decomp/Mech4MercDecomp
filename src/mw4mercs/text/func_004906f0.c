/*
 * FUN_004906f0 (138 B) — MLR light-name string refcount decrement + object
 * creation (__thiscall, RET 0x4). Decrements a refcounted string, then
 * allocates/constructs a light object and registers it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004164b0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00491b50(void);
extern void __cdecl FUN_00416470(void);
extern int g_007b95a4;

__declspec(naked) void FUN_004906f0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b95a4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     ebp, dword ptr [esp + 0x14]
        push    ebp
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        lea     ecx, [esp + 0x14]
        lea     edi, [esi + 4]
        push    ecx
        mov     ecx, edi
        call    FUN_004164b0
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x14]
        test    esi, esi
        setz    bl
        test    eax, eax
        jz      L_after_dec
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_after_dec
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_after_dec:
        test    bl, bl
        jz      L_done
        push    0x34
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_zero
        push    ebp
        mov     ecx, eax
        call    FUN_00491b50
        mov     esi, eax
        jmp     L_reg
    L_zero:
        xor     esi, esi
    L_reg:
        lea     edx, [esi + 0x10]
        push    edx
        push    esi
        mov     ecx, edi
        call    FUN_00416470
    L_done:
        call    FUN_006f49a0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
