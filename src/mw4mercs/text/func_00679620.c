/* FUN_00679620 - HUD spatial-hash grid: ctor (__thiscall, ECX=this, RET 0x4) */
extern int __cdecl FUN_005b7e60(int a, int b, int c);
extern void __cdecl FUN_00560420(void *p, int v);

__declspec(naked) void func_00679620(void)
{
    __asm {
        push esi
        push 0x0
        push 0x0
        mov esi, ecx
        mov ecx, dword ptr [esp+0x10]
        push 0x0
        call FUN_005b7e60
        mov ecx, dword ptr [esi+0x50]
        push eax
        call FUN_00560420
        mov dword ptr [esi+0x60], 0x0
        pop esi
        ret 0x4
    }
}
