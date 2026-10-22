/*
 * FUN_005E89F0 (58 B) — __thiscall (RET 0x10). Calls FUN_0041A280 with
 * (esi = [this+0x1c]+arg0, arg2, arg0). If it returns false, copies 0xc
 * dwords from esi to arg1 and returns 1; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041a280(void);

__declspec(naked) void FUN_005E89F0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 4]
        push    esi
        mov     esi, dword ptr [ecx + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        add     esi, edx
        push    ecx
        push    esi
        call    FUN_0041a280
        add     esp, 0xc
        test    al, al
        jne     L_5e8a24
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, 0xc
        rep     movsd
        pop     edi
        mov     al, 1
        pop     esi
        ret     0x10
L_5e8a24:
        xor     al, al
        pop     esi
        ret     0x10
    }
}
