/*
 * FUN_1000e5a0 (138 B) - __fastcall. Object destructor with SEH prologue;
 * sets vtable 0x100496b0, calls FUN_1002e220 / FUN_10001d60 / FUN_1001c750.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e220(void);   /* rel32 call (__stdcall) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (__cdecl) */
extern void __cdecl FUN_1001c750(void);   /* rel32 call (__fastcall) */

__declspec(naked) void __fastcall func_1000e5a0(void)
{
    __asm {
        push    -0x1
        push    0x10047ab8
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x100496b0
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        setnz   cl
        mov     dword ptr [esp + 0x14], 0x0
        push    ecx
        call    FUN_1002e220
        mov     edx, dword ptr [esi + 0x2c]
        push    edx
        mov     edx, dword ptr [esi + 0xc]
        test    edx, edx
        setnz   al
        push    eax
        call    FUN_1002e220
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     L_e60b
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        call    FUN_10001d60
        add     esp, 0x8
    L_e60b:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c750
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
