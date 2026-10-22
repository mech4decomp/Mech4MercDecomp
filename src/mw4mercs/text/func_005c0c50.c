/*
 * FUN_005c0c50 (62 B) — __cdecl, RET. Returns a float (FPU ST0).
 *
 * Reads globals 0x007dab44/0x007dab40, conditionally calls a virtual
 * method, returns a float.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005c0c50(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00787964;
extern int DAT_00787904;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x20]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x20]
        jnz     cont
        fld dword ptr [DAT_00787964]
        ret
cont:
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        fld     dword ptr [DAT_00787904]
        fmul    dword ptr [eax + 0x80]
        ret
    }


}
