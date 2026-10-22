/*
 * FUN_005e1a80 (56 B) — Compares param_1 against a global field; calls
 * FUN_00559be0(0x30) or FUN_00559be0(0x33). __stdcall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00559be0(int param);

__declspec(naked) void __stdcall FUN_005e1a80(int param)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x2c]
        xor     ecx, 0x85739531
        jz      label_1ab5
        mov     edx, dword ptr [esp + 0x4]
        cmp     edx, dword ptr [ecx + 0x384]
        jnz     label_1aae
        push    0x30
        call    FUN_00559be0
        ret     0x4
    label_1aae:
        push    0x33
        call    FUN_00559be0
    label_1ab5:
        ret     0x4
    }


}
