/*
 * func_005dfda0 - Log dispatch helper (52 B)
 * Calls a virtual method through the obfuscated global object pointer.
 */
__declspec(naked) void func_005dfda0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db090;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        push    eax
        xor     eax, eax
        mov eax, dword ptr [DAT_007db090]
        mov     al, byte ptr [eax + 0x28]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0xc]
        push    0
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0
        push    eax
        call    dword ptr [edx + 0x30]
        ret
    }


}
