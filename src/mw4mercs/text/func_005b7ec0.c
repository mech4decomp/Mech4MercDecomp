/*
 * FUN_005b7ec0 (25 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Forwards (this, param1, param2) to FUN_005b8080 with ECX = DAT_007f2114.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005b8080(void);

__declspec(naked) void __fastcall FUN_005b7ec0(void)
{
    

extern int DAT_007f2114;
__asm {
mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    eax
        push    edx
        push    ecx
        mov ecx, dword ptr [DAT_007f2114]
        call    FUN_005b8080
        ret     8
    }


}
