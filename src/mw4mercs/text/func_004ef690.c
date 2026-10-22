/* func_004ef690 - MLR/Adept state engine subsystem (__thiscall, RET 0x4) */
extern void __cdecl FUN_004f2350(void);
extern void __cdecl FUN_004ef640(void);

__declspec(naked) int func_004ef690(void)
{
    __asm {
        push esi
        mov esi, dword ptr [esp+0x8]
        mov eax, dword ptr [esi+0x2c]
        sub eax, 0x2
        push edi
        mov edi, ecx
        jz L_ce
        dec eax
        jz L_ae
        push esi
        call FUN_004f2350
        pop edi
        pop esi
        ret 0x4
L_ae:
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax+0x14]
        mov ecx, dword ptr [eax]
        push ecx
        push 0x3f800000
        push 0x3f800000
        mov ecx, edi
        call FUN_004ef640
        pop edi
        pop esi
        ret 0x4
L_ce:
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx+0x14]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx+0x14]
        mov eax, dword ptr [eax]
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        call dword ptr [edx+0x14]
        mov eax, dword ptr [eax]
        push eax
        mov ecx, edi
        call FUN_004ef640
        pop edi
        pop esi
        ret 0x4
    }
}
