// 0x00560390: scalar deleting destructor
// __fastcall (this in ecx) with 1 stack param (flag), ret 4
// If flag & 1, calls operator delete on this

extern void __cdecl FUN_005603b0(void *this);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void *__fastcall func_00560390(void *this, int dummy, int flags)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_005603b0
        test byte ptr [esp + 8], 1
        je skip_delete
        push esi
        call FUN_004084e0
        add esp, 4
skip_delete:
        mov eax, esi
        pop esi
        ret 4
    }
}
