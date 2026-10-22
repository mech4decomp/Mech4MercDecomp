/*
 * FUN_005e1b30 (43 B) — XOR-keyed object check + optional call.
 *
 * Reads a pointer from 0x007DAB44, XORs the pointed-to dword with the
 * key at 0x007DAB40, then checks the dword at [ptr+0x2c] XOR 0x85739531.
 * If non-zero, calls FUN_00559be0(0x34).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00559be0(int);

__declspec(naked) void FUN_005e1b30(void)
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
        jz      l_ret
        mov     ecx, dword ptr [eax]
        push    0x34
        xor     ecx, 0x85739531
        call    FUN_00559be0
    l_ret:
        ret
    }


}
