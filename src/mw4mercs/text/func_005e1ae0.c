/*
 * FUN_005e1ae0 (43 B) — Calls FUN_00559be0(0x35) if a global field is set.
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00559be0(int param);

__declspec(naked) void __cdecl FUN_005e1ae0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x2c]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x2c]
        jz      label_1b0a
        mov     ecx, dword ptr [eax]
        push    0x35
        xor     ecx, 0x85739531
        call    FUN_00559be0
    label_1b0a:
        ret
    }


}
