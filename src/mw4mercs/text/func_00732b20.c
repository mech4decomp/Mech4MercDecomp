/*
 * FUN_00732b20 (50 B) — __stdcall (RET 0x10, 4 args). Calls
 * FUN_00732c40(arg3, arg4, 0); if non-NULL result, writes result->[8] to
 * *arg1 and result->[4] to *arg2 (each guarded by non-NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00732c40(void *a, void *b, int c);

__declspec(naked) void __stdcall FUN_00732b20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0xc]
        push    0x0
        push    eax
        push    ecx
        call    FUN_00732c40
        test    eax, eax
        jz      L_4f
        mov     ecx, dword ptr [esp + 0x4]
        test    ecx, ecx
        jz      L_42
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [ecx], edx
    L_42:
        mov     ecx, dword ptr [esp + 0x8]
        test    ecx, ecx
        jz      L_4f
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx], edx
    L_4f:
        ret     0x10
    }
}
