/* FUN_004178d0 - __thiscall, RET 0x10 (4 args)
 * Builds a node: this+0=arg2, this+0xc=arg1, calls FUN_00417950(this,arg2),
 * then this+4=arg3, this+8=arg4, and links into arg4->+4 / arg3->+8.
 */
extern void __cdecl FUN_00417950(void);

__declspec(naked) void FUN_004178d0(void)
{
    __asm {
        mov eax, dword ptr [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp+8]
        mov dword ptr [esi+0ch], ecx
        push eax
        mov ecx, esi
        mov dword ptr [esi], eax
        call FUN_00417950
        mov eax, dword ptr [esp+14h]
        test eax, eax
        mov ecx, dword ptr [esp+10h]
        mov dword ptr [esi+4], ecx
        mov dword ptr [esi+8], eax
        jz L_fd
        mov dword ptr [eax+4], esi
    L_fd:
        test ecx, ecx
        jz L_104
        mov dword ptr [ecx+8], esi
    L_104:
        mov eax, esi
        pop esi
        ret 10h
    }
}
