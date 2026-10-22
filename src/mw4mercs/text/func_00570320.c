/* FUN_00570320 — 22 bytes */
__declspec(naked) unsigned int __stdcall FUN_00570320(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x44]
        xor     eax, 0x85739531
        ret
    }


}
