/*
 * FUN_005c1e50 (35 B) — __thiscall (ECX = this), RET 8.
 *
 * Calls FUN_005c1cd0(param_1, param_2) then FUN_005d3050(param_1, param_2).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1e50(int param_1, int param_2)
{
    

extern void __cdecl FUN_1005c1cc6(void);
extern void __cdecl FUN_005d303d(void);
__asm {
push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        mov     esi, ecx
        push    ebx
        call FUN_1005c1cc6
        push    edi
        push    ebx
        mov     ecx, esi
        call FUN_005d303d
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    }


}
