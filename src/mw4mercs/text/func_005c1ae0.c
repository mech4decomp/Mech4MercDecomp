/*
 * FUN_005c1ae0 (92 B) — __thiscall (ECX = this), RET 4.
 *
 * Calls FUN_006f4950(DAT_007f2460). If FUN_00415230(DAT_007f1f84) is
 * nonzero and (*(this+0x170))->field_99c is nonzero: calls the virtual
 * method at vtable+0xb8, calls FUN_00707e70(0), stores the float result
 * at this+0x578 and param at this+0x57c. Finally calls FUN_006f49a0().
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1ae0(int param_1, int param_2)
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006F4950(void);
extern int DAT_007f1f84;
extern void __cdecl FUN_100415217(void);
extern void __cdecl FUN_00707e38(void);
extern void __cdecl FUN_006f4953(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    edi
        push    eax
        mov     edi, ecx
        call FUN_006F4950
        mov eax, dword ptr [DAT_007f1f84]
        mov     esi, dword ptr [edi + 0x170]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415217
        test    al, al
        jz      l_b32
        mov     eax, dword ptr [esi + 0x99c]
        test    eax, eax
        jz      l_b32
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xb8]
        push    0x0
        call FUN_00707e38
        fstp    dword ptr [edi + 0x578]
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x57c], eax
    l_b32:
        call FUN_006f4953
        pop     edi
        pop     esi
        ret     0x4
    }


}
