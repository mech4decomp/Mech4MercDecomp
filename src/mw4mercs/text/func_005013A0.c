/*
 * FUN_005013A0 (65 B) — __cdecl (RET 0x10). Calls FUN_0041A280 with
 * (esi = [arg0+0xd8]+0x80, arg2, arg3). If it returns false, copies 0xc
 * dwords from esi to arg1 and returns 1; else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041a280(void);

__declspec(naked) void FUN_005013A0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        push    ecx
        lea     esi, [eax + 0x80]
        push    edx
        push    esi
        call    FUN_0041a280
        add     esp, 0xc
        test    al, al
        jne     L_5013db
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     ecx, 0xc
        rep     movsd
        pop     edi
        mov     al, 1
        pop     esi
        ret     0x10
L_5013db:
        xor     al, al
        pop     esi
        ret     0x10
    }
}
