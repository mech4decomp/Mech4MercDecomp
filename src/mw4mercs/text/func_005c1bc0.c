/*
 * FUN_005c1bc0 (70 B) — __fastcall (ECX = this).
 *
 * Calls FUN_006f4950(). Calls the virtual method at vtable+0x164 with
 * (double)this->field_5e4. If it returns 1, calls FUN_00707e70(0),
 * stores the float at this+0x578 and 1.0f at this+0x57c. Calls
 * FUN_006f49a0().
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_005c1bc0(int param_1)
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f494c(void);
extern void __cdecl FUN_00707e4b(void);
extern void __cdecl FUN_006f4966(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    eax
        mov     esi, ecx
        call FUN_006f494c
        fld     dword ptr [esi + 0x5e4]
        mov     edx, dword ptr [esi]
        sub     esp, 0x8
        mov     ecx, esi
        fstp    qword ptr [esp]
        call    dword ptr [edx + 0x164]
        cmp     al, 0x1
        jnz     l_bff
        push    0x0
        call FUN_00707e4b
        fstp    dword ptr [esi + 0x578]
        mov     dword ptr [esi + 0x57c], 0x3f800000
    l_bff:
        call FUN_006f4966
        pop     esi
        ret
    }


}
